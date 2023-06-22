#ifndef ZADKCPP_H
#define ZADKCPP_H

#include <iostream>
#include <string>

using namespace std;

class ZadKcpp {
public:
    void set_data();
    void year_of_birth();
    void calculate_bmi();
    void show_data();
    void show_date_and_time();

private:
    string name;
    int age;
    int gender; // 0 - male | 1 - female
    double height;
    double weight;
    string hobby;
};

#endif
