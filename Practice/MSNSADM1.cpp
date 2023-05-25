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
    ll A[N],B[N],C[N];
    for(ll i=0;i<N;i++)cin>>A[i];
    for(ll i=0;i<N;i++)cin>>B[i];

    for(ll i=0;i<N;i++)C[i]=(A[i]*20)-(B[i]*10);

    ll mx=C[0];
    for(ll i=0;i<N;i++)if(mx<C[i])mx=C[i];

    (mx<0)?cout<<"0"<<endl:cout<<mx<<endl;
  }
  return 0;
}
