#include <iostream>
#include <cstring>

class Shallow {
public:
    char* data;

    Shallow(const char* str) {
        data = new char[strlen(str) + 1];  // Allocation dynamique
        strcpy(data, str);
    }

    // Copie superficielle (copie uniquement le pointeur)
    Shallow(const Shallow& other) {
        data = other.data;
    }

    void show() {
        std::cout << "Data: " << data << std::endl;
    }

    ~Shallow() {
        delete[] data;  // Problème potentiel ici
    }
};

int main() {
    Shallow obj1("Hello");
    Shallow obj2 = obj1;  // Copie superficielle

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

//Shallow Copy : Copie l'adresse mémoire (pointeur) Partage la même mémoire 	Double free error possible 	
//Rapide mais risqué

//Deep Copy : Copie la valeur de l'objet (données) Chaque objet possède sa propre mémoire 	
//Pas de problème de double libération de mémoire Plus sûr mais coûteux en mémoire