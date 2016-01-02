#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, i, max;
	cin >> n;
	string str, maxStr;
	map<string, int> smap;

	max = 0;
	while(n--){
		cin >> str;
		if(smap.find(str) == smap.end()){
			smap[str] = 1;
			if(max == 0){
				max = 1;
				maxStr = str;
			}
		}else{
			smap[str]++;
			if(smap[str] >= max){
				maxStr = str;
				max = smap[str];
			}
		}
	}
	cout << maxStr << endl;
}
