#include<iostream>
using namespace std;
string modify (string s){
        for(int i=0;i<s.size();i++){
            if(s[i]==32){
                s[i]=0;
            }
        }
        return s;
    }
int main(){
  string r,s;
  cout<<"Enter the your string :";
  cin>>s;
  r=modify(s);
  cout<<"Space removed : "<<r<<endl;
  
  return 0;
}
