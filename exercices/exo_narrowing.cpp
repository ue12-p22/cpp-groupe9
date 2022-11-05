#include <iostream>
#include <limits>

// rappels des notions de cours abordées sur l'erreur de narrowing-conversion
// avec des exercices

int main () {

  //  COURS.1 portée des variables
  // une variable (locale) a une portée qui est le bloc où elle est définie
  // (avant sa définition elle n'existe pas, après son bloc elle n'existe plus)
  // un bloc est la séquence des instructions entre {}
  // (quand un bloc est réduit à une seule instruction, les {} peuvent être omis)

  int i = 42;  // attention vieille initialisation C
  // pos0
  {   
  // pos1
  int i;
  i = i + 1;
  // pos2
  }
  // pos3

  // EXERCICE.1.1
  // Que vaut i à pos0, pos1, pos2 et pos3 et pourquoi ? 

  // ----------

  // COURS.2 initialisation à-la c++11
  int val1 {34+12};
  // Dans les {} vous avez une expression ici 34+12
  // si le résultat de l'expression serait modifié pour être stocké dans une variable du type demandé (ici int)
  // une erreur narrowing conversion serait déclenchée

  // ATTENTION: en cas de narrowing conversion C++11 génère une error => votre programme ne compile pas 
  // il est possible de passer une option au compilateur pour lui dire de ne pas générer d'erreurs
  // du genre -Wno-narrowing afin qu'il compile
  // mais contentez-vous de commenter la ligne qui empêche la compilation pour passer aux questions suivantes

  // EXERCICE.2.1
  int val2 {34*1.};
  // Une erreur est-elle déclenchée ? si oui laquelle ? quel est le type de 1. ?
  // commentez-la ligne et continuer...

  // EXERCICE.2.2
  unsigned int val3 {-34};
  // Une erreur est-elle déclenchée ? si oui laquelle ? quel est le type de -34 ?
  // commentez-la ligne et continuer...

  // EXERCICE.2.3
  unsigned int max {std::numeric_limits<unsigned int>::max()};
  // là, après avoir inclus le fichier <limits> qui me permet d'accéder aux limites numériques des types C++
  // voir le début de http://cpp.bmarchand.fr/variableSection.html#autotoc_md20
  // je mets le plus grand unsigned int dans la variable max
  // Une erreur est-elle déclenchée ?

  // EXERCICE.2.4 (difficile)
  std::cout << max << " + 1 == " << max+1 << std::endl;
  // Pourquoi cette valeur est-elle affichée ?

  // ----------

  // COURS.3 affectation à-la c++11
  // pour déclencher l'erreur de narrowing-conversion lors des affectations
  // on doit faire ={} (et pas {} tout seul...)
  unsigned int val4 {0};
  val4 = {42};

  // EXERCICE.3.1
  val4 = -1;
  // Une erreur est-elle déclenchée ? Une conversion a-t-elle été faite ?

  // EXERCICE.3.2
  val4 = {-1};
  // Une erreur est-elle déclenchée ? 

  // EXERCICE.4.2 (difficile)
  unsigned int val5 {42};
  val5 = {val5-43};
  // Une erreur est-elle déclenchée ? Que se passe-t-il ? Quelle est la valeur de val5 ?

  // ----------

  return 0;
}
