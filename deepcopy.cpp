#include <iostream>
#include <cstring>

class Deep {
public:
    char* data;

    Deep(const char* str) {
        data = new char[strlen(str) + 1];  
        strcpy(data, str);
    }

    // Constructeur de copie profonde
    Deep(const Deep& other) {
        data = new char[strlen(other.data) + 1];  // Nouvelle allocation mémoire
        strcpy(data, other.data);
    }

    void show() {
        std::cout << "Data: " << data << std::endl;
    }

    ~Deep() {
        delete[] data;  // Chaque objet libère sa propre mémoire
    }
};

int main() {
    Deep obj1("Hello");
    Deep obj2 = obj1;  // Copie profonde

    obj1.show();
    obj2.show();

    return 0;
}
/*
obj2 pointe vers la même mémoire que obj1.
Quand obj1 ou obj2 est détruit, la mémoire est libérée.
Mais quand l'autre objet est détruit, il essaie de supprimer 
à nouveau la même mémoire, provoquant un double free error et un comportement indéfini.
*/

//Avantages de la Deep Copy
//obj2 possède sa propre copie indépendante de data.
//Pas de partage de mémoire, donc pas de problème de double libération de mémoire.