#include <iostream>
using namespace std;
#include<string>
#include <stack>
int countcut(string stick){
    stack<char> st;
    int cnt=0;
    for (int i=0; i<stick.size();i++){
        if (stick[i]=='(') st.push(stick[i]);
        else if(stick[i]==')'&&stick[i-1]=='('){
            st.pop();
            cnt+=st.size();
        }else{
            st.pop();
            cnt+=1;  
        }
    }

    return cnt;
}
int main(){
    string stick;
    getline(cin,stick);
    cout << countcut(stick);
    return 0;
}