#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n,k,cnt=0;
    cin >> n>> k;
    vector <int> v(n);
    for (int i=0;i<n;i++){
        int a, b;
        cin >> a>> b;
        v[i]=b+a*10;
    }
    vector<int> label(16);
    for (int i=0; i<n;i++){
        label[v[i]]++;
    }
    for (int i=0; i<16; i++){
        cnt+=(label[i]+k-1)/k;
    }
    cout<<cnt;
    return 0;
}
