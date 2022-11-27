#include<iostream>
using namespace std;
int lstInd(string s) {
    int ans=-1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
        ans=i;
        }
    }   
    return ans ;
}
int main(){
    string str;
    cout<<"Enter the value in '0' & '1' : ";
    cin>>str;
    int res=lstInd(str);
    if(res>0){
        cout<<"Last index of  1 in given string is : "<<res;
    }
    else{
        cout<<"Since, 1 is not present, so output is : "<<res;
    }
    
    return 0;
}