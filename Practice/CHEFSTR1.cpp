#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,count=0;
    cin>>N;
    ll S[N];
    for(ll i=0;i<N;i++)cin>>S[i];

    
    for(ll i=0;i<N-1;i++)count+=abs(S[i]-S[i+1])-1;

    cout<<count<<endl;
  }
  return 0;
}
