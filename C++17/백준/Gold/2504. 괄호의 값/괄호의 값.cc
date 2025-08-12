#include <iostream>
#include <stack> 
#include <string>
using namespace std;


/*
pair<int,int> multiplyer(const string& line, int start){
    for (int i=0; i<(line.size()-1); i++){
        stack<char> st;
        if (line[i]=='('&&line[i+1]==')') return {2,2};
        else if(line[i]=='['&&line[i+1]==']') return {3,2};
        else if (line[i]=='(') {
            if (line[i+1]=='('||line[i+1]=='['){
                return {2*multiplyer(line.substr(i+1),i+1).first,i+3};
            }
        }
        else if (line[i]=='[') {
            if (line[i+1]=='('||line[i+1]=='['){
                return {3*multiplyer(line.substr(i+1),i+1).first,i+3};
            }
        }
    }
    return {0,0};
}

int adder(const string& line){
    pair<int,int> val=multiplyer(line,0);
    int cnt=val.first;
    int idx=val.second;

    for (int i=idx; i<(line.size());){
        cnt+=multiplyer(line.substr(i),i).first;
        i+=multiplyer(line.substr(i),i).second;
    }    
    return cnt;
}
*/
int adder (stack<int> st){
    int cnt=0;
    while(!st.empty()){
        if (st.top() < 0) return 0;
        cnt+=st.top();
        st.pop();
    }
    return cnt;
}
int calculate(const string& line){
    stack<int> st;

    for (int i=0; i<line.size(); i++){
        if (line[i]=='(') st.push(-2);
        else if (line[i]=='[') st.push(-3);
        else if (line[i]==')'){
            int cnt=0;
            while(!st.empty()&&st.top()!=-2&&st.top()!=-3){
                cnt+=st.top();
                st.pop();
            }
            if (st.empty()||st.top()!=-2) return 0; 
            st.pop();
            if (cnt!=0)st.push(cnt*2);
            else st.push(2);
            
        }else if (line[i]==']'){
            int cnt=0;
            while(!st.empty()&&st.top()!=-3&&st.top()!=-2){
                cnt+=st.top();
                st.pop();
            }
            if (st.empty()|| st.top()!=-3) return 0; 
            st.pop();
            if (cnt!=0)st.push(cnt*3);
            else st.push(3);
        }
        else return 0;
    }
    return adder(st);
}

int main(){
    string line;
    cin>> line;
    cout << calculate(line);
    return 0;
}