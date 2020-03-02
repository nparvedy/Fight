#include <iostream>
#include <string>
#include "Monster.h"
#include "Personnage.h"

using namespace std;

int main()

{
    string combat;
    Personnage Toria("Toria");
    
    cout << "Vous voulez vous battre contre le monstre ? \"Oui\" ou \"Non\" " << endl;
    cin >> combat;
    while (combat == "oui") {
        bool enCombat = true;
        Monster Bob;
        while (enCombat) {
            Toria.attaquerEnnemie(Bob);
            if (Bob.vivant() == 0) {
                enCombat = false;
                Toria.gagnerExperience(Bob);
                cout << "Vous voulez faire un autre combat ? \"Oui\" ou \"Non\" " << endl;
                cin >> combat;
            }
        }
    }

    
	return 0;
}





