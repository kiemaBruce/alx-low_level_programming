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
## 5-free_listint2.c
- Frees a listint_t list and sets the head to NULL.
- Prototype: void free_listint2(listint_t **head);
## 6-pop_listint.c
- Deletes the head node of a listint_t linked list.
- Prototype: int pop_listint(listint_t **head);
- Returns the head node’s data (n) or 0 if the linked list is empty.
## 7-get_nodeint.c
- Returns the nth node of a listint_t linked list.
- Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int
		index);
- where index is the index of the node, starting at 0.
- If the node does not exist, it returns NULL.
## 8-sum_listint.c
- Returns the sum of all the data (n) of a listint_t linked list.
- Prototype: int sum_listint(listint_t *head);
- If the list is empty it returns zero.
## 9-insert_nodeint.c
- Inserts a new node at a given position.
- Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int
		idx, int n);
- where idx is the index of the list where the new node should be added. Index
  starts at 0
- Returns the address of the new node, or NULL if it failed.
- If it is not possible to add the new node at index idx, the new node is not
  added and it returns NULL.
