#include"livre.h"
int livre::compteur = 0;
livre::livre() : titre(nullptr), index(false), prix(0.0) {compteur++;}

livre::livre(char* t, float p, bool i) : prix(p), index(i) {
    titre = new char[strlen(t) + 1];
    strcpy(titre, t);
    compteur++;
}

livre::livre(const livre & l) {
    prix = l.prix;
    index = l.index;
    titre = new char[strlen(l.titre) + 1];
    strcpy(titre, l.titre);
    compteur++;
}

livre::~livre() {
    delete [] titre;
    compteur--;
}

bool livre::operator==(const livre &l) {
    return (index == l.index && prix == l.prix && strcmp(titre, l.titre) == 0);
}

bool livre::operator!=(const livre &l) {
    return !(*this == l);
}

livre& livre::operator=(const livre &l) {
    if (this != &l) {
        delete[] titre;
        titre = new char[strlen(l.titre) + 1];
        strcpy(titre, l.titre);
        prix = l.prix;
        index = l.index;
    }
    return *this;
}

istream& operator>>(istream& in, livre &l) {
    cout << "Entrer les informations du livre :" << endl;
    cout << "Titre du livre : ";
    char temp[100];
    in >> temp;
    delete[] l.titre;
    l.titre = new char[strlen(temp) + 1];
    strcpy(l.titre, temp);
    cout << "Prix : ";
    in >> l.prix;
    cout << "Index (1 pour vrai, 0 pour faux) : ";
    in >> l.index;
    return in;
}

ostream& operator<<(ostream& os, const livre &l) {
    os << "***********" << endl;
    os << "Titre du livre : " << l.titre << endl;
    os << "Prix : " << l.prix << endl;
    os << "Index : " << l.index << endl;
    return os;
}

char *livre::gettitre() {
    return titre;
}
int livre::getCompteur() {
    return compteur; // Fonction pour obtenir la valeur du compteur statique
}



















