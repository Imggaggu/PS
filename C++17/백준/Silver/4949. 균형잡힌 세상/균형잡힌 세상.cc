#include <iostream>
#include <stack>
#include <string>
using namespace std;
/*
bool checkround(sentence){
    int cnt=0;

    for (char i:sentence){
        if (i=='('){
            cnt++;
        }else if(i==')'){
            cnt--;
            if (cnt<0) return false;
        }
    }
    if (cnt==0) return true;
    else if (cnt!=0) return false;
}
bool checksquare(string sentence){
    int cnt=0;

    for (char i:sentence){
        if (i=='['){
            cnt++;
        }else if(i==']'){
            cnt--;
            if (cnt<0) return false;
        }
    }
    if (cnt==0) return true;
    else if (cnt!=0) return false;
}
*/
bool check(const string& sentence){
    stack<char> st;
    for (char c:sentence){
        if (c=='['||c=='(') st.push(c);
        else if (c==']'){
            if (st.empty()||st.top()!='[') return false;
            st.pop();
        }else if (c==')'){
            if (st.empty()||st.top()!='(') return false;
            st.pop();
        }else if(c=='.'){
            break;
        }
    }
    return st.empty();
}
int main(){
    string sentence;
    while (true){

        getline(cin, sentence);
        if (sentence == ".") break; 
        if (check(sentence)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }

    return 0; 
}