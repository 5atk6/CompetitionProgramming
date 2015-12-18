#include <iostream>

using namespace std;

int main(){
	double x;
	cin >> x;
	double ans = 0;
	for(double i = 1; i <= x; i++){
		ans += 10000*i*(1/x);
	}
	cout << ans << endl;
}
