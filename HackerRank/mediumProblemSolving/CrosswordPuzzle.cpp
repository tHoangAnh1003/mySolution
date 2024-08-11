#include <iostream>
#include <vector>
using namespace std;

bool fitsHorizontally(vector<string>& crossword, string word, int row, int col) {
    int len = word.length();
    if (col + len > 10)
        return false;

    for (int i = 0; i < len; i++) {
        if (crossword[row][col + i] != '-' && crossword[row][col + i] != word[i])
            return false;
    }
    return true;
}

bool fitsVertically(vector<string>& crossword, string word, int row, int col) {
    int len = word.length();
    if (row + len > 10)
        return false;

    for (int i = 0; i < len; i++) {
        if (crossword[row + i][col] != '-' && crossword[row + i][col] != word[i])
            return false;
    }
    return true;
}

void placeHorizontally(vector<string>& crossword, string word, int row, int col, vector<bool>& marked) {
    for (int i = 0; i < word.length(); i++) {
        if (crossword[row][col + i] == '-') {
            crossword[row][col + i] = word[i];
            marked.push_back(false);
        } else {
            marked.push_back(true);
        }
    }
}

void placeVertically(vector<string>& crossword, string word, int row, int col, vector<bool>& marked) {
    for (int i = 0; i < word.length(); i++) {
        if (crossword[row + i][col] == '-') {
            crossword[row + i][col] = word[i];
            marked.push_back(false);
        } else {
            marked.push_back(true);
        }
    }
}

void unplaceHorizontally(vector<string>& crossword, int row, int col, vector<bool>& marked) {
    for (int i = 0; i < marked.size(); i++) {
        if (!marked[i]) {
            crossword[row][col + i] = '-';
        }
    }
}

void unplaceVertically(vector<string>& crossword, int row, int col, vector<bool>& marked) {
    for (int i = 0; i < marked.size(); i++) {
        if (!marked[i]) {
            crossword[row + i][col] = '-';
        }
    }
}

bool solve(vector<string>& crossword, vector<string>& words, int index) {
    if (index == words.size())
        return true;

    for (int row = 0; row < 10; row++) {
        for (int col = 0; col < 10; col++) {
            if (crossword[row][col] == '-' || crossword[row][col] == words[index][0]) {
                if (fitsHorizontally(crossword, words[index], row, col)) {
                    vector<bool> marked;
                    placeHorizontally(crossword, words[index], row, col, marked);
                    if (solve(crossword, words, index + 1))
                        return true;
                    unplaceHorizontally(crossword, row, col, marked);
                }

                if (fitsVertically(crossword, words[index], row, col)) {
                    vector<bool> marked;
                    placeVertically(crossword, words[index], row, col, marked);
                    if (solve(crossword, words, index + 1))
                        return true;
                    unplaceVertically(crossword, row, col, marked);
                }
            }
        }
    }

    return false;
}

vector<string> crosswordPuzzle(vector<string> crossword, string words) {
    vector<string> result;
    vector<string> words_list;
    string delimiter = ";";
    size_t pos = 0;
    while ((pos = words.find(delimiter)) != string::npos) {
        string word = words.substr(0, pos);
        words_list.push_back(word);
        words.erase(0, pos + delimiter.length());
    }
    words_list.push_back(words);

    if (solve(crossword, words_list, 0)) {
        for (const string& row : crossword)
            result.push_back(row);
    }

    return result;
}

int main() {
    vector<string> crossword;
    for (int i = 0; i < 10; i++) {
        string row;
        cin >> row;
        crossword.push_back(row);
    }
    string words;
    cin >> words;

    vector<string> result = crosswordPuzzle(crossword, words);

    for (const string& row : result) {
        cout << row << endl;
    }

    return 0;
}
