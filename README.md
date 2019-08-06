# singly-linked-list

Basic operations on singly linked lists such as 
```C
List_t *initialize();
void insertAtFirst(List_t *list, int value);
void insertAtPosition(List_t *list, int value, int position);
void insertAtEnd(List_t *list, int value);
void deleteElement(List_t *list); // First element
void deleteAtPosition(List_t *list, int position);
void deleteList(List_t *list);
void displayList(List_t *list);
```

Valgring free (No leak)

Epitech students be carefull, using my code can result of a -42 mark (:

Compile using ```make``` or with my docker-compile script for macOS users ```docker-compile ./ -m -v linked-list```