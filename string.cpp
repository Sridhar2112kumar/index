#include<iostream>
#include <string>
using namespace std;
int main(){
    /*string s="sr";
    cout<<s<<endl;
    cout<<s.size()<<endl;
    cout<<s[s.size()]<<endl;
    s.push_back('\0');
    cout<<s.size()<<endl;
    cout<<s[s.size()]<<endl;*/
    string s="sridhar kumar";
    char ch=s[4];
    cout<< char(ch-'a'+'A')<<endl;
    cout<<"what is'\0' your name"<<endl;
    return 0;
}