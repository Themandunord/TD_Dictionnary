#include <iostream>
#include "include/Dictionary.h"

using namespace std;

int main()
{
    Dictionary dico;
    //dico.Insert("Bonjour","Hello");
    //dico.Insert("Au Revoir","GoodBye");
    //dico.Insert("Remy","Remy");
    cout << dico.PrintOn(cout) << "test";
    //dico.Remove("Remy");
    //cout << dico.PrintOn(cout);
    //cout <<"Bonjour en anglais: " << dico.Translate("Bonjour");

    return 0;
}
