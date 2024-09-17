#include<iostream>
#include<vector>
#include<stack>
#define PI 3.14
//#define Fun(x,y)((x)*(y));

using namespace std;

int main(){
    stack<std::string> stack;
    
    stack.push("Tom");
    stack.push("Bob");
    stack.push("Sam");
    while(!stack.empty()){
        std::cout << "Top: " << stack.top() << std::endl; 
        stack.pop();
    }
    return 0;
}

