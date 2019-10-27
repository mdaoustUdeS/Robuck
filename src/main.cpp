/* ****************************************************************************
Inclure les librairies de functions que vous voulez utiliser
**************************************************************************** */

#include <Arduino.h>
#include <LibRobus.h> // Essentielle pour utiliser RobUS
#include <sens.h>

/* ****************************************************************************
Variables globales et defines
**************************************************************************** */

/* ****************************************************************************
Fonctions
**************************************************************************** */

/* ****************************************************************************
Fonctions d'initialisation
**************************************************************************** */

void setup()
{
    BoardInit();
    sensInitColor();
    Serial.begin(9600);
    Serial.println("\n\n---RESET---\n");
}

/* ****************************************************************************
Fonctions de boucle infini
**************************************************************************** */

void loop()
{
    // SOFT_TIMER_Update(); // A decommenter pour utiliser des compteurs logiciels
}
