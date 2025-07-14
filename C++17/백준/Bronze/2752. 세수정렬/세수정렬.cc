#include <iostream>
using namespace std;
int main(){
    
    int arr[3] ;
    cin>> arr[0]>>arr[1]>>arr[2];

    for (int i=0; i<3; i++){
        for (int j=2;j>i;j--){
            int temp=arr[i];
            if (arr[i]>arr[j]){
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }
    cout<< arr[0]<<" "<<arr[1]<<" "<<arr[2];
    return 0;
}