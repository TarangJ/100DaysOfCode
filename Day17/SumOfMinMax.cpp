class SumOfMinMax
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	int mx=INT_MIN;
    	int mn=INT_MAX;
    	for(int i=0;i<N;i++){
    	    if(A[i]>mx){
    	        mx=A[i];
    	    }
    	    if(A[i]<mn){
    	        mn=A[i];
    	    }
    	}
    	return mx+mn;
    	
    }

};