#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameOfThrones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

// Link : https://www.hackerrank.com/challenges/game-of-thrones/problem

string gameOfThrones(string s) {
    map<char, int> countChar;
    
    for (size_t i = 0; i < s.length(); ++i) {
        countChar[s[i]] ++;
    }
    
    int countOdd = 0;
    
    for (auto it : countChar) {
        if (it.second % 2 == 1) {
            countOdd += 1;
        }
    }
    
    if (countOdd <= 1) return "YES";
    return "NO";
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
