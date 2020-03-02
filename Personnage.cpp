#include <iostream>
using namespace std;
#include <string>

#include "Personnage.h"

Personnage::Personnage(string m_name) : m_degats(10), m_experience(1), m_name(), m_vie(50), m_niveau(1)
{
}

void Personnage::attaquerEnnemie(Monster& cible)
{
	
	cible.degatsPris(m_degats);
	
}

void Personnage::gagnerExperience(Monster& cible)
{
	m_experience = m_experience + cible.getExperience();
	cout << "Le joueur gagne " << m_experience << " experience" << endl;
}



