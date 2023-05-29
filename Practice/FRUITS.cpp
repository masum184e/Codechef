#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,M,K;
    cin>>N>>M>>K;
    
    (abs(N-M)<K)?cout<<"0"<<endl:cout<<abs(N-M)-K<<endl;

  }
  return 0;
}
