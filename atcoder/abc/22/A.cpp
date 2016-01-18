#include <iostream>

using namespace std;

int main(){
	int n,s,t,ans,w,a;
	cin >> n >> s >> t >> w;
	ans = ((w >= s && w <= t) ? 1 : 0);
	while(--n){
		cin >> a;
		w += a;
		if(w >= s && w <= t)
			ans++;
	}
	cout << ans << endl;
}
