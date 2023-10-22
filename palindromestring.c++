#include<iostream>
#include<string>
using namespace std;
int pali(char s[]){
    int n=3;
    int start=0,end=n-1;
    while(start<end){
        if(s[start]!=s[end]){
            return 0;
        }
        return 1;
    }
    
}
int main(){
    std::string s="aba";
    char* c=&s[0];
    int ans=pali(c);
    if(ans){
        cout<<"valid";
    }else{
        cout<<"invalid";
    }
    return 0;
}