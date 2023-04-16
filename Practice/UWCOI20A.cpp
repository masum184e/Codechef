#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N;
    cin>>N;
    ll H[N];
    for(ll i=0;i<N;i++)cin>>H[i];

    ll mx=H[0];
    for(ll i=0;i<N;i++)if(mx<H[i])mx=H[i];
    
    cout<<mx<<endl;
  }
  return 0;
}
