#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(){
	int n,k,i;
	cin >> n >> k;
	double r[n], ans;
	for(i = 0; i < n; i++){
		cin >> r[i];
	}
	sort(r, r + n);
	ans = 0;
	for(i = n - k ; i < n; i++){
		ans = (ans + r[i])/2;
	}
	//cout << fixed << setprecision(9) << ans << endl;
	//cout << ans << endl;
	printf("%.10000f\n", ans);
}
