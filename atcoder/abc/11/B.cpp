#include <iostream>
#include <string>
#include <ctype.h>
#include <cstdio>

using namespace std;

int main(){
	string s;
	cin >> s;
	printf("%c", toupper(s[0]));
	for(int i = 1; i < s.length(); i++){
		printf("%c", tolower(s[i]));
	}
	cout << endl;
}
