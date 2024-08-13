#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl; //endl for going into next line
    }
    for(int i=5;i>=1;i--){
        for(int j=i; j>=1; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
