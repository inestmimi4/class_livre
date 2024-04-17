#include"livre.cpp"
int main (){

    livre l1("Titre1", 10.5, true);
    cout << l1;

    livre l2 = l1;
    cout << l2;

    livre l3;
    cin >> l3;
    cout << l3;
cout << "Nombre d'objets de la classe livre crees : " << livre::getCompteur() << endl;

    return 0;


}
