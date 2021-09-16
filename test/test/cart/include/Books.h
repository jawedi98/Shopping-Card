#include <iostream>
#include <string>
using namespace std;
#ifndef BOOKS_H
#define BOOKS_H


class Books
{
    public:
    int id;
    string name ;
    float price ;


    Books();
    Books(int,string,float);
    void display_b();
    int get_ID();
    float get_Price();
};

#endif // BOOKS_H
