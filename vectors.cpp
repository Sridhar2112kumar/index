#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    vector<int>a(6,4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    cout<<v.capacity()<<"  ";
    cout<<v.size()<<endl;
    for(int i:a){
        cout<<i<<endl;
    }
     cout<<v.front()<<endl;
     cout<<v.back()<<endl;
      cout<<"element"<<v.at(1)<<endl;
    return 0;
}