#include<iostream>
using namespace std;

void bubble(int arr[], int n) 
{
    //write your code here
    
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}


int main(){
   int arr1[]={5,3,8,45,12};
   bubble(arr1,5);
   for(int i=0;i<5;i++){
    cout<< arr1[i] ;
   }


}