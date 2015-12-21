#include <iostream>

using namespace std;

int main(){
	int n,i,j;
	cin >> n;
	string s = "123456";
	n = n %30;
	for(i = 0; i < n; i++){
		swap(s[i % 5], s[i % 5 + 1]);
	}
	cout << s << endl;
}
