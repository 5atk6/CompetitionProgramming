#include <iostream>
 
using namespace std;
 
int main(){
        int m;
        cin >> m;
        if(m >= 70000){
                m=89;
        }else if(m >= 35000){
                m /= 1000;
                m -= 30;
                m /= 5;
                m += 80;
        }else if(m >= 6000){
                m /= 1000;
                m += 50;
        }else if(m >= 100){
                if(m >= 1000){
                        m /= 1000;
                        m *= 10;
                }else{
                        m /= 100;
                        cout << "0";
                }
        }else{
                cout << "0";
                m = 0;
        }
        cout << m << endl;
 
}
