#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool binary_search(const vector<int> &v, int left, int right, int target){
    if (left>right) return false;
    int mid=(left+right)/2;
    if (v[mid]==target){
        return true;
    }else if(v[mid]<target){
        return binary_search(v,mid+1,right,target);
    }else{
        return binary_search(v,left,mid-1,target);
    }
}
int main(){
    
    int n, x;
    int cnt=0;
    
    cin>> n;
    vector<int> v(n);
    
    for (int i=0; i<n; i++){
        cin>>v[i];
    }
    cin>>x;
    sort(v.begin(),v.end());
    for (int i=0; i<n; i++){
        if(binary_search(v,i+1,v.size()-1,x-v[i])){
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}
