#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    vector<int> v;
    ll N,K,Le;
    cin>>N>>K>>Le;
    ll M[N],L[N];
    for(ll i=0;i<N;i++){
      cin>>M[i]>>L[i];
      if(L[i]==Le)v.push_back(M[i]);
    }

    sort(v.begin(),v.end(),greater<int>());

    ll sum=0;
    if(K<=v.size()){
      for(ll i=0;i<K;i++)sum+=v[i];
      cout<<sum<<endl;
    }else{
      cout<<"-1"<<endl;
    }
  }
  return 0;
}
