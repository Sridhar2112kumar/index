#include<iostream>
using namespace std;
int main(){
    int arr[6],n=6,t,min;
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        t=arr[i];
        int j=i-1;
        while(j>=0){
           if(arr[j]>t){
              arr[j+1]=arr[j];
              
           }
           else break;
           j--;
          
        }
     arr[j+1]=t;
       
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}
