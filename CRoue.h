#ifndef ROUE_H
#define ROUE_H

#include <string>

class Roue
{
private:
    std::string position;
    int dimension_pouces;
    double pression_recommandee;
    double pression_actuelle;
    double usure_pourcentage;
    std::string marque;

public:
    Roue(std::string _marque, int _pouces, double _pression_bars, std::string _position, double _pression_actuelle = , double _usure = );

    void afficher_caracteristiques() const;
};

#endif // ROUE_H