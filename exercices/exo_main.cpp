#include <iostream>

// rappels des notions de cours sur la fonction main
// avec des exercices

int main (int argc, char** argv) {

  //  COURS.1 les arguments de la ligne de commande
  // argc est le nombre des arguments sur la ligne de commande lors de l'appel de l'exécutable
  // en comptant le nom de l'exécutable

  const char* str = "Hello World !";
  // une chaîne de caractères à-la-C est de type `char*`
  // ici str est un tableau de caractère
  // et str contient l'adresse du premier caractère de "Hello World !"

  // argv est un tableau de chaînes de caractères à-la-C
  std::cout << "le nom de l'exécutable est " << argv[0] << std::endl;

  //  EXERCICE.1.1
  // lisez la section sur les boucle-for là http://cpp.bmarchand.fr/controlSection.html#autotoc_md56
  // faites une boucle for classique qui affiche tous les arguments de la ligne de commande
  // un par ligne avec leur indice dans argv

  return 0;
}
