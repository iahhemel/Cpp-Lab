#include<iostream>
using namespace std;
int main(){
 int x;
 int count=0;
 cin>>x;

 if(x==0){
    count=1;

 }else{
 while(x!=0){
    count++;
    x/=10;
 }

 }
 cout<<count;
    return 0;
}