#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll N:
    cin>>N;
    bool lower,upper,single,dbl;

    if(N>=1 && N<=10)cout<<"Lower Double"<<endl;
    else if(N>=11 && N<=15)cout<<"Lower Single"<<endl;
    else if(N>=16 && N<=25)cout<<"Upper Double"<<endl;
    else if(N>=26 && N<=30)cout<<"Upper Single"<<endl;
  }
  return 0;
}
