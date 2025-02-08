/*
Containers : structures de données pour stocker des éléments.
Templates : code générique adaptable à plusieurs types.
Itérateurs : moyen d’accéder aux éléments des conteneurs.
Algorithmes : fonctions STL pour manipuler les conteneurs efficacement.
*/

D'accord ! Voici une problématique intéressante pour pratiquer la résolution de problèmes en C++ :

Problème : Le mot le plus fréquent
Écris un programme qui lit un texte (une chaîne de caractères) et détermine le mot qui apparaît le plus de fois. Ignore la casse (Hello et hello sont identiques) et la ponctuation.

Exemple d'entrée :
arduino
Copy
Edit
"C++ is great! C++ is powerful. I love coding in C++!"
Sortie attendue :
nginx
Copy
Edit
Le mot le plus fréquent est "c++" avec 3 occurrences.
Points à travailler :
Lecture d’une phrase (std::getline)
Manipulation de chaînes (std::string, tolower)
Utilisation de std::map pour compter les occurrences
Gestion de la ponctuation
🚀 Bonus : Fais en sorte que le programme puisse lire un fichier texte au lieu d’une simple ligne.

Tu veux un indice ou tu préfères essayer par toi-même ? 😃