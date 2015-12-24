#include <iostream>

using namespace std;
long memo[1000000] ;

int solve(int n){
	if(memo[n]) return memo[n];
	if(n == 1 || n == 2){
		return 0;
	}else if(n == 3){
		return 1;
	}else{
		return memo[n] = (solve(n-1) + solve(n-2) + solve(n-3)) % 10007;
	}
}

int main(){
	int n;
	cin >> n;
	cout<< solve(n) << endl;
}
