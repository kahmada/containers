#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> multiMap;

    multiMap.insert({1, "Alice"});
    multiMap.insert({2, "Bob"});
    multiMap.insert({1, "Eve"});  // Même clé que Alice

    std::cout << "Multimap elements:\n";
    for (const auto& pair : multiMap) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}
