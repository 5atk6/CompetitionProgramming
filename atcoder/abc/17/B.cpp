#include <iostream>

using namespace std;

int main(){
	int i,l;
	string x;
	cin >> x;
	l = x.length();
	for(i = 0; i < l; i++){
		if(i < l - 1 && x[i] == 'c' && x[i + 1] == 'h'){
			i++;
			continue;
		}
		if(x[i] == 'o' || x[i] == 'k' || x[i] == 'u'){
			continue;
		}

		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
}
