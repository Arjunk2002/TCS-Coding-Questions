#include<iostream>
#include<algorithm>
using namespace  std;
int main(){
    string s="takeuforward";
    char ans;
    int count[256]={0};
    int max_freq=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        count[s[i]]++;
        if(max_freq<count[s[i]]){
            max_freq=count[s[i]];
            ans=s[i];            
        }
    }
    cout<<ans;
    return 0;
}