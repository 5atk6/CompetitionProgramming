#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int t[n];
	for(int i = 0; i < n; i++){
		cin >> t[i];
	}
	sort(t, t+n);
	cout << t[0] << endl;
}
