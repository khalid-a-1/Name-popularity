/*
* File: pp1.h
*
--------------
* This file exports functions for performing different tasks for baby names
*ranking files.
*/

#ifndef _pp1_h
#define _pp1_h

/*
* Function: part1
* Usage: part1();
*
----------------------------------------
*The user can search the rank of a specific name. The program
*prompts the user to enter the year, gender, followed by a name, and displays the
*ranking and count of the name for the year.
*/
void part1();

/*
* Function: part2()
* Usage: part2();
*
----------------------------------------
* Prompts the user to enter a year and program displays and save the names that are
*used for both genders in that year in commonname#year#.txt with a  format.
*/
void part2();

/*
* Function: part3()
* Usage: part3();
*
----------------------------------------
* Prompts the user to enter a letter and program displays the most popular three girl
* and boy names starting with a letter.
*/
void part3();

#endif
