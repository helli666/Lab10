#include <iostream>

int bread_price = 20;
int cheese_price = 50;



int main(){
    int a;
    float percent_growth;
    
    int new_bread_price;
    int new_cheese_price;

    std::cout << "Введіть відсоток на скільки підвищились ціни" << std::endl;
    std::cin >> percent_growth;

    percent_growth = percent_growth / 100 + 1;

    new_bread_price = bread_price * percent_growth;
    new_cheese_price = cheese_price * percent_growth;
    
    std::cout << new_bread_price<< "- нова ціна хліба"<< std::endl;
    std::cout << new_cheese_price<< "- нова ціну сиру";

    return 0;
}