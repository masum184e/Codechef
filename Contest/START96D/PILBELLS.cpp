#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N,X,K,P;
    cin>>N>>X>>K>>P;

    if(X>=K)P=P+(K*10);
    else{
      P=P+(X*10);
      P=P+((K-X)*5);
    }

    if(N==K)P=P+20;

    cout<<P<<endl;

  }
  return 0;
}
