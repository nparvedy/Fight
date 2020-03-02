#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>
#include "Monster.h"

class Personnage
{
private:
    std::string m_name;
    int m_vie;
    int m_degats;
    int m_experience;
    int m_niveau;

public:
    Personnage(std::string m_name);

    void attaquerEnnemie(Monster& cible);

    void gagnerExperience(Monster& cible);

};

#endif