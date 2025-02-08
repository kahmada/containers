#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap;
//une clé de type int
//à une valeur de type std::string.
    myMap[1] = "Alice";
    myMap[2] = "Bob";
    myMap[3] = "Charlie";

    std::cout << "Map elements:\n";
    for (const auto& pair : myMap) {//pair est un objet de type std::pair<int, std::string> pair est une référence constante (const auto&), ce qui évite une copie inutile.
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
        //pair.first récupère la clé.
        //pair.second récupère la valeur associée.
    }

    return 0;
}

//Sortie de std::map :

/*yaml
Copy
Edit
Map elements:
Key: 1, Value: Eve
Key: 2, Value: Bob
❌ "Alice" a été écrasé par "Eve" car une clé ne peut contenir qu'une seule valeur dans std::map.*/
//par contre dans l exemple de multimap.cpp on peut avoir plusieurs valeurs pour une clé donnée
