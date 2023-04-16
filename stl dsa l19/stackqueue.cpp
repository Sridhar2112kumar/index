#include<iostream>
#include <stack>
#include <queue>
using namespace std;
int main(){
    stack<int> s;
    s.push(6);
    s.push(7);
    cout<<"top element is "<<s.top()<<endl;
    queue<string> q;
    q.push("who");
    q.push("why salivan");
    cout<<"top element is "<< q.front()<<endl;
    priority_queue <int> pq;
    pq.push(5);
    pq.push(7);
    pq.push(3);
    pq.push(9);
    int n= pq.size();
    for(int i=0;i<n;i++){
        cout<<pq.top()<<" ";
        pq.pop();
    }cout<<endl;
    return 0;
}