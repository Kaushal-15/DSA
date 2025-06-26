//DECIMAL TO BINARY CONVERSIION BASIC DSA
#include <iostream>
using namespace std;
int DecToBinary(int DecNum){
    int pow=1;
    int ans=0;
    while (DecNum>0)
    {
        int rem=DecNum%2;
        DecNum=DecNum/2;
        ans+=rem*pow;
        pow=pow*10;
    }
    return ans;
}
int main(){
    for(int i=1;i<=10;i++){
        cout << DecToBinary(i) << endl;
    }
    return 0;
}
