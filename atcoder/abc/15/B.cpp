#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int i, n;
	double total,a,bug;
	cin >> n;
	total = 0; bug = 0;
	for(i = 0; i < n; i++){
		cin >> a;
		if(a){
			total += a;
			bug++;
		}
	}
	cout << ceil(total/bug) << endl;
}
