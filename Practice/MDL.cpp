#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,t,mx,mn,md;
    cin>>N;
    vector<int> v;
    for(ll i=0;i<N;i++){
      cin>>t;
      v.push_back(t);
    }


    while(N>=3){
      mx=max(max(v[0],v[1]),v[2]);
      mn=min(min(v[0],v[1]),v[2]);
      md=v[0]+v[1]+v[2]-mx-mn;

      if(v[0]==md)v.erase(v.begin()+0);
      else if(v[1]==md)v.erase(v.begin()+1);
      else if(v[2]==md)v.erase(v.begin()+2);

      N--;
    }

    for(ll i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
  }
  return 0;
}
