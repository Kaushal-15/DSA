
//  *
//  **
//  ***
//  ****
// for n=4
//left-aligned triangle
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){ //outer loop for rows
        for(int j=1;j<=i;j++){//inner loop runs for cols
            cout <<"*" << " ";
        }
        cout << endl;
    }
    return 0;
}
