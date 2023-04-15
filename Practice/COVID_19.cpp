#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,M,count=0;
    cin>>N>>M;
    for(int i=1;i<=N;i++){
      for(int j=1;j<=M;j++){
        if(i%2!=0 && j%2!=0)count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}
