#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T,X;
  cin>>T;
  while(T--){
    cin>>X;
    (X>24)?cout<<"YES"<<endl:cout<<"NO"<<endl;
  }
  return 0;
}
