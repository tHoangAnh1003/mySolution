
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int main()
{
	char *s1 = NULL, *s2 = NULL;
	s1 = new char[MAX];
	s2 = new char[MAX];
	//gets(s1);
	//gets(s2);
	cin.getline(s1, MAX-1);
	cin.getline(s2, MAX-1);	
	int k; cin >> k;

	if (k < 0 || k > strlen(s1)) {
		printf("Vi tri %d khong thoa dieu kien.", k);
	} else {
		int n1 = strlen(s1);
		int n2 = strlen(s2);

		for (int i = 0; i < k; ++i) {
			cout << s1[i];
		}
		for (int i = 0; i < n2; ++i) {
			cout << s2[i];
		}
		for (int i = k; i < n1; ++i) {
			cout << s1[i];
		}
	}
	return 0;
}
