#include <iostream>
#include <math.h>

using namespace std;

const float e = 2.72;

float equal_1;

int a;
int b;
int s;

int main(){
    cout<< "Введіть значення параметру *а*" <<endl;
    cin>>a;
    cout<< "Введіть значення параметру *b*" <<endl;
    cin>>b;
    cout<< "Введіть значення параметру *s*" <<endl;
    cin>>s;
    equal_1 = ((34*log(b) + a)/pow((2*a+4*s)/(5*s-5),0.5)) + 4*a*b;
    cout<<"Вираз:"<< equal_1;
    cout<<equal_1;
}
