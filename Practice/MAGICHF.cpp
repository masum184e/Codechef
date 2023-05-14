#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,X,S,position;
    cin>>N>>X>>S;
    position=X;
    for(int i=0;i<S;i++){
      ll A,B;
      cin>>A>>B;
      if(A==position)position=B;
      else if(B==position)position=A;
    }
    cout<<position<<endl;
  }
  return 0;
}
