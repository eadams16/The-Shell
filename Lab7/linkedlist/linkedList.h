/**
 * @file linkedList.h
 * The basic doubly linked list that will be used during the course
 * of the quarter.  This linked list is written in a very generic fashion
 * where the appropriate function pointer for the specific type is passed
 * to the functions.
 *
 * @note This file will never be changed
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief The node structure.
 *
 * The node structure for the doubly linked list
 *
 * @note I prefer named structures and then the typedef after the structure
 */
struct node
{
    void * data;
    struct node * next;
    struct node * prev;
};
typedef struct node Node;


/**
 * @brief The linked list structure.
 *
 * The linked list structure is an attempt to emulate what we know from
 * how we did things in java.
 *
 * @note I prefer named structures and then the typedef after the structure
 * @note In true C fashion the structures will not contain function prototypes
 * or function pointer prototypes.
 */
struct linkedlist
{
    Node * head;
    int size;
};
typedef struct linkedlist LinkedList;

/**
 * @brief The so called "constructor" for the linked list
 *
 * The linked list constructor builds a non circular linked list that
 * contains a dummy head node.  This is meant to be similar to a Java
 * linked list constructor.
 *
 * @return LinkedList * - The linked list pointer that contains a dummy head node but is not circular.
 */
LinkedList * linkedList();


/**
 * @brief The add last function for the linked list
 *
 * Appends the specified node to the end of this list
 *
 * @param theList - The specified linked list
 * @param nn - The node to be added
 *
 * @warning - The passed in LinkedList * theList is checked - exit(-99) if NULL
 * @warning - The passed in Node * nn is checked - exit(-99) if NULL
 */
void addLast(LinkedList * theList, Node * nn, void (*removeData)(void *), int fileCount);
void addLast2(LinkedList * theList, Node * nn);
void * inList(char * s, LinkedList * theList);

/**
 * @brief The add first function for the linked list
 *
 * Appends the specified node to the beginning of this list
 *
 * @param theList - The specified linked list
 * @param nn - The node to be added
 *
 * @warning - The passed in LinkedList * theList is checked - exit(-99) if NULL
 * @warning - The passed in Node * nn is checked - exit(-99) if NULL
 */
void addFirst(LinkedList * theList, Node * nn);


/**
 * @brief The remove first function for the linked list
 *
 * Removes the specified node to the beginning of this list
 *
 * @param theList - The specified linked list
 * @param *removeData - The function pointer for freeing the specific data type
 *
 * @warning - The passed in LinkedList * theList is checked - exit(-99) if NULL
 */
void removeFirst(LinkedList * theList, void (*removeData)(void *));
void removeItem2(LinkedList * theList, void * toRemove, void (*removeData)(void *), int (*compare)(const void *, const void *));


/**
 * @brief Empties the list and its contents
 *
 * Removes all of the elements from this list.  The list will be empty after the function completes
 *
 * @param theList - The specified linked list
 * @param *removeData - The function pointer for freeing the specific data type
 * @param *compare - The compare function to compare specific data type
 *
 * @warning - The passed in LinkedList * theList is checked - if NULL nothing happens
 */
void clearList(LinkedList * theList, void (*removeData)(void *));
char * executeLast(LinkedList * theList, void (*executeData)(void *, int aCount, int fileCount), char * (* convertData)(void *), int count, int fileCount);
char * executeIndex(LinkedList * theList, void (*executeData)(void *, int aCount, int fileCount), int index, char * (* convertData)(void *), int count, int fileCount);


/**
 * @brief Prints the contents of this linked list
 *
 * Prints the contents, if there are any of this linked list.  If the list is NULL
 * or empty, "Empty List" is printed.
 *
 * @param theList - The specified linked list
 * @param *convert - The function pointer for printing the specific data type
 *
 * @warning - The passed in LinkedList * theList is checked - if NULL "Empty List" is printed
 */
void printList(const LinkedList * theList, void (*convertData)(void *), int hCount);

#endif // LINKEDLIST_H