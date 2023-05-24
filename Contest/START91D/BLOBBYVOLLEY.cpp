#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  // ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,countA=0,countB=0,countBA=0;
    string S;
    cin>>N;
    cin>>S;

    for(ll i=0;i<N;i++){
      if(S[i]=='A'){
        if(i!=0){
          if(S[i-1]!='B')countA++;
        }else{
          countA++;
        }
      }
      if(S[i]=='B'){
        if((i+1)!=N){
          if(S[i+1]=='B')countB++;
        }
      }
    }
    cout<<countA<<" "<<countB<<endl;
  }
  return 0;
}
