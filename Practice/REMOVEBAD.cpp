#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,a;
    cin>>N;
    vector<int> A;
    for(ll i=0;i<N;i++){
      cin>>a;
      A.push_back(a);
    }

    map<int, int> m;
    for(ll i=0;i<N;i++){
      m[A[i]]++;
    }

    ll mn[m.size()];
    ll l=0;
    for(auto k:m){
      mn[l]=N-(k.second);
      l++;
    }

    ll mni=mn[0];
    for(ll i=0;i<m.size();i++)mni=min(mni,mn[i]);

    cout<<mni<<endl;
  }
  return 0;
}
