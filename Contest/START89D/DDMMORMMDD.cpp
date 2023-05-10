#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    string S;
    cin>>S;
    bool dd,mm;
    dd=mm=false;
    int d,m;

    d=((((int)S[0])-48)*10)+((((int)S[1])-48));
    m=((((int)S[3])-48)*10)+((((int)S[4])-48));

    if(d<13 && m>=13)cout<<"MM/DD/YYYY"<<endl;
    else if(d>=13 && m<13)cout<<"DD/MM/YYYY"<<endl;
    else if(d<13 && mm<13)cout<<"BOTH"<<endl;

  }
  return 0;
}
