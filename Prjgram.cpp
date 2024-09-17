#include<iostream>
#include<vector>
#include<stack>
#define PI 3.14
//#define Fun(x,y)((x)*(y));

using namespace std;

class Car{
    public: 
    string model, brand;
    int distant = 0;

    void drive(int millit){
       distant+= millit;
    }

    void Fun(){
        cout << model<<endl;
        cout << brand<<endl;
        cout << distant << endl;
    }
};
int main(){
    Car car;
    car.brand = "BMW";
    car.model = "F-90";
    const int distant = 100;
    car.drive(distant);

    car.Fun();

    return 0;
}
