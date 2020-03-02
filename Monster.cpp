#include <iostream>
#include "Monster.h"
//#include "Personnage.h"
#include <string>

using namespace std;

Monster::Monster() : m_vie(10), m_experience(5), m_vivant(1)
{

}

int Monster::getVie()
{
	return m_vie;
}

int Monster::vivant() {
	return m_vivant;
}

int Monster::getExperience() {
	return m_experience;
}

int Monster::degatsPris(int degatsPersonnage) {
	if (m_vie == 0) {
		
		std::cout << "Le monstre est mort" << endl;
		return m_vivant = 0;
	}
	std::cout << "Le monstre se fait attaquer" << std::endl;
	 return m_vie = m_vie - degatsPersonnage;
}
