class DelAlteStr {
  public:
    string delAlternate(string S) {
        // code here
       string str;
       for(int i=0;i<S.size();i+=2)
            str.push_back(S[i]);
        
        return str;
    }
};