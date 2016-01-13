#include <iostream>

using namespace std;
int solve(int a, int b, int c){
	if(a >b && a > c){
		return 1;
	}
	if(a < b && a < c){
		return 3;
	}
	return 2;
}
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	cout << solve(a,b,c) << endl << solve(b,a,c) << endl << solve(c,a,b) << endl;
}


