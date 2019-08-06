#include "main.h"

List_t *initialize()
{
    List_t *list = malloc(sizeof(*list));
    Element_t *element = malloc(sizeof(*element));

    if (!list || !element)
        return NULL;
    element->value = 0;
    element->next = 0;
    list->first = element;
    return list;
}

void insertAtFirst(List_t *list, int value)
{
    Element_t *element = malloc(sizeof(*element));
    if (!element)
        exit(84);
    element->value = value;
    element->next = list->first;
    list->first = element;
}

void deleteElement(List_t *list)
{
    if (!list)
        exit(84);
    if (list->first)
    {
        Element_t *toDelete = list->first;
        list->first = list->first->next;
        free(toDelete);
    }
}

void displayList(List_t *list)
{
    Element_t *current = list->first;
    

    if (!list)
        exit(84);
    while (current != NULL)
    {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}

void insertAtPosition(List_t *list, int value, int position)
{
    Element_t *current = list->first;
    Element_t *element = malloc(sizeof(*element));
    int i = 0;

    element->value = value;
    if (position == 1)
    {
        element->next = current;
        list->first = element;
        return;
    }
    else if (position == 0)
    {
        return;
    }
    while (++i != position - 1)
    {
        if (!current->next)
            break;
        current = current->next;
    }
    element->next = current->next;
    current->next = element;
}

void insertAtEnd(List_t *list, int value)
{
    Element_t *current = list->first;
    Element_t *element = malloc(sizeof(*element));

    while (current->next)
    {
        current = current->next;
    }
    element->value = value;
    element->next = NULL;
    current->next = element;
}

void deleteAtPosition(List_t *list, int position)
{
    int i = 0;
    Element_t *current = list->first;

    if (!list)
        return;

    if (position == 1 || position == 0) {
        Element_t *tmp = list->first;
        list->first = current->next;
        free(tmp);
        return;
    }
    while (++i != position - 1)
    {
        if (!current->next)
            break;
        current = current->next;
    }
    if (current->next)
    {
        Element_t *tmp = current->next;
        current->next = current->next->next;
        free(tmp);
    }
}

void deleteList(List_t *list)
{
    Element_t *current = list->first;

    while (current != NULL)
    {
        Element_t *tmp = current->next;
        free(current);
        current = tmp;
    }
}