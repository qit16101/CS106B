#include <iostream>
#include <string>
#include "console.h"
#include "stack.h"
#include "queue.h"
using namespace std;

/*
 * stutter
 * {1,2,3} becomes {1,1,2,2,3,3}
 * mirror
 * {"a","b","c"} becomes {"a","b","c"，"c","b","a"}
*/

//function prototype declarations
void mirror(Queue<string>& q);
void stutter(Queue<int>& q);

int main_queue(){
     Queue<string> q2;
     q2.enqueue("a");
     q2.enqueue("b");
     q2.enqueue("c");
     return 0;
}

void mirror(Queue<string>& queue){
    Stack<string> stack;            //to build a new stack with stack type
    int size = queue.size();
    for (int i=0; i<size; i++){
        string s=queue.dequeue();
        stack.push(s);
        queue.enqueue(s);
    }
    while(!stack.isEmpty()){
        queue.enqueue(stack.pop());
    }
}

void stutter(Queue<int>& queue){
    while(!queue.isEmpty()){
        queue.enqueue(queue.peek());
        queue.enqueue(queue.dequeue());
    }
}

