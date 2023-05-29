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
    map<int, int> m;
    for(ll i=0;i<N;i++){
      cin>>A[i];
      m[A[i]]++;
    }

    ll f[m.size()];
    ll i=0;
    for(auto j:m){
      f[i]=j.second;
      i++;
    }
    
    ll mx=f[0];
    for(ll i=0;i<m.size();i++)if(mx<f[i])mx=f[i];
    
    cout<<N-mx<<endl;

    
  }
  return 0;
}
