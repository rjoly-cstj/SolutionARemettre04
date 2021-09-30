#include "Functions.h"
#include <iostream>
int demanderResultat(int noteMax, int numEtudiant)
{
   using namespace std;
   int note;
   cout << "Veuillez entrer la note numéro #" << numEtudiant + 1 << " (Entrer - 1 pour faire la moyenne) : ";
   cin >> note;
   if (note != -1 && (note < 0 || note > noteMax))
   {
      afficherErreur("La note entrée est invalide.");
      note = demanderResultat(noteMax, numEtudiant);
   }
      
   return note;


}

void afficherErreur(const char msgErr[50])
{
   using namespace std;
   cout << msgErr << endl;

}
