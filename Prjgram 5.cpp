#include<iostream>
#include<vector>
#include<stack>
#define PI 3.14
//#define Fun(x,y)((x)*(y));

using namespace std;

int main(){

    int size = NULL;
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++){
        arr[i] = rand()%10;
    }

    for(int i = 0; i < size; i++){
        cout << i << " Element" << "\t";
        cout << arr + i << "\t";
        cout << arr[i] <<endl;
    }
    delete [] arr;
    return 0;
}
