#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll X;
    cin>>X;
    (X%10>=5)?cout<<100-((X/10)+1)*10<<endl:cout<<100-(X/10)*10<<endl;
  }
  return 0;
}
