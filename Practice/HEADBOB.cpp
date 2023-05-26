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
    string S;
    cin>>S;

    bool ind,notind;
    ind=notind=false;

    for(ll i=0;i<N;i++){
      if(S[i]=='I')ind=true;
      if(S[i]=='Y')notind=true;
    }

    if(ind)cout<<"INDIAN"<<endl;
    else if(notind)cout<<"NOT INDIAN"<<endl;
    else cout<<"NOT SURE"<<endl;

  }
  return 0;
}
