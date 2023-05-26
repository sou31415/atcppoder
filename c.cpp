#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)
int main(){
	int n;
	cin >> n;
	unordered_set<string> a;
	rep(i,n){
		string s;
		cin >> s;
		if (!a.count(s)){
			a.insert(s);
			cout << i+1 << endl;
		}
	}
	return 0;
}
