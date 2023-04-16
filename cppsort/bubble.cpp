#include<iostream>
using namespace std;
int main(){
    int arr[6],n=6,t;
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
               t=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=t;
            }
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}