class UnionArr{
    public:
    int Union(int a[], int n, int b[], int m)  {
        
        set<int> s;
        for(int i=0;i<n;i++)

            s.insert(a[i]);

        for(int j=0;j<m;j++)

            s.insert(b[j]);
            
        return s.size();
    }
};