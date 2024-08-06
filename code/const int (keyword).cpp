#include<iostream>
using namespace std;

int var=355;
void showhelloworld(){ //void means, no return value
    cout<<"hello world"<<endl;
    cout<<"Jayadithya G, SNUC, IInd year"<<endl;
    var=20;

}
 //declalred globally
int main(){

    cout<<"Global value: "<<var<<endl;
    showhelloworld(); //calling a function
    cout<<"local value after calling function:"<<var<<endl;

    const int SECONDS_IN_HOUR = 3600;
    SECONDS_IN_HOUR =223;
    //compiler throws error, as it;s read only error 
    //whatever u give in const int won't change,
    //note all these blue higliughted stuffs in vs code are reserved keywords, u can't use them for identifiers, or declaring some other variables
    


    return 0;
}
