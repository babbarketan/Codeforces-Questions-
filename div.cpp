#include<iostream>
using namespace std;

void calc_rating(){
    long long rat;
    cin>>rat;
    if(rat<=1399){
        cout<<"division by 4";
    }
    else if(1400<=rat<=1599){
        cout<<"division by 3";
    }
    else if(1600<=rat<=1899){
        cout<<"division by 2";
    }
    else {
        cout<<"division by 1";
    }
}
int main(){
    calc_rating();
}