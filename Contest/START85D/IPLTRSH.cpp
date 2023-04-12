#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,M;
    cin>>N>>M;
    (N>M)?cout<<N-M<<endl:cout<<"0"<<endl;
  }
  return 0;
}
