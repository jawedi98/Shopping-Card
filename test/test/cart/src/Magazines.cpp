#include "Magazines.h"
#include <fstream>
Magazines::Magazines()
{
    id=0;
    name="";
    price=0;
}
Magazines::Magazines(int id, string n, float a)
{
    this->id=id ;
    name=n;
    price=a;
}
int Magazines::get_ID()
{
    return id;
}
float Magazines::get_Price()
{
    return price;
}
void Magazines::display_m()
{
    cout<<id<<name<<price<<endl;
    ofstream out_file;
out_file.open("output.txt");

out_file <<id<<name<<price<< endl;

}
