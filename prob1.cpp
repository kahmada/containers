#include <iostream>
#include <sstream>
#include <unordered_map>
#include <cctype>
#include <algorithm>

std::string nettoyerMot(std::string mot)
{
    // Supprimer la ponctuation et convertir en minuscule
    mot.erase(std::remove_if(mot.begin(), mot.end(), ::ispunct), mot.end());
    std::transform(mot.begin(), mot.end(), mot.begin(), ::tolower);
    return mot;
}

void trouverMotLePlusFrequent(const std::string &texte)
{
    std::unordered_map<std::string, int> compteur;
    std::istringstream stream(texte);
    std::string mot, motMax;
    int maxFrequence = 0;

    while (stream >> mot) {
        mot = nettoyerMot(mot);
        if (!mot.empty()) {
            compteur[mot]++;
            if (compteur[mot] > maxFrequence) {
                maxFrequence = compteur[mot];
                motMax = mot;
            }
        }
    }
    if (!motMax.empty()) {
        std::cout << "Le mot le plus fréquent est \"" << motMax 
                  << "\" avec " << maxFrequence << " occurrences.\n";
    } else {
        std::cout << "Aucun mot trouvé dans le texte.\n";
    }
}

int main()
{
    std::string texte;
    std::cout << "Entrez un texte : ";
    std::getline(std::cin, texte);

    trouverMotLePlusFrequent(texte);
    return 0;
}
