//hollow right angled triangle
//*
//**
//* *
//*  *
//*****
//n=5
#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1||j==i||i==n){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
