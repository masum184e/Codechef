#include<bits/stdc++.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  while(T--){
    int N;
    double r;
    cin>>N;
    r=floor(pow((0.143*N),N*1.0));
    if((pow((0.143*N),N*1.0)-r)<0.5)cout<<r<<endl;
    else cout<<r+1<<endl;
  }

  return 0;
}
