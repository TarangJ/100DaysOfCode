class ArrayMult{
    public:
    int prod(int arr[], int n){
        for(int i=1;i<n;i++){
            arr[0]*=arr[i];
        }
        return arr[0];
    }
};