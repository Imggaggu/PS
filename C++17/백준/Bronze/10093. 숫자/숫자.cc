#include <iostream>
using namespace std;

int main(){
    unsigned int a, b, c;
    cin >> a>> b;
    if (a==b){
        cout << 0;
        return 0;
    }
    if (a>b){
        c=a;
        a=b;
        b=c;
    }
    cout << b-a-1<<endl;

    for (unsigned int i=a+1;i<b;i++){
        cout << i<<" ";
    }
    
    return 0;
}