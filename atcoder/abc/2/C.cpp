#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	double xa,ya,xb,yb,xc,yc, ans;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	xb -= xa;
	xc -= xa;
	yb -= ya;
	yc -= ya;
	ans = fabs(xb * yc - xc * yb) / 2;
	cout << fixed << setprecision(1) << ans << endl;
}
