#include<iostream>
using namespace std;

int main(){
    string c="arjun$kar&";
    string s;
    int j=0;
    for(int i=0;i<c.length();i++){
        if((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z')){
            s+=c[i];
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
    return 0;
}