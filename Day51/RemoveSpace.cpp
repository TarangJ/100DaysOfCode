class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        for(int i=0;i<s.size();i++){
            if(s[i]==32){
                s[i]=0;
            }
        }
        return s;
    }
};