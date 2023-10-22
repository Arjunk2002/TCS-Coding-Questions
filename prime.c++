#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cnt++;
		}
	}
	if(cnt==2){
		cout<<"true";
	}else{
		cout<<"false";
	}
	
}