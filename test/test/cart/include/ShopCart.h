#include "MusicCDs.h"
#include "Magazines.h"
#include "Books.h"
#include <vector>
#include <string>
using namespace std;
#ifndef SHOPCART_H
#define SHOPCART_H


class ShopCart
{
    private:
    string name;
    vector<MusicCDs> cds;
    vector<Books> books;
    vector<Magazines> magazines;
    float total_price;

    public:
        ShopCart(float,string);
        vector<MusicCDs>::iterator search_cd(int);
        vector<Magazines>::iterator search_m(int);
        vector<Books>::iterator search_b(int);
        void add_c(MusicCDs);
        void add_b(Books);
        void add_m(Magazines);
        void display();
        float summarise();



};

#endif // SHOPCART_H
