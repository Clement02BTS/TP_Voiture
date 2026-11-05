#include <iostream>
#include <string>

class Voiture
{
private:
    
    std::string marque;
    std::string modele;
    std::string carburant;
    int puissanceMoteur;

public:

    Voiture(std::string m, std::string mod, std::string carb, int puiss)
        : marque(m), modele(mod), carburant(carb), puissanceMoteur(puiss) {
    }

    std::string Marque() const { return marque; }
    std::string Modele() const { return modele; }
    std::string Carburant() const { return carburant; }
    int PuissanceMoteur() const { return puissanceMoteur; }

    void Marque(std::string m) { marque = marque; }
    void Modele(std::string mod) { modele = modele; }
    void Carburant(std::string carb) { carburant = carburant; }
    void PuissanceMoteur(int puiss) { puissanceMoteur = puissanceMoteur; }

    void afficher() const {
        std::cout << "Voiture : " << marque << " " << modele << "\n"
            << "Carburant : " << carburant << "\n"
            << "Puissance : " << puissanceMoteur << " ch\n" << std::endl;
    }
};

int main() {
    Voiture Voiture();

    std::cout << "--- Informations initiales ---" << std::endl;
    Voiture.afficher();

    return 0;
}