#include <iostream>
#include "include/Dictionary.h"

using namespace std;

int main()
{
    cout << "------------DICTIONARY------------" << endl << "----------LESPAGNOL-REMY----------" << endl << endl;

    cout << "---------INIT--DICTIONARY---------" << endl;
    Dictionary dico;
    dico.Insert("Bonbons","Candies");
    dico.Insert("Bonjour","Hello");
    dico.Insert("Remy","Remy");
    dico.Insert("Maison","House");

    cout << dico << endl;
    cout << "---TAILLE--- : " << dico.Size() << endl << endl;

    cout << "--------MINIMAL DICTIONARY--------" << endl;
    dico.Remove("Remy");
    cout << dico <<endl;
    cout << "---TAILLE--- : " << dico.Size() << endl << endl;
    cout << endl <<"----> Bonjour' en Anglais:  " << dico.Translate("Bonjour") << endl << endl;

    cout << "---------CLEAR-DICTIONARY---------";
    dico.Flush();
    cout << dico <<endl;
    cout << "---TAILLE--- : " << dico.Size() << endl << endl;

    cout << "--------ISTREAM-DICTIONARY--------" << endl;
    Dictionary iDico(cin);
    cout << iDico << endl << endl;
    cin >> iDico;
    cout << iDico << endl << endl;
    return 0;
}
