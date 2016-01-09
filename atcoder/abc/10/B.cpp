#include <iostream>

using namespace std;

int main(){
	int n,a,ans;
	cin >> n;
	ans = 0;
	while(n--){
		cin >> a;
		if(a == 2){
			ans += 1;
		}else if(a == 4){
			ans += 1;
		}else if(a == 5){
			ans += 2;
		}else if(a == 6){
			ans += 3;
		}else if(a == 8){
			ans += 1;
		}
	}
	cout << ans << endl;
}
