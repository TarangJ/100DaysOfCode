#include<iostream>
using namespace std;
int main(){
  int n,rev,chk,sum=0;
  cout<<"Enter the number : ";
  cin>>n;
  chk=n;
  while(n>0){
    rev=n%10;
    sum=(sum*10)+rev;
    n/=10;
  }
  if(chk==sum)
    cout<<"It is a palindrome \n";
    
  else
    cout<<"Not a palindrome \n";

  return 0;
}
