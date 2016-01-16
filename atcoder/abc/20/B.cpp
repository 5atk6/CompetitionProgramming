#include <iostream>
#include <string>
using namespace std;

int main(){
	string a,b;
	cin >> a >> b;
	a += b;
	int ans = stoi(a);
	cout << ans * 2 << endl;
}
