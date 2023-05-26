#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,count=0;
    cin>>N;
    string S;
    cin>>S;

    for(ll i=0;i<N;i++){
      if(S[i]==S[i+1] && i!=N-1){
        count++;
        i++;
      }
    }
    cout<<N-count<<endl;
  }
  return 0;
}
