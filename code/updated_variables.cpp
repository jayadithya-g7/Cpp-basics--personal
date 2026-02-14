#include<iostream>
using namespace std;

void showhelloworld(){ //void means, no return value
    cout<<"hello world"<<endl;
    cout<<"Jayadithya G, SNUC, IInd year"<<endl;

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
    cout<<"bool size: "<< sizeof(bool)<<endl;
    cout<<"int size: "<< sizeof(int)<<endl;
    cout<<"float size: "<< sizeof(float)<<endl;
    cout<<"char size: "<< sizeof(char)<<endl;
    cout<<"double size: "<< sizeof(double)<<endl;
    cout<<"long long int size:"<< sizeof(long long int)<<endl;
    return 0;
}
