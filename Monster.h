#ifndef DEF_MONSTER
#define DEF_MONSTER

#include <iostream>
#include <string>

class Monster {

private:
    int m_vie;
    int m_experience;
    int m_vivant;

public:

    Monster();
    int getVie();
    int degatsPris(int degatsPersonnage);
    int vivant();
    int getExperience();

};

#endif