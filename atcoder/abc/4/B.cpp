#include <iostream>

using namespace std;

int main(){
	char c[4][4];
	int i,j;
	for(i = 0; i < 4 ;i++){
		for(j = 0; j < 4; j++){
			cin >> c[i][j];
		}
	}
	for(i = 3; i >= 0; i--){
		for(j = 3; j >= 0; j--){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}
