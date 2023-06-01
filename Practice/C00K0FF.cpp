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
    string S[N];
    map<char, int> m;
    for(ll i=0;i<N;i++){
      cin>>S[i];
      if(S[i]=="easy-medium" || S[i]=="medium"){
        m['m']++;
      }else if(S[i]=="medium-hard" || S[i]=="hard"){
        m['h']++;
      }
      else{
        m[S[i][0]]++;
      }
    }

    (m.size()==5)?cout<<"Yes"<<endl:cout<<"No"<<endl;
  }
  return 0;
}
