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
    ll A[N];
    for(ll i=0;i<N;i++)cin>>A[i];

    ll count=0,sum=0;
    for(int i=0;i<N;i++){
      sum+=A[i];
      if((sum*1.0/(i+1))==1)count++;
    }
    cout<<count<<endl;

  }
  return 0;
}
