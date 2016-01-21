#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int l,n,i,minT,maxT,diff;
	cin >> l >> n;
	int x[n];
	for(i = 0; i < n; i++){
		cin >> x[i];
	}
	sort(x, x + n);
	maxT = l - x[0];
	diff = l;
	minT = 0;
	for(i = 0; i < n; i++){
		minT = max(minT, min(x[i], l - x[i]));
	}
	cout << minT << " " << maxT << endl;
}
