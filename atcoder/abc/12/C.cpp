#include <iostream>

using namespace std;

int main(){
	int n,i,j;
	cin >> n;
	n = 2025 - n;
	for(i = 1; i <= 9; i++){
		if(n % i == 0){
			j = n / i;
			if(j <= 9)
				cout << i << " x " << j << endl;
		}
	}
}
