#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,X;
    cin>>N>>X;
    vector<int> S,R;
    ll a,b;
    for(ll i=0;i<N;i++){
      cin>>a>>b;
      S.push_back(a);
      R.push_back(b);
    }

    vector<int> mn;
    for(ll i=0;i<N;i++)if(S[i]<=X)mn.push_back(R[i]);

    ll mx=mn[0];
    for(ll i=0;i<mn.size();i++)if(mx<mn[i])mx=mn[i];

    cout<<mx<<endl;

  }
  return 0;
}
