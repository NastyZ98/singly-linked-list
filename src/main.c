#include "main.h"


int main(__attribute__((unused)) int ac, __attribute__((unused)) char **av)
{
    List_t *list = initialize();

    insertAtFirst(list, 10);
    insertAtFirst(list, 20);
    insertAtEnd(list, 100);
    insertAtFirst(list, 30);
    displayList(list);
    deleteAtPosition(list, 3);
    displayList(list);
    deleteList(list);
    free(list);
    return (0);
}