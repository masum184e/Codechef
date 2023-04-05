#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,X,count=0;
    cin>>N>>X;
    ll A[N];
    for(ll i=0;i<N;i++){
      cin>>A[i];
      if(A[i]>=X)count++;
    }
    cout<<count<<endl;
  }
  return 0;
}
