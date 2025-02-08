#include <iostream>
#include <memory>
struct CustomDeleter{
    void operator()(int *ptr){
        std::cout << "supression de l'entier " << *ptr << std::endl;
        delete ptr;
    }
};

int main()
{
    std::unique_ptr<int, CustomDeleter> ptr(new int(99), CustomDeleter());
}

/*
Oui, std::unique_ptr<int, CustomDeleter> ressemble aux containers, car : 
✅ Il utilise une syntaxe basée sur les templates.
✅ Il gère la mémoire automatiquement, comme std::vector.
✅ Il peut accepter un paramètre supplémentaire (CustomDeleter), comme certains containers utilisent des allocateurs.

💡 Mais la différence principale est que std::unique_ptr ne gère qu'un seul élément à la fois (contrairement à std::vector, qui stocke plusieurs éléments).
*/


//struct : Accès par défaut : public  Utilisation typique : données uniquement (pas de méthodes) . heritage par défaut : public

//class : Accès par défaut : private  Utilisation typique: Programmation orientée objet (OOP)  Données et méthodes . Encapsulation  heritage par défaut : private
// en C++:
//Utiliser struct si c’est juste un conteneur de données. -Utiliser class pour tout le reste.


/*
Les containers gèrent la mémoire automatiquement.
std::unique_ptr fait exactement la même chose mais pour un seul objet.
*/
