#include <iostream>
#include <string>

class Roue
{
private:
	std::string position;
	int dimension_pouces;
	double pression_recommandee;

	std::string position;
	double pression_actuelle;
	double usure_pourcentage;
	std::string marque;

public:
	Roue(std::string _marque, int _pouces, double _pression_bars, std::string _position, double _pression_actuelle =, double _usure =, double _usure_pourcentage =)
	{
		marque = _marque;
		dimension_pouces = _pouces;
		pression_recommandee = _pression_bars;
		position = _position;
		pression_actuelle = _pression_actuelle;
		usure_pourcentage = _usure_pourcentage;
	}

	void afficher_caratecristiques()
	{
		std::count << "Roue" << position << " -> Marque: " << marque
			<< " | Taille: " << dimention_pouces << " pouces"
			<< " | Pression conseillee: " << pression_recommande << " bars.\n";
	}
};