#include <iostream>
#include "Functions.h"


#define EXERCICE_01
//#define EXERCICE_02
//#define EXERCICE_03

using std::cout;
using std::cin;
using std::endl;

void main()
{
   setlocale(LC_ALL, "");

   //============================ EXERCICE #3 ========================================
#ifdef EXERCICE_03
   //Déclaration des constantes
   
   //Déclaration des variables locales
   int hauteur;
   int largeur;
   char remplissage;
   
   bool dimensionValide = false;

   while (!dimensionValide)
   {
      hauteur = demanderHauteur();
      largeur = demanderLargeur();
      remplissage = demanderRemplissage();
      if (largeur < 1 || hauteur < 1)
      {
         afficherErreur("Les dimensions du rectangle doient avoir des valeurs positives différentes de 0.");
         system("PAUSE > NUL");
         system("CLS");
      }
      else
         dimensionValide = true;
   }
   afficherRectangle(remplissage, hauteur, largeur);

#endif // Fin de Exercice #3
   


   //=============================== EXERCICE #2 ========================================
#ifdef EXERCICE_02
   //Déclaration des constantes

   //Déclaration des variables locales

   int jour;
   int mois;
   int annee;
   bool valideDate = false;

   while (!valideDate)
   {
      jour = demanderDate('j');
      mois = demanderDate('m');
      annee = demanderDate('a');
      valideDate = verifierDatePossible(jour, mois, annee);
      cout << (valideDate ? "Date valide":"Date invalide") << endl;
   }
#endif // Fin de Exercice #2



   //============================= EXERCICE #1 ==========================================
#ifdef EXERCICE_01
   //Déclaration des constantes
   const int NT_MAX = 100;


   //Déclaration des variables
   double noteTotaux = 0;
   int nbEtudiant;
   double noteEtudiant = 0;

   for (nbEtudiant = 0; noteEtudiant != -1; nbEtudiant++)
   {
      noteEtudiant = demanderResultat(NT_MAX, nbEtudiant);

      if (noteEtudiant != -1)
         noteTotaux += noteEtudiant;
      else
         nbEtudiant--;
   }
   cout << "La moyenne du groupe d'étudiants est de : " << calculerMoyenne(nbEtudiant, noteTotaux) << "/" << NT_MAX << endl;

#endif // Fin de Exercice #1

   cout << "Fin du programme...";
   system("PAUSE > NUL");
}