#include<iostream>
#include<vector>
#include<stack>
#define PI 3.14
//#define Fun(x,y)((x)*(y));

using namespace std;


template <typename T>
T Fun(T a ,T b){
    return a + b;
}
template <typename T1, typename T2>
T1 Dev (T1 a, T2 b){
    return a + b;
}
//одно и тоже что и typename, идет с языка С
template <class T>
T foo(T a ,T b){
    return a + b;
}

int main(){
    
    cout << Fun(1.89, 45.90);
    cout << Dev(1.21, 3);
    //cout << foo(1.21, 3);
    return 0;
}

