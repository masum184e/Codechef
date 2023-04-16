#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,M,d=0;
    cin>>N>>M;
    ll A[N];
    for(ll i=0;i<N;i++)cin>>A[i];

    for(ll i=0;i<N;i++)(abs(M-A[i])>abs(A[i]-1))?d+=abs(M-A[i]):d+=abs(A[i]-1);

    cout<<d<<endl;
  }
  return 0;
}
