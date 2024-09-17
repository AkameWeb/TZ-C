#include<iostream>
#include<vector>
#define PI 3.14
//#define Fun(x,y)((x)*(y));

using namespace std;

int main(){
    
    vector<int> arr(10); 
   
    for(int i = 0; i < 10; i++){
        arr[i] = rand();
        cout<<arr[i - 1]<<endl;
    }
    return 0;
}
