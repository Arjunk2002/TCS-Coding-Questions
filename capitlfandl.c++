#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="arjun karyappa";
    int n=s.length();

    int i;
    for(i=0;i<s.length();i++){
        if(i==0||i==n-1){
            s[i]=toupper(s[i]);
        }else if(s[i]==' '){
            s[i-1]=toupper(s[i-1]);
            s[i+1]=toupper(s[i+1]);
        }else{
            continue;
        }
    }
    cout<<s;
    return 0;
}