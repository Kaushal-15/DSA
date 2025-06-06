//right-aligned triangle
//   *
//  **
// ***
//****
// for n=4

#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){ //outer loop for rows
        for(int k=1;k<=n-i;k++){// this k loop is used to determine space and logic used is n-i for space,
//initally n=4 and i=1 then it would be three so three space then again untill the loop ends..
            cout << " ";
        }
        for(int j=1;j<=i;j++){//inner loop runs for cols
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}
