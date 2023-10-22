#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="arjun karyappa";
    int n=s.length();
    for(int i=0;i<n-1;i++){
        int cnt=0;
        for(int j=i;j<n;j++){
            if(s[i]==s[j]){
                cnt++;
            }
        }
        cout<<s[i]<<"="<<cnt;
    }
    return 0;
}