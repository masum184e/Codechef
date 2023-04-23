#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,K;
    cin>>N;
    ll A[N];
    for(ll i=0;i<N;i++)cin>>A[i];
    cin>>K;

    ll f=A[K-1];
    sort(A,A+N);
    
    for(ll i=0;i<N;i++){
      if(A[i]==f){
        cout<<i+1<<endl;break;
      }
    }

  }
  return 0;
}
