## 0-print_listint.c
- Prints all the elements of a listint_t list.
- Prototype: size_t print_listint(const listint_t *h);
- Returns the number of nodes.
## 1-listint_len.c
- Returns the number of elements in a linked listint_t list.
- Prototype: size_t listint_len(const listint_t *h);
## 2-add_nodeint.c
- Adds a new node at the beginning of a listint_t list.
- Prototype: listint_t *add_nodeint(listint_t **head, const int n);
- Returns the address of the new element, or NULL if it failed.
## 3-add_nodeint_end.c
- Adds a new node at the end of a listint_t list.
- Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
- Returns the address of the new element, or NULL if it failed.
## 4-free_listint.c
- Frees a listint_t list.
- Prototype: void free_listint(listint_t *head);
