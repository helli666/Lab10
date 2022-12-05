#include <iostream>
#include <math.h>

//option 18

using namespace std;

int a = 4;

int main(){
    
    cout<<a<<" - значення параметру а"<< endl;
    
    int z1 = ((a+2)/sqrt(2*a) - a/((sqrt(2*a)+2)) + 2/(a-sqrt(2*a))) * ((sqrt(a)-sqrt(2))/(a+2));
    
    int z2 = 1/(sqrt(a)+sqrt(2));
    
    cout << z1 << " - Значення першого виразу" << endl;
    cout << z2 << " - Значення другого виразу";
    return 0;
}
