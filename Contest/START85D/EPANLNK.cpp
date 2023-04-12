#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  // ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    string N;
    int d=0;
    cin>>N;
    if(N.length()==1)cout<<N<<endl;
    else{
      d=((((int)(N[N.length()-2]))-48)*10)+(((int)(N[N.length()-1]))-48);
      cout<<d%20<<endl;
    }

  }
  return 0;
}
