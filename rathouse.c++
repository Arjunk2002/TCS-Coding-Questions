#include<iostream>
using namespace std;

int cal(int r,int n,int arr[]){
    int ans=0;
    int index;
    for(int i=0;i<n;++i){
        if(ans<r){
            ans=arr[i]+ans;
        }else{
            index= i-1;
        }
    }
    return index;

}



int main(){
   int r;
  cin >> r;
  int unit;
  cin >> unit;
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i)
    {
      cin >> arr[i];
    }
    int total=r*unit;
    int result=cal(total,n,arr);
    cout<<result;
    return 0;
}