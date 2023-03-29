#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,A,B,duration=0;
    cin>>N>>A>>B;
    for(int i=1;i<=N;i++){
      if(i%2==0)duration+=A;
      else duration+=B;
    }
    cout<<duration<<endl;
  }
  return 0;
}
