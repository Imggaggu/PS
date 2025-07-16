#include <iostream>
using namespace std;

int main(){
    long long A,B,C;
    cin>>A>>B>>C;
    int arr[11]={0};
    long long D=A*B*C;
    int len=0;
    
    while(D>0){
        int idx=(D%10);
        arr[idx]++;
        D=D/10;
    }

    for (int i=0; i<10;i++){
        cout<< arr[i]<<endl;
    }
    
    return 0;
}