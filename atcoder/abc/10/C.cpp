#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int txa,tya,txb,tyb,t,v,n,x,y;
	cin >> txa >> tya >> txb >> tyb >> t >> v >> n;
	while(n--){
		cin >> x >> y;
		double d =  sqrt((txa - x) * (txa - x) + (tya - y) * (tya - y));
		d += sqrt((txb - x) * (txb - x) + (tyb - y) * (tyb - y));
		if(d <= t * v){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}
