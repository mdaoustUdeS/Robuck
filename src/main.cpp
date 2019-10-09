/*
Projet: Le nom du script
Equipe: Votre numero d'equipe
Auteurs: Les membres auteurs du script
Description: Breve description du script
Date: Derniere date de modification
*/

/* ****************************************************************************
Inclure les librairies de functions que vous voulez utiliser
**************************************************************************** */

#include <Arduino.h>
#include <LibRobus.h> // Essentielle pour utiliser RobUS
#include <motor.h>

/* ****************************************************************************
Variables globales et defines
**************************************************************************** */
// -> defines...
// L'ensemble des fonctions y ont acces

/* ****************************************************************************
Vos propres fonctions sont creees ici
**************************************************************************** */
void maFonction()
{
  // code
}

void pathDemo1()
{
  const int timeout = 2000;
  motor_walk(10);
  delay(timeout);
  motor_turn(90);
  delay(timeout);
  motor_walk(-10);
  delay(timeout);
  motor_turn(-90);
  delay(timeout);
}

void path2m()
{
  motor_walk(200);
}

void pathPrep1()
{
  const int timeout = 3000;
  motor_walk(100 + 45 / 2);
  motor_turn(-90);
  motor_walk(90);
  motor_turn(90);
  motor_walk(65 + 45 / 2 + 19 / 2);
  motor_turn(45);
  motor_walk(172 - 19 / 2 + 45 / 2);
  motor_turn(-90);
  motor_walk(71 - 45 / 2 + 18 / 2);
  motor_turn(45);
  motor_walk(18 / 2 + 100);
  delay(timeout);
  motor_walk(45);
  delay(timeout);
  motor_turn(180);
  motor_walk(45);
  motor_walk(500);
  motor_turn(180);
}

/* ****************************************************************************
Fonctions d'initialisation (setup)
**************************************************************************** */
// -> Se fait appeler au debut du programme
// -> Se fait appeler seulement un fois
// -> Generalement on y initilise les varibbles globales

void setup()
{
  BoardInit();
  Serial.begin(9600);
  Serial.println("\n---BEGIN---");
}

/* ****************************************************************************
Fonctions de boucle infini (loop())
**************************************************************************** */
// -> Se fait appeler perpetuellement suite au "setup"

void loop()
{
  // SOFT_TIMER_Update(); // A decommenter pour utiliser des compteurs logiciels
  delay(500);
  motor_turn(4*360);
  //pathPrep1();
}
