#include<iostream>
using namespace std;
int main(){
 int x,y,z;
 cin>>x>>y>>z;

  if(x>y && x>z){
    cout<<"Largest number is x";
  }
  else if(y>x && y>z){
    cout<<"Y is the largest number";
  }
  else{
    cout<<"Z is the largest number";
  }


    return 0;
}