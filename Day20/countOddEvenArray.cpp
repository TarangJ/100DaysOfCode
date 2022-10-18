class Coe{
    public:
    void countOddEvn(int arr[], int sizear){       
        int cd=0,ce=0;
        for(int i=0;i<sizear;i++){
            if(arr[i]%2==0)
                ce++;
                
            else
                cd++;
        }
       cout<<cd<<" "<<ce<<"\n";
        
    }
};