class GCD{
	public:
    	int gcd(int A, int B) { 
	    while(B!=0){
	        int rem =A%B;
	        A=B;
	        B=rem;
	    }
	     return A; 
	} 
};