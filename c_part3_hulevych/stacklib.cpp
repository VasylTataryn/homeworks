#include <iostream>
#include <stdlib.h>
#include <stdio.h>

struct node {
    void* data;
    struct node* next;
};

typedef struct node* llist;

/* llist_create: Create a linked list */
llist* llist_create(void* data);


/* llist_push: Add to head of list */
void llist_push(llist* list, void* data);

/* llist_pop: remove and return head of linked list */
void* llist_pop(llist* list);


/* llist_print: print linked list */
void llist_print(llist* list, void (*print)(void* data));

llist* llist_create(void* new_data)
{
    struct node* new_node;

    llist* new_list = (llist*)malloc(sizeof(llist));
    *new_list = (struct node*)malloc(sizeof(struct node));

    new_node = *new_list;
    new_node->data = new_data;
    new_node->next = NULL;
    return new_list;
}

void llist_push(llist* list, void* data)
{
    struct node* head;
    struct node* new_node;
    if (list == NULL || *list == NULL) {
        fprintf(stderr, "llist_add_inorder: list is null\n");
    }

    head = *list;

    // Head is empty node
    if (head->data == NULL)
        head->data = data;

    // Head is not empty, add new node to front
    else {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = data;
        new_node->next = head;
        *list = new_node;
    }
}

void* llist_pop(llist* list)
{
    void* popped_data;
    struct node* head = *list;

    if (list == NULL || head->data == NULL)
        return NULL;

    popped_data = head->data;
    *list = head->next;

    free(head);

    return popped_data;
}

void llist_print(llist* list, void (*print)(void*))
{
    struct node* curr = *list;
    while (curr != NULL) {
        print(curr->data);
        printf(" ");
        curr = curr->next;
    }
    putchar('\n');
}


#define COUNT  sizeof numbers / sizeof (int)

void numprint(void*);

int main()
{
    int numbers[] = { 3, 8, 23, 1, 8, 45, 3, 11, 15, 12, 42, 9, 0, 53, 15 };
  
    llist* my_list = llist_create(NULL);
    unsigned int i;
    // Print out the empty list
    llist_print(my_list, numprint);
      // Add numbers to front
    for (i = 0; i < COUNT; i++)
        llist_push(my_list, &numbers[i]);

    // Print list once again
    llist_print(my_list, numprint);
   // Print list without last member
    llist_pop(my_list);
    llist_print(my_list, numprint);
   
}

void numprint(void* num)
{
     
    int* pnum = (int*)num;
    if (num == NULL)
        return;

    printf("%d", *pnum);
}