#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n,i,max;
	cin >> n;
	int a[n];
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	max = a[n-1];
	for(i = n - 2; i >= 0; i--){
		if(a[i] < max){
			cout<< a[i] << endl;
			return 0;
		}
	}
	cout << max << endl;
}
