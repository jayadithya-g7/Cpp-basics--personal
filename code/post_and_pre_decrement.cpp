// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int a =100;
    
    int f = --a; //first it decrements, then prints
    cout<<f<<endl;
    
    int g = a--; //first it prints, then in next step,it decrements
    cout<<g<<endl;
    cout<<a; //so the decrement value is printed here
    
    return 0;
}
