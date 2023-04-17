#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main(){
	int h , w;
	cin >> h >> w;
	rep(i,h){
		string s;
		cin >> s;
		rep(j,w-1){
			if (s[j] == 'T' && s[j+1] == 'T'){
				s[j] = 'P';
				s[j+1] = 'C';
			}
		}
		cout << s << endl;
	}
	return 0;
}
