#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);


int main()
{
	char s[MAX];

	fflush(stdin);
	fgets(s,300,stdin);

	char s1[MAX];
	myStrcpy(s1, 0, s, 0);
	Chuanhoa(s1);
	puts(s);
	puts(s1);
	return 0;
}


int myStrlen(char s[], int k) {
    while (s[k] != '\0') {
        k++;
    }
    return k;
}

void myStrcpy(char s[], int vt, char s1[], int k) {
    int len = myStrlen(s1, k);
    for (int i = k; i < len; ++i) {
        s[vt++] = s1[i];
    }
}

void Chuanhoa(char s[]) {
    char s1[MAX][MAX];
    int hang = 0, cot = 0;

    bool flag = false;
    for (int i = 0; i < myStrlen(s, 0); ++i) {
        if (s[i] == '.') {
            if (s[i - 1] != ' ') {
                hang++;
                s1[hang][0] = '.';
            } else {
                s1[hang][0] = '.';
                hang++;
            }
        }
        else if (s[i] != ' ') {
            flag = true;
            s1[hang][cot] = s[i];
            cot++;
        } else {
            s1[hang][cot] = '\0';
            cot = 0;
            if (flag) {
                hang ++;
                flag = false;
            }
        }
    }

    hang++;
    cot++;

    char res[MAX];
    int index = 0;

    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < myStrlen(s1[i], 0); ++j) {
            res[index] = s1[i][j];
            index++;
        }
        if (s1[i + 1][0] != '.') {
            res[index++] = ' ';
        }
    }

    res[index++] = '\0';

    int viTri = 0;

    for (int i = 0; i < index; ++i) {
        s[viTri] = res[i];
        viTri++;
    }

    s[viTri] = '\0';
}

