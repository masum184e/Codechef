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
    ll A[N];
    for(ll i=0;i<N;i++)cin>>A[i];
    if(N==1){
      (A[0]==1)?cout<<"0"<<endl:cout<<"1"<<endl;
    }else{
      ll s=0;
      for(ll i=0;i<N-1;i++){
        if(A[i]!=A[i+1])s++;
      }

      if(s%2==0)for(ll i=0;i<N;i++)(A[i]==0)?cout<<"1"<<endl:cout<<"0"<<endl;
      else{
        for(ll i=N-1;i>=0;i--){
          if(i==0)cout<<A[i]<<endl;
          else cout<<A[i]<<" ";
        }
      }
    }
  }
  return 0;
}
