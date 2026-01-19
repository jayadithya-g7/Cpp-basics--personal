#include<iostream>

using namespace std;
//nested loops
int main(){
/* basically we want to print this pattern
    1
    1 2 
    1 2 3
    1 2 3 4 
    1 2 3 4 5 
*/
// for(int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }

//     return 0;
// }
//they may also ask print star pattern
/*

*
* *
* * *
...so on

*/


for(int i=0;i<5;i++){
    for(int j=0;j<=i;j++){ //you traversed j till i here, so in the reverse right triangle order, we start from j=i, and we go till 1, decreasing it
        cout<<"*";
    }
    cout<<endl;
}
for(int i=5;i>=1;i--){
    for(int j=i;j>=1;j--){ 
        cout<<"*";
    }
    cout<<endl; //don't forget to give this endl here, otherwise it won't go to next line
}

return 0;
}
