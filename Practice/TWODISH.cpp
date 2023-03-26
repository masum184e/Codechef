#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,A,B,C;
    cin>>N>>A>>B>>C;
    ((A+C>=N) && (B>=N))?cout<<"YES"<<endl:cout<<"NO"<<endl;
  }
  return 0;
}
