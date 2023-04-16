#include<iostream>
using namespace std;
int main(){
    int arr[6],n=6,t,min;
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        t=arr[i];
        min=i;
        for(int j=i+1;j<n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        arr[i]=arr[min];
        arr[min]=t;
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}