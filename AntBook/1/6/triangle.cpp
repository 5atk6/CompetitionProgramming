#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, i, j, k, max;
	cin >> n;
	int a[n];
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	max = 0;
	sort(a, a + n, greater<int>());
	for(i = 0; i < n - 2; i++){
		for(j = i + 1; j < n - 1; j++){
			for(k = j + 1; k < n; k++){
				if(a[i] <= a[j] + a[k] && a[i] + a[j] + a[k] > max){
					max = a[i] + a[j] + a[k];
				}
			}
		}
	}
	cout << max << endl;
}
