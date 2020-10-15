#include "linkedList.h"
#include "listUtils.h"
#include "../myAlias/myAlias.h"

LinkedList * linkedList()
{
    LinkedList * aList = (LinkedList *) calloc (1, sizeof(LinkedList));
    aList->head = (Node *) calloc(1, sizeof(Node));
    return aList;
}// end linkedList


void clearList(LinkedList * theList, void (*removeData)(void *))
{
    if (theList->head != NULL) {
        Node * cur = theList->head, * prev;
        while (cur != NULL) {
            prev = cur;
            cur = cur->next;
            if(prev->data != NULL){
                removeData(prev->data);
            }
            prev->next = NULL;
            prev->prev = NULL;
            free(prev);
            prev = NULL;
        }
        theList->size = 0;
        theList->head = NULL;
    }
}// end clearList

void printList(const LinkedList * theList, void (*convertData)(void *), int hCount)
{
    if(theList->head->next == NULL){
        printf("Empty List.\n");
    }else{
        int count = 1;
        Node * cur = theList->head->next;
        while(cur != NULL && count <= hCount){
            printf("%d ", count);
            convertData(cur->data);
            cur = cur->next;
            count++;
        }
    }
}// end printList

char * executeLast(LinkedList * theList, void (*executeData)(void *, int aCount, int fileCount), char * (* convertData)(void *), int count, int fileCount)
{
    if(theList->head->next == NULL){
        printf("No command to execute\n");
    }else{
        Node * cur = theList->head->next;
        while(cur->next != NULL){
            cur = cur->next;
        }
        executeData(cur->data, count, fileCount);
        return convertData(cur->data);
    }
}// end printList

char * executeIndex(LinkedList * theList, void (*executeData)(void *, int aCount, int fileCount), int index, char * (* convertData)(void *), int count, int fileCount){
    if(theList == NULL){
        exit(-99);
    }
    if (theList->size == 0) {
        printf("Empty List.\n");
    }else{
        int x = 1;
        Node * cur = theList->head->next;
        while (x < index) {
            cur = cur->next;
            x++;
        }
        executeData(cur->data, count, fileCount);
        return convertData(cur->data);
    }
}


void addLast(LinkedList * theList, Node * nn, void (*removeData)(void *), int fileCount)
{
    if(theList == NULL){
        exit(-99);
    }
    if(nn == NULL){
        exit(-99);
    }
    if(theList->size == 0){
        addFirst(theList, nn);
    }else{
        int count = 1;
        Node * cur = theList->head->next;
        while(cur->next != NULL){
            cur = cur->next;
            count++;
        }
        if(count >= fileCount){
            removeFirst(theList, removeData);
        }
        cur->next = nn;
        nn->prev = cur;
        theList->size = theList->size+1;
    }
}// end addLast

void addLast2(LinkedList * theList, Node * nn)
{
    if(theList == NULL){
        exit(-99);
    }
    if(nn == NULL){
        exit(-99);
    }
    if(theList->size == 0){
        addFirst(theList, nn);
    }else{
        Node * cur = theList->head->next;
        while(cur->next != NULL){
            cur = cur->next;
        }
        cur->next = nn;
        nn->prev = cur;
        theList->size = theList->size+1;
    }
}// end addLast

void * inList(char * s, LinkedList * theList){
    if(theList == NULL){
        exit(-99);
    }
    if (theList->size == 0) {
        return NULL;
    }else{
        Node * cur = theList->head->next;
        while (cur != NULL) {
            MyAlias * temp = (MyAlias *) cur->data;
            if(strcmp(temp->alias, s) == 0){
                return temp;
            }
            cur = cur->next;
        }
        return NULL;
    }
}

void addFirst(LinkedList * theList, Node * nn)
{
    if(theList == NULL){
        exit(-99);
    }
    if(nn == NULL){
        exit(-99);
    }
    nn->next = theList->head->next;
    theList->head->next = nn;
    nn->prev = theList->head;
    theList->size = theList->size+1;
}// end addFirst

void removeFirst(LinkedList * theList, void (*removeData)(void *))
{
    if(theList == NULL){
        exit(-99);
    }
    if(theList->head->next == NULL){
        printf("Empty List. Nothing to remove.\n");
    }else{
        Node * cur = theList->head->next;
        removeData(cur->data);
        theList->head->next = cur->next;
        cur->next = NULL;
        cur->prev = NULL;
        free(cur);
        cur = NULL;
        theList->size = theList->size-1;
    }
}// end removeFirst

void removeItem2(LinkedList * theList, void * toRemove, void (*removeData)(void *), int (*compare)(const void *, const void *))
{
    if(theList == NULL){
        exit(-99);
    }
    if (theList->size == 0) {
        printf("Empty List.\n");
    }else{
        Node * cur = theList->head->next;
        Node * prev = theList->head;
        Node * nn = buildNode_Type(toRemove);
        int found = 0;
        while (cur != NULL && found != 1) {
            if (compare(cur->data, nn->data) == 0) {
                removeData(cur->data);
                prev->next = cur->next;
                cur->next = NULL;
                cur->prev = NULL;
                theList->size = theList->size - 1;
                found = 1;
            } else {
                prev = cur;
                cur = cur->next;
            }
        }

        if(found == 1){
            free(cur);
            cur = NULL;
        }else{
            printf("Data not found.\n");
        }
        free(nn);
        nn = NULL;
    }
}// end removeItem