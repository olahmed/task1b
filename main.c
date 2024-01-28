/**
 ******************************************************************************
 * @file           : Application.c
 * @author         : ola ahmed
 * @brief          : Contains the functionality of my application
 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ******************* Global Variables Section Start ************** */

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Decleration Section Start ************* */

/* ********************** Global Decleration  Section End   ************ */

/* ********************** Sub-Program Declerations Section Start ******* */

/* ********************** Sub-Program Declerations Section End ******* */

/* ********************** Sub-Program Section Start ************* */
   int main()
{
  unsigned int seconds ;
  unsigned int minutes;
  unsigned int hours;
  printf("Enter the number of seconds: ");
  scanf("%i", &seconds);
  hours=seconds/3600;
  minutes=(seconds%3600)/60;
  unsigned int rest_of_seconds ;
  rest_of_seconds=seconds%60;
  printf("%d hours %d minutes %d seconds",hours ,minutes ,rest_of_seconds);
   return 0;
}
/* ********************** Sub-Program Section End ************* */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      28jan2024            first task b
*/
