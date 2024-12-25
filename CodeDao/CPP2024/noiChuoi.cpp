
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrlen(char *s);
char* myStrcat(char *s1, char *s2);

int main()
{
	char *s1 = NULL, *s2 = NULL;
	s1 = new char[MAX];
	s2 = new char[MAX];
	//gets(s1);
	//gets(s2);
	cin.getline(s1, MAX-1);
	cin.getline(s2, MAX-1);	
	char *s = myStrcat(s1, s2);
	puts(s);
	return 0;
}

int myStrlen(char *s) {
	int ans = 0;
	while (s[ans] != '\0') {
		ans ++;
	}
	return ans;
}

char * myStrcat(char *s1, char *s2) {
	int n = myStrlen(s1);
	int m = myStrlen(s2);

	char *s = new char[n + m];
	int index = 0;

	for (int i = 0; i < n; ++i) {
		s[index++] = s1[i];
	}
	// s[index++] = ' ';
	for (int i = 0; i < m; ++i) {
		s[index++] = s2[i];
	}

	s[index++] = '\0';

	return s;
}