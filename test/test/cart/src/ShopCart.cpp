#include "ShopCart.h"
#include <vector>
#include <string>
#include <fstream>

ShopCart::ShopCart(float total_pr, string n)
{
    name = n;
    total_price = total_pr;
}
vector<MusicCDs>::iterator ShopCart ::search_cd(int id)
{
    for(vector<MusicCDs>:: iterator i=cds.begin(); i!=cds.end(); i++)
    {
        if(i->get_ID()==id)
            {return i ;}
    }
    return cds.end();
}
vector<Magazines>::iterator ShopCart ::search_m(int id)
{
    for(vector<Magazines>:: iterator i=magazines.begin(); i!=magazines.end(); i++)
    {
        if(i->get_ID()==id)
            {return i ;}
    }
    return magazines.end();
}
vector<Books>::iterator ShopCart ::search_b(int id)
{
    for(vector<Books>:: iterator i=books.begin(); i!=books.end(); i++)
    {
        if(i->get_ID()==id)
            {return i ;}
    }
    return books.end();
}

void ShopCart::add_c(MusicCDs c)
{
    if(search_cd(c.get_ID())==cds.end())
        {cds.push_back(c);
        cout<<"\n Music Cd Added successfully !"<<endl;}

    else cout<<"\n already exist !"<<endl;
}
void ShopCart::add_m(Magazines m)
{
    if(search_m(m.get_ID())==magazines.end())
        {magazines.push_back(m);
        cout<<"\n Magazine Added successfully !"<<endl;}

    else cout<<"\n already exist !"<<endl;
}
void ShopCart::add_b(Books b)
{
    if(search_b(b.get_ID())==books.end())
        {books.push_back(b);
        cout<<"\n Book Added successfully !"<<endl;}

    else cout<<"\n already exist !"<<endl;
}
void ShopCart:: display()
{
    cout<<"\n Shopping cart name : "<<name<<endl;

    cout<<"\n Items List !"<<endl;
    cout<<"\n Music Cds :"<<endl;
    for(vector<MusicCDs>:: iterator i=cds.begin(); i!=cds.end(); i++)
    {
        i->display_cds();
    }
    cout<<"\n Magazines :"<<endl;
    for(vector<Magazines>:: iterator i=magazines.begin(); i!=magazines.end(); i++)
    {
        i->display_m();
    }
    cout<<"\n Books :"<<endl;
    for(vector<Books>:: iterator i=books.begin(); i!=books.end(); i++)
    {
        i->display_b();
    }
}
float ShopCart:: summarise()
{
    float sum_cds=0,sum_books=0,sum_magazines=0;
    if(cds.size()==0)

        sum_cds=0;
    for(vector<MusicCDs>:: iterator i=cds.begin(); i!=cds.end(); i++)
    {
        sum_cds+=i->get_Price();
    }
    cout<<"Total price of Music Cds :$"<<endl;
    cout<<sum_cds<<endl;
    cout<<"\n"<<endl;
    if(books.size()==0)
        sum_books=0;
    for(vector<Books>:: iterator i=books.begin(); i!=books.end(); i++)
    {
        sum_books+=i->get_Price();
    }
      cout<<"Total price of books :$"<<endl;
    cout<<sum_books<<endl;
    cout<<"\n"<<endl;
    if(magazines.size()==0)
     sum_magazines=0;
    for(vector<Magazines>:: iterator i=magazines.begin(); i!=magazines.end(); i++)
    {
        sum_magazines+=i->get_Price();
    }
    cout<<"Total price of magazines :$"<<endl;
    cout<<sum_magazines<<endl;
    cout<<"\n"<<endl;
    float total_price = sum_cds+sum_books+sum_magazines ;
     cout<<"The total price of your shopping card items is :$"<<endl;
     cout<<total_price<<endl;
     return total_price;

}

