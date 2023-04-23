#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  // ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,score=0;
    cin>>N;
    ll P[N],S[N];
    ll mx[8]={0,0,0,0,0,0,0,0};
    for(ll i=0;i<N;i++)cin>>P[i]>>S[i];
    
    for(ll i=0;i<N;i++){

      if(P[i]>=1 && P[i]<=8){
        ll index=P[i]-1;
        if(mx[index]==0){
          mx[index]=S[i];
        }else{
          mx[index]=max(mx[index],S[i]);
        }
      }
    }

    for(ll i=0;i<8;i++)score+=mx[i];
    cout<<score<<endl;

  }
  return 0;
}
