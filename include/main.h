#ifndef _MAIN_H
#define _MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int, char**);

// Element de la liste
typedef struct Element_s {
    int value;
    struct Element_s *next;
} Element_t;

// Structure de contrôle
typedef struct List_s {
    Element_t *first;
} List_t;

List_t *initialize();
void insertAtFirst(List_t *list, int value);
void insertAtPosition(List_t *list, int value, int position);
void insertAtEnd(List_t *list, int value);
void deleteElement(List_t *list);
void deleteAtPosition(List_t *list, int position);
void deleteList(List_t *list);
void displayList(List_t *list);

#endif