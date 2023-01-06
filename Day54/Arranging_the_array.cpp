void Rearrange(int arr[], int n)
{
    vector<int> pos;
    int j=0;
    // Your code goes here
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
        else{
            pos.push_back(arr[i]);
        }
    }
    for(int i=0;i<pos.size();i++){
        arr[j]=pos[i];
        j++;
    }
}