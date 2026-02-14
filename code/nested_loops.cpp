#include<iostream>

using namespace std;
//nested loops
int main(){

//step-3
// int n;
// int total=0;

// for(int counter=0; counter<5; counter++){
//     cout<<"enter n:";
//     cin>>n;
//     total = total +n;
// }
//     cout << " total = " <<total <<endl;



//NESTED FOR LOOP
/*
1  //1st line, 1 1
11 //2nd line, 2 1's...so on
111
1111
we have to print this sometimes


pesudologic
for (int rowNo=1; rowNo<=5; rowNo++){ //row starts from rwon no.=1
        for (int j=0; j<rowNo. j++){ //for how many times u want to print 1 in that row   
        cout<<"1"; //without endl, it will print 1's on same line, but adhukunu don't give endl here, otherwise 1 line will have 1 1's printed each
        }
        cout<<endl; //to go to next line, we give and endl
}
*/

for(int rowno=1;rowno<=5;rowno++){
    for(int j=0;j<rowno;j++){
        cout<<"1 ";
    }
    cout<<endl;
}
    return 0;
}
