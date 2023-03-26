#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,sum=0;
    cin>>N;
    ll A[N];
    for(ll i=0;i<N;i++){
      cin>>A[i];
      sum+=A[i];
    }
    (sum%2==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
  }
  return 0;
}
