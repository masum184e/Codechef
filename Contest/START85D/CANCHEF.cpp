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
    (X*15>=2*Y)?cout<<"YES"<<endl:cout<<"NO"<<endl;
  }
  return 0;
}
