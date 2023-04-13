#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  // ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,one,zero;
    one=zero=0;
    cin>>N;
    string S;
    cin>>S;
    for(int i=0;i<N;i++){
      if(S[i]=='0')zero++;
      if(S[i]=='1')one++;
    }

    if(zero==one)cout<<one<<endl;
    else if(zero==N)cout<<"0"<<endl;
    else if (one==N)cout<<"1"<<endl;
    else if(one>zero)cout<<zero+1<<endl;
    else if(zero>one)cout<<one<<endl;
  }
  return 0;
}
