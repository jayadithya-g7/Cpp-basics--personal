#include<iostream>
using namespace std;
#define true false //Defining Macro variables

int main(){
    
    bool found = true; //u declare it true here, fine
    cout<<found<<endl; //u want to print found
//but in question we defined true as false, so it will print 0 (false)
    return 0;
}
