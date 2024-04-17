#include<iostream>
#include<string.h>
using namespace std ;
class livre {
static int compteur;
char *titre;
bool index;
float prix ;
public :
    livre();
    livre(char*,float,bool);
    livre(const livre &);
    ~livre();
    bool operator==(const livre &);
    bool operator !=(const livre &);
    livre& operator=(const livre &);
    friend istream& operator >>(istream& , livre &);
    friend ostream& operator <<(ostream& ,const livre &);
    char *gettitre();
    static int getCompteur();


};
