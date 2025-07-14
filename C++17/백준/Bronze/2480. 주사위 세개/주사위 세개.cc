#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>> a>>b>>c;
    int count=1;
    int coin,max;
    max=a;
   if (a==b&& b==c)count+=3;
   if (a!=b&& b==c) count+=1;
   if (a==b&& b!=c) count+=1;
   if (a==c&& b!=c) count+=2;

   
   if (a<b)max=b;
   if (b<c&&a<c)max=c;
  
   
   if (count==1){
       coin=max*100;
   }else if(count==2){
       coin=1000+100*b;
   }else if(count==3){
       coin=1000+100*c;
   }else{
       coin=10000+1000*max;
   }
   cout << coin;
   return 0;
}