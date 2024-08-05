#include<iostream>
using namespace std;

void showhelloworld(){ //void means, no return value
    cout<<"hello world";
}
int main(){
    //declaration of variables and assigning
    bool success= true;
    bool found = true;
    found = false; //u can update too
    char name='r';
    int a=10;
    float b=20.12;
    double c= 30.244;
    cout<<name<<endl<<a<<endl<<b<<endl<<c<<endl;

    showhelloworld();
    cout<<"bool size: "<< sizeof(bool);
    cout<<"int size: "<< sizeof(int);
    cout<<"float size: "<< sizeof(float);
    cout<<"char size: "<< sizeof(char);
    cout<<"double size: "<< sizeof(double);
    cout<<"long long int size:"<< sizeof(long long int);
    return 0;
}

//note: here sizeof() is not a userdefined fn, it's a predefined fn which we are getting to access, bcoz we impprted the library in the std iostream itself
