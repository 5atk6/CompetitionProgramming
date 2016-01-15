#include <iostream>

using namespace std;

int main(){
	string s;
	int l,i,count;
	cin >> s;
	l = s.length();
	count = 1;
	for(i = 0; i < l; i++){
		if(s[i] == s[i + 1]){
			count++;
		}else{
			cout << s[i] << count;
			count = 1;
		}
	}
	cout << endl;
}
