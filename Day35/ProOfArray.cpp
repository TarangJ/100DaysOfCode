long long int product(int ar[], int n, long long int mod){
     long long int out=1;
     for(int i=0;i<n;i++){
         out=(out*ar[i])%mod;
     }
     return out;
     
 }