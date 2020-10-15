//
// Created by eadams16 on 4/23/19.
//

#ifndef LAB7_MYCOMMAND_H
#define LAB7_MYCOMMAND_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "../linkedlist/linkedList.h"

/**
 * The named structure my_int that holds a single integer named value
*/
struct my_command
{
    char * data;
};


/**
 * My style is to name my structure and then typedef it to something more usable
 */
typedef struct my_command MyCommand;

/**
 * The buildInt method receives the input stream (in this case stdin)<br>
 * The method then:<br>
 * 1) Prompts the user to enter an integer<br>
 * 2) Reads that integer by using stream<br>
 * 3) Dynamically creates a 1 element structure using malloc/calloc<br>
 * 4) Stores the value previous entered inside the dynamically create<br>
 * 5) Returns the dynamically created structure<br>
 *
 * @warning Please ensure you leave the input buffer empty
 */
void * buildCommand(char * s);

/**
 * The printInt method completes the following:<br>
 * 1) Receives a void pointer which it casts to a MyInt *<br>
 * 2) Prints to the screen Int - and the value extracted from the cast MyInt *
 */
char * printCommand(void * ptr);
void printCommand2(void * ptr);
void executeCommand(void * ptr, int count, int fileCount);


/**
 * The cleanInt method completes the following:<br>
 * 1) Receives a void pointer which it casts to a MyInt *<br>
 * 2) Frees the cast MyInt *
 *
 * @warning All pointers need to be set to NULL after they are freed
 */
void cleanCommand(void * ptr);

#endif //LAB7_MYCOMMAND_H