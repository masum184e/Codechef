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
    ll B[N];
    for(ll i=0;i<N;i++){
      cin>>B[i];
      if(B[i]==0)count++;
    }

    (count%2==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
  }
  return 0;
}
