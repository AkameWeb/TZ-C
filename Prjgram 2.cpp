#include<iostream>

#define PI 3.14
//#define Fun(x,y)((x)*(y));

using namespace std;

void Fun(int arr[],const int size){
    for(int i =0; i < size; i++){
        arr[i] = rand()%10;
    }
    
}

void Dev(int arr[],const int size){
      for(int i =0; i < size; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    setlocale(LC_ALL, "ru");
    
    const int size = 10;
    int arr[size];

    Fun(arr, size);
    Dev(arr, size);
}
