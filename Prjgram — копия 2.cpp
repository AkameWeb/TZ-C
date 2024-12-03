#include<iostream>
#include<cmath>

#define PI 3.14


using namespace std;
 class Pointer{
    private:
    double x, y, z, V, R;
    public:
    
    int Getx(){
        return x;
    }
    int Setx(int valueX){
        x = valueX;
    }

    int Gety(){
        return y;
    }
    int Sety(int valueY){
        y = valueY;
    }

     int Getz(){
        return z;
    }
    int Setz(int valueZ){
        z = valueZ;
    }

    int GetV(){
        return V;
    }
    int SetV(int valueV){
        V = valueV;
    }
    int GetR(){
        return R;
    }
    int SetR(int valueR){
        R = valueR;
    }

    void Coordinat(){
        cout << "x: "<< x<< " y: "<< y<< " z: "<<z<<endl;
       Dev();
    }

    private:
    void Dev(){
       double dev = sqrt((4*V*PI)/(3*PI));
       cout << dev<< endl;
    }
    
    
};
void Cordinate(){
    Pointer P;
    double x,y,z,V,R;
    cout << "Coordinat"<< endl;;
    cin >> x;
    cin >> y;
    cin >> z;

    P.Setx(x);
    P.Sety(y);
    P.Setz(z);

    cout << "V & R"<<endl;
    cin >> V;
    cin >> R;

    P.SetV(V);
    P.SetR(R);
    P.Coordinat();
    
}
int main(){

    Cordinate();

    
   
    return 0;
}

