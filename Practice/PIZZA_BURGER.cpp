#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll X,Y,Z;
    cin>>X>>Y>>Z;
    if(X>=Y)cout<<"PIZZA"<<endl;
    else if(X>=Z)cout<<"BURGER"<<endl;
    else cout<<"NOTHING"<<endl;
  }
  return 0;
}
