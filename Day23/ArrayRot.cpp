class ArrRot{
    public:
    void rotateArr(int arr[], int d, int n){
        int count=1;
        while(count<=d){
            int tmp=arr[0];
            for(int i=1;i<n;i++){
                arr[i-1]=arr[i];
            }
            arr[n-1]=tmp;
            count++;
        }
    }
};