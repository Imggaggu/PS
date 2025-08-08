using namespace std;
#include <iostream>
#include <stack>
#include <string>

bool isgoodword(const string& word){
    stack<char> st;
    for (char w: word){
        if (!st.empty() && st.top() == w){
            st.pop();
        }else{
            st.push(w);
        }
     }
    return st.empty();
}
int main(){
    string word;
    int num,cnt=0;
    cin>>num;
    for (int i=0; i<num ; i++){
        cin>>word;
        if (isgoodword(word)) cnt++;  
    }
    cout << cnt;
    return 0;
}