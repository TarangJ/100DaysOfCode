void printPat(int n){
    int temp=n;
int m=n;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        for(int z=temp;z>0;z--){
            cout<<m<<" ";
        }
        m--;
    }
    cout<<"$";
    m=n;
    temp--;
}
}