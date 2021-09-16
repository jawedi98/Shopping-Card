#include "ShopCart.h"
#include "MusicCDs.h"
#include "Magazines.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
   MusicCDs c1;
   Magazines m1;
   Books b1;
   ShopCart B(1,"My First Shopping Card");

    int menu;
    do
    {
        cout<<endl<<" ----------------------- MENU -----------------------"<<endl<<endl;
        cout<<"1. Add a magazine and write it down to a text file"<<endl;
        cout<<"2. Add a Music Cd and write it down to a text file"<<endl;
        cout<<"3. Add a Book and write it down to a text file"<<endl;
        cout<<"4. Display the contents of the cart"<<endl;
        cout<<"5. summarize and display the price of the shopping cart"<<endl;
        cout<<"0. Quit"<<endl<<endl;
        cout<<"Choice : ";
        cin>>menu;
        cout<<endl;

        switch(menu)
        {
            case 0 : break;

            case 1 :cout<<"Enter the magazine id : \n"<<endl;
                    cin>>m1.id;
                    cout<<"Enter the magazine's name : \n"<<endl;
                    cin>>m1.name;
                    cout<<"Enter the magazine's price : \n"<<endl;
                    cin>>m1.price;
                    B.add_m(m1);
            break;

            case 2 :cout<<"Enter the Cd id : \n"<<endl;
                    cin>>c1.id;
                    cout<<"Enter the cd's name : \n"<<endl;
                    cin>>c1.name;
                    cout<<"Enter the cds's price : \n"<<endl;
                    cin>>c1.price;
                    B.add_c(c1);
            break;

            case 3 :cout<<"Enter the book id : \n"<<endl;
                    cin>>b1.id;
                    cout<<"Enter the book's name : \n"<<endl;
                    cin>>b1.name;
                    cout<<"Enter the book's price : \n"<<endl;
                    cin>>b1.price;
                    B.add_b(b1);
            break;

            case 4 : B.display();
            break;

            case 5 :  B.summarise();
            break;


        }

    }while (menu!=0);
}
