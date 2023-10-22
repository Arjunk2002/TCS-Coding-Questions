#include<iostream>
#include<string>
using namespace std;
void pali(string s,int n){
    for(int i=0;i<n;i++){
        s[i]=tolower(s[i]);
    }int v=0,c=0,w=0;
    for(int i=0;i<n;i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        v++;
    }
    else if(s[i]>='a'&&s[i]<='z'){
        c++;
    }
    if(s[i]==' '){
        w++;
    }
    }
    cout<<v<<endl;
    cout<<c<<endl;
    cout<<w<<endl;


}

int main(){
    string s="arjun";
    int n=s.length();
    pali(s,n);
    return 0;
}