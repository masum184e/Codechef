#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  map<int, int> m;
  ll T;
  cin>>T;
  while(T--){
    ll N;
    cin>>N;
    ll A[N];
    for(ll i=0;i<N;i++){
      cin>>A[i];
      m[A[i]]++;
    }

    ll mx[m.size()],i=0;
    for(auto j:m){
      mx[i]=j.second;
      i++;
    }

    ll mx_elmnt=mx[0];
    for(int i=0;i<m.size();i++){
      if(mx_elmnt<mx[i])mx_elmnt=mx[i];
    }

    if(mx_elmnt==1)cout<<N-1<<endl;
    else{
      cout<<N-mx_elmnt<<endl;
    }
    m.clear();
  }
  return 0;
}
