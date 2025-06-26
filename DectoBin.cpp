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
int BinaryToDec(int Bin){
    int pow=1;
    int ans=0;
    while(Bin>0){
        int rem=Bin%10;
        ans+=rem*pow;
        Bin/=10;
        pow*=2;
    }
    return ans;
}
int main(){
    // for(int i=1;i<=10;i++){
    //     cout << DecToBinary(i) << endl;
    // }
    int Bin=101;
    cout << BinaryToDec(Bin) << endl;
    return 0;
}
