//simple star-pattern
//  ****
//  ****
//  ****
//  ****
// for n=4
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){ //outer loop runs four times for the rows 
        for(int j=1;j<=n;j++){//inner loop runs four times for the columns
            cout <<"*" << " ";
        }
        cout << endl;
    }
    return 0;
}
