#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string s;
	int n,l,r;
	cin >> s >> n;
	while(n--){
		cin >> l >> r;
		reverse(s.begin() + l - 1, s.begin() + r);
	}
	cout << s << endl;
}
