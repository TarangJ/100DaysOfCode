class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        int left=0,right=n-1;
        while(true){
            if(left>=right){
                break;
            }
            if(arr[right]==1){
                right--;
            }
            else if(arr[left]==0){
                left++;
            }
            else{
                arr[left]=0;
                arr[right]=1;
                left++;
                right--;
            }
        }
    }
};