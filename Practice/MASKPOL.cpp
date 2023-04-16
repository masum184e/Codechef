#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,A;
    cin>>N>>A;
    ((N-A)<A)?cout<<N-A<<endl:cout<<A<<endl;
  }
  return 0;
}
