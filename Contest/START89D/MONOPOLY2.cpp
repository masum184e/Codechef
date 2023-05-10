#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll P,Q,R,S;
    bool status=false;
    cin>>P>>Q>>R>>S;
    if(P>(Q+R+S))status=true;
    else if(Q>(P+R+S))status=true;
    else if(R>(P+Q+S))status=true;
    else if(S>(P+Q+R))status=true;

    (status)?cout<<"YES"<<endl:cout<<"NO"<<endl;

  }
  return 0;
}
