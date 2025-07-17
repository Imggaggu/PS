#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[11]={0};
    while(N>0){
        int idx=N%10;
        arr[idx]++;
        N=N/10;
    }

    arr[10]=(arr[9]+arr[6]+1)/2;
    arr[6]=0;
    arr[9]=0;
    
    int max=0;
    for (int i=0; i<11; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout << max;
    return 0;
}