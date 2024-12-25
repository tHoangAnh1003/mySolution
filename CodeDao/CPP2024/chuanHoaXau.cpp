#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void Chuanhoa(char *s);
int main()
{
	char *s;
	s = new char[MAX];
	//gets(s);	//Nhap chuoi s	
	cin.getline(s,MAX-1);
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}

void Chuanhoa(char *s) {
	int n = strlen(s);

	char c[100][100];
	int row = 0, col = 0;

	for (int i = 0; i < n; ++i) {
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
			c[row][col++] = s[i];
		} else {
			if (col != 0)
				row++;
			col = 0;
		}
	}

	if (col != 1)
		row++;
	int index = 0;

	for (int i = 0; i < row; ++i) {
		int x = strlen(c[i]);
		for (int j = 0; j < x; ++j) {
			if (j == 0) {
				s[index++] = char(toupper(c[i][j]));
			} else {
				s[index++] = char(tolower(c[i][j]));
			}
		}
		if (i != row - 1)
			s[index++] = ' ';
	}
	s[index++] = '\0';
}