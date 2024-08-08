#include<iostream>
using namespace std;
int main(){
    int t;
    int x,y;
    while(t--){
     cin>>x>>y;
     if(y<-1){
        cout<<"NO"<<endl;
        break;
     }
      cout<<"YES"<<endl;
    }
}