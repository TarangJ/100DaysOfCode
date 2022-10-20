class Sumofevnodd{
	public:
		vector<int> find_sum(int n)		{
		    // Code here
		    vector<int>v;
		    int sumevn=0,sumodd=0;
		    for(int i=1;i<=n;i++){
		        if(i%2==0){
		            sumevn+=i;
		        }
		        else{
		            sumodd+=i;
		        }
		    }
		    v.push_back(sumodd);
		    v.push_back(sumevn);
	            return v;
		}
};