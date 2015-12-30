#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double deg,dis;
	cin >> deg >> dis;
	string news[16] = {"NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", 
					   "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW", "N"};
	deg = (deg*10 - 1125) / 2250;
	dis = roundf(dis * 10 / 60) / 10.0;
	if(dis >= 32.7){
		dis = 12;
	}else if((dis >= 28.5)){
		dis = 11;
	}else if(dis >= 24.5){
		dis = 10;
	}else if(dis >= 20.8){
		dis = 9;
	}else if(dis >= 17.2){
		dis = 8;
	}else if(dis >= 13.9){
		dis = 7;
	}else if(dis >= 10.8){
		dis = 6;
	}else if(dis >= 8.0){
		dis = 5;
	}else if(dis >= 5.5){
		dis = 4;
	}else if(dis >= 3.4){
		dis = 3;
	}else if(dis >= 1.6){
		dis = 2;
	}else if(dis >= 0.3){
		dis = 1;
	}else{
		dis = 0;
	}
	if(dis)
		cout << news[(int)deg] << " " << dis << endl;
	else 
		cout << "C 0" << endl; 
}
