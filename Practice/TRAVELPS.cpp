#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,A,B,count=0;
    cin>>N>>A>>B;
    string S;
    cin>>S;

    for(ll i=0;i<N;i++)(S[i]=='0')?count+=A:count+=B;

    cout<<count<<endl;
  }
  return 0;
}
