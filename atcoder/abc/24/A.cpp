#include <iostream>

using namespace std;

int main(){
	int a,b,c,k,s,t,ans;
	cin >> a >> b >> c >> k >> s >> t;
	ans = a*s + b*t;
	if(s+t >= k){
		ans -= (s+t)*c;
	}
	cout << ans << endl;
}
