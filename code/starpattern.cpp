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
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}

return 0;
}
