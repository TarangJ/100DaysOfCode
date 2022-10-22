class PerfectArr{
    public:
    bool IsPerfect(int a[],int n){
        int i=0,j=n-1;
        while(i<j){
            if(a[i]==a[j]){
                i++;
                j--;
            }
            else
                return false;
        }
    return true;
    }
};