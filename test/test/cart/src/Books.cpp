#include "Books.h"
#include <fstream>
Books::Books()
{
   id=0;
    name="";
    price=0;
}

Books::Books(int id, string n, float a)
{
    this->id=id ;
    name=n;
    price=a;
}
int Books::get_ID()
{
    return id;
}
float Books::get_Price()
{
    return price;
}
void Books::display_b()
{
    cout<<id<<name<<price<<endl;
    ofstream out_file;
out_file.open("output.txt");

out_file <<id<<name<<price<< endl;

}

