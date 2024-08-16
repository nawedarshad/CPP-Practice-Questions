#include<iostream>
#include"Stack.h"
using namespace std;


bool isBalanced(string a){
    Stack st;
    int n = a.size();
    for (int i = 0; i < n; i++){
        if (st.top() == '(' && a[i] == ')' ||
            st.top() == '{' && a[i] == '}' ||
            st.top() == '[' && a[i] == ']' ){
            st.pop();
        }
        else{
            st.push(a[i]);
        } 
    }
    return st.empty();
    
}
int main(int argc, char const *argv[])
{
    string a = "{{[(((([]))))]}[}]";
    bool is = isBalanced(a);
    if (is)
    {
        cout<<"Balanced";
    } else cout<<"Unbalanced";
    return 0;
}
