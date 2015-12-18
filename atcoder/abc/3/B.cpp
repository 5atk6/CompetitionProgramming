#include <iostream>
#include <set>

using namespace std;

int main(){
	string s,t, ans;
	set<char> c;
	c.insert('a');
	c.insert('t');
	c.insert('c');
	c.insert('o');
	c.insert('d');
	c.insert('e');
	c.insert('r');
	cin >> s >> t;
	ans = "You can win";
	for(int i = 0; i < s.length(); i++){
		if(s[i] == t[i]){
			continue;
		}
		else if(s[i] == '@'){
			if(!c.count(t[i])){
				ans = "You will lose";
				break;
			}
		}
		else if(t[i] == '@'){
			if(!c.count(s[i])){
				ans = "You will lose";
				break;
			}
		}else{
			ans = "You will lose";
			break;
		}
	}
	cout << ans << endl;
}
