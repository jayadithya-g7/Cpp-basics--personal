#include<iostream>
using namespace std;
//arithmetic operators
int main(){

    int a =100;
    int b=20;
    int c = a/b;
    cout<<"sum: "<<a+b<< endl;
    cout<<"Diff: "<<a-b<< endl;
    cout<<"Mul: "<<a*b<< endl;
    cout<<"Sub: "<<a/b<< endl;
    cout<<"Mod: "<<a%b<<endl; //modulo operator for remainder
    cout<<c<<endl;

    a++; //increment value by 1
    cout<<"After increment: "<<a<<endl;
    a--; //decrement value by 1
    cout<<"Before increment:"<<a<<endl;
    return 0;
}
