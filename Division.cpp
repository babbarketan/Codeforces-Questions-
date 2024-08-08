#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int rating;
    while(t--){
        cin>>rating;
        if(rating>=1900){
            cout<<"Division 1";
        }else if(1600<=rating && rating>=1899){
            cout<<"Division 2";
        }else if(rating>=1599 && rating<=1400){
            cout<<"Division 3";
        }
        else{
            cout<<"Divison 4";
        }
    }
}