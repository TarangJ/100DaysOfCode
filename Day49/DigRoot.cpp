class Solution{
  public:
    int digitalRoot(int n){
        if(n<=9)
            return n;
            
        return digitalRoot((n/10)+digitalRoot(n%10)); 
    }
};