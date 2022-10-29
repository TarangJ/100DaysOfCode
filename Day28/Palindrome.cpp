class Palindrome {
public:
    int PalinArray(int a[], int n){
    	for(int x =0;x<n;x++){
    	    string s=to_string(a[x]);
    	    int len=s.size()-1;
    	    for(int i=0,j=len;i<=len/2;i++,j--){
    	        if(s[i]!=s[j]){
    	            return 0;
    	        }
    	    }
    	}
    	return 1;
    }
};