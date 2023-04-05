#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll X,Y;
    cin>>X>>Y;
    cout<<abs(X-Y)<<endl;
  }
  return 0;
}
