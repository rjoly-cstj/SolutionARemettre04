#include "Functions.h"
#include <iostream>

double demanderResultat(int noteMax, int numEtudiant)
{
   using namespace std;
   int note;
   cout << "Veuillez entrer la note numéro #" << numEtudiant + 1 << " (Entrer -1 pour faire la moyenne) : ";
   cin >> note;
   if (note != -1 && (note < 0 || note > noteMax))
   {
      afficherErreur("La note entrée est invalide.");
      note = demanderResultat(noteMax, numEtudiant);
   }     
   return note;
}

void afficherErreur(const char msgErr[100])
{
   using namespace std;
   cout << msgErr << endl;
}

double calculerMoyenne(int nbEtudiants, double noteTotaux)
{
   return noteTotaux/nbEtudiants;
}

int demanderDate(const char jj_mm_aaaa)
{
#include <iostream>
   using namespace std;
   setlocale(LC_ALL, "");

   int date;

   switch (jj_mm_aaaa)
   {
   case 'j':
      cout << "Quelle est le jour de la date désiré : ";
      cin >> date;
      break;
   case 'm':
      cout << "Quelle est le mois de la date désiré : ";
      cin >> date;
      break;
   case 'a':
      cout << "Quelle est l'année de la date désiré : ";
      cin >> date;
      break;
   }
   return date;
}

bool verifierDatePossible(int jour, int mois, int annee)
{
   if (mois < 1 || mois > 12)
   {
      afficherErreur("Le mois entrer dois être compris entre 1 et 12");
      return false;
   }
   switch (mois)
   {
   case 1:
      if (jour < 0 || jour > 31)
      {
         afficherErreur("Le mois de janvier comprend au maximum 31 jours.. \n(le jour doit être entre 1 et 31 ce mois-là)");
         return false;
      }
      return true;
      break;
   case 2:
      if ((annee % 4 == 0 && annee % 100/* == true*/) || (annee % 4 == 0 && annee % 100 == 0 && annee % 400 == 0))
      {

         if (jour < 0 || jour > 29)
         {
            afficherErreur("Cette année, le mois de février comprend 29 jours.. \n(le jour doit être entre 1 et 29 cette année)");
            return false;
         }
         return true;
      }
      else if (jour < 0 || jour > 28)
      {
         afficherErreur("Cette année, le mois de février comprend 28 jours.. \n(le jour doit être entre 1 et 28 cette année)");
         return false;
      }
      return true;
   case 3:
      if (jour < 0 || jour > 31)
      {
         afficherErreur("Le mois de mars comprend au maximum 31 jours.. \n(le jour doit être entre 1 et 31 ce mois-là)");
         return false;
      }
      return true;
      break;
   case 4:
      if (jour < 0 || jour > 30)
      {
         afficherErreur("Le mois de avril comprend au maximum 30 jours.. \n(le jour doit être entre 1 et 30 ce mois-là)");
         return false;
      }
      return true;
      break;
   case 5:
      if (jour < 0 || jour > 31)
      {
         afficherErreur("Le mois de mai comprend au maximum 31 jours.. \n(le jour doit être entre 1 et 31 ce mois-là)");
         return false;
      }
      return true;
      break;
   case 6:
      if (jour < 0 || jour > 30)
      {
         afficherErreur("Le mois de juin comprend au maximum 30 jours.. \n(le jour doit être entre 1 et 30 ce mois-là)");
         return false;
      }
      return true;
      break;
   case 7:
      if (jour < 0 || jour > 31)
      {
         afficherErreur("Le mois de juillet comprend au maximum 31 jours.. \n(le jour doit être entre 1 et 31 ce mois-là)");
         return false;
      }
      return true;
      break;
   case 8:
      if (jour < 0 || jour > 31)
      {
         afficherErreur("Le mois de août comprend au maximum 31 jours.. \n(le jour doit être entre 1 et 31 ce mois-là)");
         return false;
      }
      return true;
      break;
   case 9:
      if (jour < 0 || jour > 30)
      {
         afficherErreur("Le mois de septembre comprend au maximum 30 jours.. \n(le jour doit être entre 1 et 30 ce mois-là)");
         return false;
      }
      return true;
      break;
   case 10:
      if (jour < 0 || jour > 31)
      {
         afficherErreur("Le mois de octobre comprend au maximum 31 jours.. \n(le jour doit être entre 1 et 31) ce mois-là");
         return false;
      }
      return true;
      break;
   case 11:
      if (jour < 0 || jour > 30)
      {
         afficherErreur("Le mois de novembre comprend au maximum 30 jours.. \n(le jour doit être entre 1 et 30 ce mois-là)");
         return false;
      }
      return true;
      break;
   case 12:
      if (jour < 0 || jour > 31)
      {
         afficherErreur("Le mois de décembre comprend au maximum 31 jours.. \n(le jour doit être entre 1 et 31 ce mois-là)");
         return false;
      }
      return true;
      break;
   }
}

int demanderHauteur()
{
#include <iostream>
   using namespace std;

   int hauteur;
   cout << "Veuillez entrer une hauteur : ";
   cin >> hauteur;
   return hauteur;
}

int demanderLargeur()
{
#include <iostream>
   using namespace std;

   int largeur;
   cout << "Veuillez entrer une largeur : ";
   cin >> largeur;
   return largeur;
}

char demanderRemplissage()
{
#include <iostream>
   using namespace std;
   char remplissage;
   cout << "Veuillez maintenant indiquer si vous voulez que votre rectangle soit plein (O = oui / N = non) : ";
   cin >> remplissage;
   switch (remplissage)
   {
   case 'o':
   case 'O':
      cout << "Veuillez indiquer votre caractère de remplissage : ";
      cin >> remplissage;
      return remplissage;
      break;
   case 'n':
   case 'N':
      return ' ';
      break;
   }
}

void afficherRectangle(char remplissage, int hauteur, int largeur)
{
#include <iostream>
   using namespace std;
   setlocale(LC_ALL, "");

   for (int h = 0; h < hauteur; h++)
   {
      for (int l = 0; l < largeur; l++)
      {
         if (h == 0 || h == hauteur - 1 || l == 0 || l == largeur - 1)
            cout << "#";
         else
            cout << remplissage;
      }
      cout << endl;
   }
}


