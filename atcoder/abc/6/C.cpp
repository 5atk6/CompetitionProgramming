#include <iostream>

using namespace std;

int main(){
	int n,m,i,j,k;
	cin >> n >> m;

	for(i = 0; i <= n; i++){
		if(2 * i + 4 * (n - i) == m){
			cout << i << " " << 0 << " " << n -i << endl;
			return 0;
		}else if(2 * i + 3 + 4*(n - i -1) == m && n -i-1 >= 0){
			cout << i << " " << 1 << " " << n -i -1 << endl;
			return 0;
		}
	}

	cout << "-1 -1 -1" << endl;
}
