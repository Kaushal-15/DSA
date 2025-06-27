//LINEAR SEARCH FOR ARRAY -BIG O(n)
#include <iostream>
using namespace std;

int LinearSearch(int arr[],int size,int target){
  for(int i=0;i<size;i++){
    if(arr[i]==target){
      return i;
    }
  }
   return -1;
}

int main(){
   int arr[]={4,2,7,8,1,2,5};
   int target=9;
   int size=7;
    cout << LinearSearch(arr,size,target) << endl;
    return 0;
}
