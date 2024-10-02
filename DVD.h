#ifndef DVD_H
#define DVD_H
#include <string>
#include "Media.h"

using namespace std;


class DVD : public Media{
private:
    int duree;

public:
    DVD();
    int getDuree();
    void setDVD(string, string, int, int, string);
    void afficherDVD();

};



#endif //DVD_H
