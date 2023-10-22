#include<iostream>
using namespace std;

int Fact(int n){
	if(n==0){
		return 1;
	}else if(n==0){
		return 1;
	}else{
		cout<< n <<"*";
		return n*Fact(n-1);
	}
}


int main() {
	// Write your code here
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	int fat=Fact(n);
	cout<<"=" <<fat<<endl;

}







