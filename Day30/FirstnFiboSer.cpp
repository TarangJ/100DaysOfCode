class FirstnFibo{
    public:
    vector<long long> printFibb(int n) {
        vector<long long> v;
        long long s=0;
        long long x=1;
        for(int i=0;i<n;i++){
            v.push_back(x);
            long long tm=s;
            s=x;
            x+=tm;
        }
        return v;
    }
};