#ifndef VOITURE_H
#define VOITURE_H

#include <string>

class Voiture {
private:
    std::string marque;
    std::string modele;
    std::string carburant;
    int puissanceMoteur;

public:
    Voiture(std::string m, std::string mod, std::string carb, int puiss);

    std::string getMarque() const;
    std::string getModele() const;
    std::string getCarburant() const;
    int getPuissanceMoteur() const;

    void setMarque(std::string marque);
    void setModele(std::string modele);
    void setCarburant(std::string carburant);
    void setPuissanceMoteur(int puissance);

    void afficher() const;
};

#endif // VOITURE_H