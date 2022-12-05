#include <iostream>
//option 3

int hours_in_day = 24;
int minutes_in_hour = 60;
int seconds_in_minute = 60;

int main(){
    int seconds_in_day;
    seconds_in_day = hours_in_day * minutes_in_hour * seconds_in_minute;

    std::cout << seconds_in_day << " - секунд у добі";

    return 0;
}