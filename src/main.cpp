/* ****************************************************************************
Inclure les librairies de functions que vous voulez utiliser
**************************************************************************** */

#include <Arduino.h>
#include <LibRobus.h> // Essentielle pour utiliser RobUS
#include <sens.h>
#include <combat.h>
#include <SharpIR.h>


/* ****************************************************************************
Variables globales et defines
**************************************************************************** */

#define JEAN 31
#define GUY 43

const int g_robot_name = JEAN;

/* ****************************************************************************
Fonctions 
**************************************************************************** */

/* ****************************************************************************
Fonctions d'initialisation
**************************************************************************** */

void setup()
{

    BoardInit();
    sens_init();
    Serial.begin(9600);
    Serial.println("\n\n---RESET---\n");

    while (!ROBUS_IsBumper(REAR))
    {
        if(ROBUS_IsBumper(LEFT))
        {
            sens_getColor();    
        }
        //Wait for rear bumper press
    }
    //Go to War()
    switch (g_robot_name)
    {
    case JEAN:
        Serial.print("Jean POWER!!");
        combat_robot1(BLUE);
        break;

    case GUY:
        //delay(60000); --> for test
        combat_robot2(RED);
        while (!ROBUS_IsBumper(REAR))
        ; //Wait for rear bumper press
        combat_robot2(BLUE);
        while (!ROBUS_IsBumper(REAR))
        ; //Wait for rear bumper press
        combat_robot2(GREEN);
        while (!ROBUS_IsBumper(REAR))
        ; //Wait for rear bumper press
        combat_robot2(YELLOW);
        Serial.print("Guy Power!!");
        break;
        

    default:
        Serial.println("The should be a name to the robot. Please set g_robot_name");
        while (1)
            ; // halt!
        break;
    }
}

/* ****************************************************************************
Fonctions de boucle infini
**************************************************************************** */

void loop()
{
    // SOFT_TIMER_Update(); // A decommenter pour utiliser des compteurs logiciels
}
