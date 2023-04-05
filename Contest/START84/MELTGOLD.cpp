#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll X,Y,count=0,i=1;
    cin>>X>>Y;
    while(X>Y){
      Y+=i;
      i++;
      count++;
    }
    cout<<count<<endl;
  }
  return 0;
}
