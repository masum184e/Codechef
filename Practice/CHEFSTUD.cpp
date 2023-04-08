#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    int count=0,len;
    string x;
    cin>>x;
    len=x.length()-1;
    for(int i=0;i<len;i++){
      if(x[i]=='<' && x[i+1]=='>')count++;
    }
    cout<<count<<endl;
  }
  return 0;
}
