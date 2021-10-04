#pragma once

double demanderResultat(int noteMax, int numEtudiant);
void afficherErreur(const char msgErr[100]);
double calculerMoyenne(int nbEtudiants, double noteTotaux);

int demanderDate(const char jj_mm_aaaa);
bool verifierDatePossible(int jour, int mois, int annee);
int demanderHauteur();
int demanderLargeur();
char demanderRemplissage();
void afficherRectangle(char remplissage, int hauteur, int largeur);