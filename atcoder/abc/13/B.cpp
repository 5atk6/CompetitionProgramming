#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int a,b,diff;
	cin >> a >> b;
	if(abs(a-b) <= 5){
		cout << abs(a-b) << endl;
	}else{
		cout << 10 - abs(a-b) << endl;
	}
}
