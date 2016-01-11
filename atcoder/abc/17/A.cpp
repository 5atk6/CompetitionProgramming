#include <iostream>

using namespace std;

int main(){
	int s,e,i,ans;
	i = 3;
	ans = 0;
	while(i--){
		cin >> s >> e;
		ans += s * e / 10;
	}
	cout << ans << endl;
}
