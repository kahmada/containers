#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};// int specialization que ce vector contient int

    vec.push_back(60);  // Ajout d'un élément
    vec.pop_back();     // Suppression du dernier élément

    std::cout << "Vector elements: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
