#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30};

    myList.push_front(5);   // Ajoute au début
    myList.push_back(40);   // Ajoute à la fin
    myList.pop_front();     // Supprime le premier élément

    std::cout << "List elements: ";
    for (int num : myList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
/*
✅ Liste doublement chaînée (chaque élément a un pointeur vers l'élément précédent et suivant).
✅ Insertion et suppression rapides aux extrémités (contrairement à std::vector où l'ajout au début est coûteux).
✅ Pas d'accès direct aux éléments via un index (contrairement à std::vector).
*/
/*
Liste initiale : 10 20 30
push_front(5) → 5 10 20 30
push_back(40) → 5 10 20 30 40
pop_front() → 10 20 30 40
Affichage final : 10 20 30 40
*/