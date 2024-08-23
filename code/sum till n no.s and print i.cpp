#include<iostream>
using namespace std;
int main(){
//keep adding natural numbers from 1,2,----x such that sum<150
//find that what is the value of x


/*
so we'll start from 1
*/
int sum=0;
int i=1;
for(i=1;  ;i++){
if(sum+i>=150){
    break;
}
else{
sum=sum+i;
}
//but how do we know till where i was reaching?
cout<<i<<endl;
cout<<sum<<endl; //it should be 17, as n(n+1)/2 ryt, so 17*18/2 so 17*9= 153
return 0;
}




//OR OR OR OR OR OR OR





#include<iostream>
using namespace std;
int main(){
//keep adding natural numbers from 1,2,----x such that sum<150
//find that what is the value of x


/*
so we'll start from 1
*/
int sum=0;
int i=1;
for(i=1; sum<150 ;i++){ 
// if(sum+i>=150){
//     break;
// }
// else{
sum=sum+i;
}
//but how do we know till where i was reaching?
cout<<i<<endl;
cout<<sum<<endl; //it should be 17, as n(n+1)/2 ryt, so 17*18/2 so 17*9= 153
return 0;
}
