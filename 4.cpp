#include <iostream>
#include <math.h>

//option 18

using namespace std;

float y;
float x;
float c;

const float e = 2.72;
const int k = 2;
float m;

int main(){
    cout<<"введіть значення параметру m"<<endl;
    cin >> m;
    
    x = pow(e, m*k);
    cout<<"x:"<<x<<endl;
    c = pow(cos(m),2) + pow(k,2);
    cout<<"c:"<<c<<endl;
    y = pow(pow(x,2)+pow(c,2), 1.0/8);
    cout<<"y:"<<y<<endl;
    
    cout << y << " - значення функції у";
}
