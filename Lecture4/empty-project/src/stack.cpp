#include <iostream>
#include "console.h"
#include "stack.h"
using namespace std;

//function prototype declarations
int checkBalance(string code);
void test(string s, int expected);

int main() {
    test("for (i=0;i<a(3};i++) { foo{); )", 14)；
    test("while (true) foo(); }{ ()",       20);
    test("if (x) {",                         8);
    test("if (x) }",                         7);
    return 0;
}

int checkBalance(string code){
    Stack<char> stack;
    for(int i=0; i<code.length();i++){
        char c=code[i];
        if(c == '('||c=='{'){
            stack.push(c);
        }else if(c==')'){
            if(stack.peek() == '('){
                stack.pop();
            }else{
                return i;
            }
        }else if(c=='}'){
            if(!stack.isEmpty() && stack.peek() == '{'){ //stack.size()>0
                stack.pop();
            }else{
                return i;
             }
        }
    }
    if(stack.isEmpty()){
        return -1;
    }else{
        //BAD
        return code.length();
    }
}

/*
*TODO
*Performs one test on the checkBalance function.
* prints the call's output and whether it mathces what was expected.
*/
