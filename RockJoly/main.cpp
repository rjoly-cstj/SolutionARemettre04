#include <iostream>
#include "Functions.h"

using std::cout;
using std::cin;
using std::endl;

void main()
{
   setlocale(LC_ALL, "");

   //D�claration des constantes
   const int NT_MAX = 100;


   //D�claration des variables
   int note = 0;
   int nbEtudiant;
   int noteEtudiant = 0;
   for (nbEtudiant = 0; noteEtudiant != -1; nbEtudiant++)
   {
      noteEtudiant = demanderResultat(NT_MAX, nbEtudiant);
      if (noteEtudiant != -1)
         note += noteEtudiant;
   }
   cout << "Fin du programme...";
   system("PAUSE > NUL");
}