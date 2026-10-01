#include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Hello");
    s.push("World");
    s.push("Stack");
    cout<<"Top element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element after pop: "<<s.top()<<endl;
    cout<<"Stack size: "<<s.size()<<endl;
    return 0;
}