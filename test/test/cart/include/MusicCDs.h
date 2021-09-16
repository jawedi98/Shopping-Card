using namespace std;
#include <vector>
#include <string>
#ifndef MUSICCDS_H
#define MUSICCDS_H


class MusicCDs
{
    public:
    int id;
    string name ;
    float price ;


    MusicCDs();
    MusicCDs(int,string,float);
    void display_cds();
    int get_ID();
    float get_Price();

};

#endif // MUSICCDS_H
