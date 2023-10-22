#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    /* using string*/
    string s="i am arjun";
    string a;
    int n=s.length();
    for(int i=n;i>=0;i--){
        a+=s[i];
    }
    for(int i=0;i<a.length();i++){
        cout<<a[i];
    
    }
    cout<< " "<<endl;
    /*using stack*/
    string c="hello arjun";
    stack <char> st;
    for(int i=0;i<n;i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        char x=st.top();
        st.pop();
        cout<<x;
    }


    return 0;
}