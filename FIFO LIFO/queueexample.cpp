#include <iostream>
#include <queue>
void printQueue(queue<int>queue){
    while (!queue.empty()) {
        cout << queue.front() << "  "; 
        queue.pop();
        }
    cout << endl;
}
int main (){
    queue<int> myq; 
    myq.push(1);
    myq.push(2);
    myq.push(3);
    cout << myq.size() << "  " << myq.front() << "  " << myq.back();
    printQueue(myq);
}