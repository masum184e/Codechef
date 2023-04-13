#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,one_one,one_zero,two_one,two_zero;
    one_one=one_zero=two_one=two_zero=0;
    cin>>N;
    string A,B;
    cin>>A>>B;
    for(ll i=0;i<N;i++){
      if(A[i]=='0')one_zero++;
      if(A[i]=='1')one_one++;
      if(B[i]=='0')two_zero++;
      if(B[i]=='1')two_one++;
    }
    (one_zero==two_zero && two_one==two_one)?cout<<"YES"<<endl:cout<<"NO"<<endl;
  }
  return 0;
}
