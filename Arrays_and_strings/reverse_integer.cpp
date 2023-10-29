lass Solution {
public:
    int reverse(int x) {
        long rev = 0;
        
        if(x<=INT_MIN || x>=INT_MAX){
            return 0;
        }
        else{
            int temp = x;
            int mod = 0;
            while(temp){
                mod = temp%10;
                rev=rev*10+mod;
                temp/=10;
            }
        }
        
        if(rev<=INT_MIN || rev>=INT_MAX){
            return 0;
        }
        return rev;
        
    }
};