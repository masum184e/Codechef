#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,t;
    cin>>N;
    string S;
    char tmp;
    cin>>S;

    //SWAPPING
    t=(N/2)*2;
    for(ll i=0;i<t;i+=2){
      tmp=S[i];
      S[i]=S[i+1];
      S[i+1]=tmp;
    }

    // REVERSE INDEXING
    for(ll i=0;i<N;i++)S[i]=122-(int)S[i]+97;

    cout<<S<<endl;
  }
  return 0;
}
