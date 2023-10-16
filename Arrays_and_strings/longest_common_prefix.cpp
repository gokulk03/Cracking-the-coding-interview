class Solution{
public:
    string LCP(string ar[], int n)
    {
        // code here
        if(n==0){
            return "-1";
        }
        if(n==1){
            return ar[0];
        }
        sort(ar,ar+n);
        int min_len = min(ar[0].size(),ar[n-1].size());
        int c = 0,i=0;
        while(i<min_len && ar[0][i]==ar[n-1][i]){
            c++;
            i++;
        }
        if(c==0){
            return "-1";
        }
        return ar[0].substr(0,c);
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        solution ob;
        cout<<ob.LCP(ar,n);
    }
    return 0;

}