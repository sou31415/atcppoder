#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)
int main(){
  int n;
  string s;
  cin >> n >> s;
  rep(i,n){
    if (s[i] == s[i+1] ) {
      cout << (char)((int)s[i] - (int)'a' +(int)'A')<< (char)((int)s[i] - (int)'a' +(int)'A');
      i++;
    }else{
      cout << s[i];
    }
  }
  cout << endl;
}
