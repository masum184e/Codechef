#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  // ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll T;
  cin>>T;
  while(T--){
    string str;
    ll holes=0;
    cin>>str;
    int len=str.size();
    for(int i=0;i<len;i++){
      switch(str[i]){
        case 'A':
          holes++;
          break;
        case 'B':
          holes+=2;
          break;
        case 'D':
          holes++;
          break;
        case 'O':
          holes++;
          break;
        case 'P':
          holes++;
          break;
        case 'Q':
          holes++;
          break;
        case 'R':
          holes++;
          break;
      }
    }
    cout<<holes<<endl;
  }
  return 0;
}
