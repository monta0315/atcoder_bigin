#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  string s;
  cin >> s;
  if(s=="Sunny"){
    out("Cloudy");
  }else if(s=="Cloudy"){
    out("Rainy");
  }else{
    out("Sunny");
  }
}
