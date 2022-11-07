class SumDistinctAr{
public:	
	int findSum(int arr[], int n) {
	    unordered_map<int,int>count;
	    int sum=0;
	    for(int i=0;i<n;i++){
	        count[arr[i]]++;
	        if(count[arr[i]]==1){
	            sum+=arr[i];
	        }
	    }
	    return sum;
	}
};