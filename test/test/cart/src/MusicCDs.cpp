#include "MusicCDs.h"
#include "MusicCDs.h"
#include "Magazines.h"
#include "Books.h"
#include <vector>
#include <string>
#include <fstream>
using namespace std;
MusicCDs::MusicCDs()
{
    id=0;
    name="";
    price=0;
}
MusicCDs::MusicCDs(int id, string n, float a)
{
    this->id=id ;
    name=n;
    price=a;
}
int MusicCDs::get_ID()
{
    return id;
}
float MusicCDs::get_Price()
{
    return price;
}
void MusicCDs::display_cds()
{
    cout<<id<<name<<price<<endl;
    ofstream out_file;
out_file.open("output.txt");

out_file <<id<<name<<price<< endl;



}

