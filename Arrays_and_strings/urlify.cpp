#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    string s;
    getline(cin,s);
    int n = s.length();
    int count = 0;
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            count++;
        }
    }
    int new_len = n+(count*2);
    string result(new_len,' ');
    int j=0;
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            result[j]='%';
            result[j+1]='2';
            result[j+2]='0';
            j+=3;
        }
        else{
            result[j]=s[i];
            j++;
        }
    }
    cout<<result;
    

    return 0;
}