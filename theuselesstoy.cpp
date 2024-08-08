#include<bits/stdc++.h>
using namespace std;
int main(){
    char l;
    char r;
    cin>>l;
    cin>>r;
    int n;
    cin>>n;
    char z;
    char m;
        if(n>4){
            n=n%4;
        }
        if(n==1){
           if(l=='^'){
              z = '>';
              m ='<';
           }
           if(l=='>'){
             z = 'v';
             m = '^';
           }
           if(l=='v'){
              z = '<';
              m = '>';
           }
           if(l=='<'){
             z = '^';
             m = 'v';
           }
        }
        if(n==2){
           if(l=='^'){
              z = 'v';
              m = 'v';
           }
           if(l=='>'){
             z = '<';
             m = z;
           }
           if(l=='v'){
              z = '^';
              m = z;
           }
           if(l=='<'){
             z = '>';
             m = z;
           }
        }
         if(n==3){
           if(l=='^'){
              z = '<';
              m = '>';
           }
           if(l=='>'){
             z = '^';
             m = 'v';
           }
           if(l=='v'){
              z = '>';
              m = '<';
           }
           if(l=='<'){
             z = 'v';
             m = '^';
           }
        }
        if(z==r && z!=m){
            cout<<"cw";
        }
        else if(m==r && z!=m){
            cout<<"ccw";
        }
        else{
            cout<<"undefined";
        }
    }
