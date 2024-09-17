#include<iostream>

#define PI 3.14
#define Fun(x,y)((x)*(y));

using namespace std;

int main(){
    const int ROW = 5;
    const int COL = 5;

    int arr[ROW][COL];

    for(int i =0; i < ROW; i++){
        for(int j =0; j< COL; j++){
            arr[i][j] = rand() % 10;
            
        }
    }   

    for (int i =0; i < ROW; i++){
        cout<< i << " colonc" << endl;
        for(int j =0; j< COL; j++){
           
            cout << arr[i][j]<<" \t"<<endl; 
        }
    }   

}

