#include <iostream>
#include <math.h>

int A_x = 6;
int A_y = 0;

int B_x = 18;
int B_y = 17;

int C_x = -18;
int C_y = 19;



int AB_x = 12;
int AB_y = 17;

int BC_x = -36;
int BC_y = 2;

int CA_x = -6;
int CA_y = - 19;

int length(int coord1, int coord2){
    int res;

    res = sqrt(pow(coord1,2) + pow(coord2,2));
    return res;
}

int main(){

    float AB = length(AB_x, AB_y);
    float BC = length(BC_x, BC_y);
    float CA = length(CA_x, CA_y);

    float m_a = sqrt(((pow(AB,2)+pow(CA,2)/2)) - ((pow(BC,2))/4));
    std::cout<<m_a<< " - довжина медіани до сторони BC"<< std::endl;

    float half_perim = (AB + BC + CA)/2;

    float h_c = 2/AB*sqrt(half_perim * (half_perim-AB)*(half_perim-CA)*(half_perim-BC));

    std::cout<<h_c<< " - довжина висоти до сторони AB"<<std::endl;

    return 0;
}