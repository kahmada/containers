

#include <iostream>
#include <vector>
#include <iterator>

// int main()
// {
//     std::vector<int> my_vec;
//     my_vec.emplace_back(1);
//     my_vec.emplace_back(2);
//     my_vec.emplace_back(3);

//     std::vector<int>::iterator it; // Korrektur: Kein Leerzeichen vor "::"
//     it = my_vec.begin() + 1;       // Zeigt auf das zweite Element (Index 1)

//     std::cout << *it << std::endl; // Gibt "2" aus
// }

// int main()
// {
//     std::vector<int> my_vec;
//     my_vec.push_back(1);
//     my_vec.push_back(2);
//     my_vec.push_back(3);

//     std::vector<int>::iterator it;
//     it = my_vec.begin() + 1;

//     std::cout << *it << std::endl; 
// }


int main()
{
    std::vector<int> my_vec;
    my_vec.push_back(1);
    my_vec.push_back(2);
    my_vec.push_back(3);

    my_vec.back() += 1; // Increment the last element by 1

    std::cout << "Last element: " << my_vec.back() << std::endl; // Should print 4
}

//Könntest du mir bitte den Text geben, den ich korrigieren soll? 
//compile mit c++ -std=c++11 vec.cpp