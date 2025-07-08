#include <iostream>
#include <stack>
void printStack(stack<int>stack){
    while (!stack.empty()) {
        cout << stack.top() << "  "; 
        stack.pop();
        }
    cout << endl;
}
int main (){
    stack<int> myq; 
    myq.push(1);
    myq.push(2);
    myq.push(3);
    cout << myq.size() << "  " << myq.top() << "  " << myq.peek();
    printStack(myq);
}