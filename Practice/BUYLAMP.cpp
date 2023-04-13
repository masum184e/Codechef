#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,K,X,Y,money=0;
    cin>>N>>K>>X>>Y;
    money=K*X;N=N-K;
    (X>Y)?money+=(Y*N):money+=(X*N);
    cout<<money<<endl;
  }
  return 0;
}
