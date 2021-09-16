#include <iostream>
#include <string>
using namespace std;
#ifndef MAGAZINES_H
#define MAGAZINES_H


class Magazines
{
    public:
    int id;
    string name ;
    float price ;


    Magazines();
    Magazines(int,string,float);
    void display_m();
    int get_ID();
    float get_Price();


};

#endif // MAGAZINES_H
