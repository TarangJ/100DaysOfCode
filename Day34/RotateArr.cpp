class RotateArr{   
public:
    void leftRotate(int arr[], int n, int d) {
        int temp[d];
        for(int i=0;i<d;i++){
            temp[i]=arr[i];
        }
        for(int i=0;i<n-d;i++){
            arr[i]=arr[i+d];
        }
        int j=0;
        for(int i=n-d;i<n;i++){
            arr[i]=temp[j++];
        }
    }
};