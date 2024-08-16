#include "stack.h"
void insertAtBottom(Stack &st, int x){
    if (st.empty()){
        st.push(x);
    }
    else {
    int temp = st.top();
    st.pop();
    insertAtBottom(st, x);
    st.push(temp);
    }
}
void Reverse(Stack &st){
    if (st.empty()){
        return;
    }
    int x = st.top();
    st.pop();
    Reverse(st);
    insertAtBottom(st,x);
}

void PrintStack(Stack &st) {
    Stack temp;
    while (!st.empty()) {
        int x = st.top();
        std::cout << x << " ";
        st.pop();
        temp.push(x);
    }
    while (!temp.empty()) {
        st.push(temp.top());
        temp.pop();
    }
    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    PrintStack(st);
    Reverse(st);
    PrintStack(st);
    return 0;
}
