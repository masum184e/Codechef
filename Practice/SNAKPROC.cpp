#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  // ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    ll L;
    vector<char> v;
    cin>>L;
    string str;
    cin>>str;
    for(int i=0;i<L;i++)if(str[i]=='H' || str[i]=='T')v.push_back(str[i]);

    if(v.size()==0)cout<<"Valid"<<endl;
    else{
      for(int i=0;i<v.size()-1;i++)if(v[i]=='H' && v[i+1]=='T')v[i]=v[i+1]='.';
    
      bool status=true;
      for(int i=0;i<v.size();i++){
        if(v[i]!='.'){
          status=false;
          break;
        }
      }

      (status)?cout<<"Valid"<<endl:cout<<"Invalid"<<endl;
    }

  }
  return 0;
}
