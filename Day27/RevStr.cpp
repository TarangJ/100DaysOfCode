class StrRev {
  public:
    string revStr(string S) {
        // code here
        string A;
        A.assign(S);
        int i,n=S.size()-1;
        for(i=0;i<=n;i++){
            S[i]=A[n-i];
        }
        return S;
    }
};