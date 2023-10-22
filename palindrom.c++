#include<iostream>
using namespace std;
void palindrome(int num){
    int pali=num;
    int sum=0;
    while (num!=0){
        int temp=num%10;
        sum=sum*10+temp;
        num=num/10;
    }
    if(sum==pali){
        cout<<sum;
    }
}
void range(int min,int max){
    for(int i=min;i<max;i++){
        int palindrom(i);
    }

}
int main(){
    int num,min;
    int max;
    cout<<"min"<<endl;
    cin>>min;
    cout<<"max"<<endl;
    cin>>max;
    range(min,max);
    
    return 0;
}