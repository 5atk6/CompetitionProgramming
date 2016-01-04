#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n, h, m;
	cin >> n;
	if(n >= 3600){
		h = n/3600;
		n -= 3600 * h;
	}else{
		h = 0;
	}
	if(n >= 60){
		m = n/60;
		n -= 60 * m;
	}else{
		m = 0;
	}

	printf("%02d:%02d:%02d\n", h,m,n);
}
