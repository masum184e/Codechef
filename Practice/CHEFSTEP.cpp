#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,K;
    cin>>N>>K;
    ll D[N];
    char C[N];
    for(ll i=0;i<N;i++){
      cin>>D[i];
      (D[i]%K==0)?C[i]='1':C[i]='0';
    }

    for(ll i=0;i<N;i++)cout<<C[i];
    cout<<endl;

    
  }
  return 0;
}
