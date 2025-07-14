#include <iostream>
using namespace std;

int main(){
    int cnt1;
    int cnt0;
    int arr[12];
    int cnt[3];

    for(int i=0; i<12;i+=4){
        cin>>arr[i]>>arr[i+1]>>arr[i+2]>>arr[i+3];
        int idx=i/4;
        cnt[idx]=arr[i]+arr[i+1]+arr[i+2]+arr[i+3];
    }
    
    for (int i=0; i<3; i++){
        switch(cnt[i]){
            case 0: cout<< "D"<<endl; break;
            case 1: cout<< "C"<<endl; break;
            case 2: cout<< "B"<<endl; break;
            case 3: cout<< "A"<<endl; break;
            case 4: cout<< "E"<<endl; break;
        }
    }
    return 0;
}