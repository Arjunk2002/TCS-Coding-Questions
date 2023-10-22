#include<iostream>
#include<string>
using namespace std;

int chkpass(char s[],int n,int min){
    if(n<min){
        return 0;
    }
    if(s[0]-'0'>=0&&s[0]-'0'<=9){
        return 0;
    }
    int a=0,cap=0,num=0;
    while(a<n){
        if(s[0]==' '||s[0]=='+'){
            return 0;
        }if(s[a]>=65&&s[a]<=90){
            cap++;
        }if(s[a]-'0'>=0&&s[a]-'0'<=9){
            num++;
        }a++;
    }
    return cap>0&&num>0;

}


int main(){
    std::string inputLine;
    std::getline(std::cin, inputLine);
    int n=inputLine.size();
    int min;
    cin>>min;
    char* c=&inputLine[0];
    int ans=chkpass(c,n,min);
    if(ans){
        cout<<"valid";
    }else{
        cout<<"invalid";
    }
    return 0;
}