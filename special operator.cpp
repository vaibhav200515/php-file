#include<iostream> 
using namespace std;
int x=20;//global variable declaration
int main(){
  int x=10;
  cout<<"OLd-"<<x<<endl;
  cout<<"new-"<<::x<<endl;
  return 0;
  

}