#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="arjun karyappa";
    int visited[100]={0};
    for(int i=0;i<s.length()-1;i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                visited[j]=1;
            }
        }

    }
    for(int i=0;i<s.length();i++){
        if(visited[i]==0){
            cout<<s[i];
        }
    }
    return 0;
}