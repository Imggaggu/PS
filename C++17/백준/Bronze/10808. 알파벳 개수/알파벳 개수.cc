#include <iostream>
using namespace std;
int main(){
    char word[101];
    cin>>word;
    int len=0;
    while(word[len]!='\0'){
        len++;
    }
    int arr[27]={0};
    char alpha[27]="abcdefghijklmnopqrstuvwxyz";
    for (int i=0; i<26;i++){
        for(int j=0; j<len;j++){
            if (word[j]==alpha[i]){
                arr[i]++;
            }
        }
    } 
    for (int i=0; i<26; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}
