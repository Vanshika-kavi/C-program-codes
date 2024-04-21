#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NODE
{
    int id;
    char name[50];
    int pos,score;
    struct NODE *next;
};

typedef struct NODE *node;

node getnode();
node read_details();
void display_list(node head);
node insert_rear(node head);
node insert_front(node head);
node delete_rear(node head);
node delete_front(node head);
node search(node head);
node delete_node(node head, int id);
node search_by_name(node head);
node insert_pos(int pos,node head);

int main()
{
    node head = NULL;
    int choice,pos;
    for (;;)
    {
        printf("1-Insert Rear\n2-Display\n3-Insert Front\n4-Delete Rear\n5-Delete Front\n6-Search\n7-Insert pos\n8-Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter student ID: ");
            head = insert_rear(head);
            break;
        case 2:
            printf("Displaying List:\n");
            display_list(head);
            break;
        case 3:
            printf("Enter student ID: ");
            head = insert_front(head);
            break;
        case 4:
            printf("Deleting rear element\n");
            head = delete_rear(head);
            break;
        case 5:
            printf("Deleting front element\n");
            head = delete_front(head);
            break;
        case 6:
            printf("1-Search and Delete by ID\n2-Search by Name\n");
            printf("Enter your choice: ");
            int searchChoice;
            scanf("%d", &searchChoice);
            break;

        case 7:
             printf("Enter the position to be Inserted\n");
			        scanf("%d",&pos);
			        head=insert_pos(pos,head);
			        break;

        case 8:
            printf("Exiting program\n");
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
        }
    }

    return 0;
}

node getnode()
{
    node new;
    new = (node)malloc(sizeof(struct NODE));

    if (new == NULL)
    {
        printf("Memory allocation failed\n");
        exit(0);
    }

    new->next = NULL;
    return new;
}

node read_details()
{
    node temp;
    temp = getnode();
    scanf("%d", &(temp->id));
    printf("Enter the student name: ");
    scanf(" %[^\n]s", temp->name);
    printf("Enter the student score: ");
    scanf("%d", &(temp->score));
    return temp;
}

void display_list(node head)
{
    node cur;
    if (head == NULL)
    {
        printf("Empty List\n");
        return;
    }

    printf("Student List:\n");
    cur = head;

    while (cur != NULL)
    {
        printf("ID: %d, Name: %s, Score: %d\n", cur->id, cur->name, cur->score);
        cur = cur->next;
    }

    printf("\n");
}

node insert_rear(node head)
{
    node new, cur;
    new = read_details();
    new->next = NULL;

    if (head == NULL)
        return new;

    cur = head;

    while (cur->next != NULL)
    {
        cur = cur->next;
    }

    cur->next = new;
    return head;
}

node insert_front(node head)
{
    node new;
    new = read_details();
    new->next = head;
    return new;
}

node delete_rear(node head)
{
    node cur, prev;

    if (head == NULL)
    {
        printf("List empty\n");
        return head;
    }

    if (head->next == NULL)
    {
        printf("Deleted: ID: %d, Name: %s, Score: %d\n", head->id, head->name, head->score);
        free(head);
        return NULL;
    }

    prev = NULL;
    cur = head;

    while (cur->next != NULL)
    {
        prev = cur;
        cur = cur->next;
    }

    printf("Deleted: ID: %d, Name: %s, Score: %d\n", cur->id, cur->name, cur->score);
    free(cur);
    prev->next = NULL;
    return head;
}

node delete_front(node head)
{
    node cur;

    if (head == NULL)
    {
        printf("List empty\n");
        return head;
    }

    cur = head;
    head = head->next;
    printf("Deleted: ID: %d, Name: %s, Score: %d\n", cur->id, cur->name, cur->score);
    free(cur);
    return head;
}

node search(node head)
{
    int key;
    node cur, prev;

    if (head == NULL)
    {
        printf("List empty\n");
        return head;
    }

    scanf("%d", &key);

    cur = head;
    prev = NULL;

    while (cur != NULL)
    {
        if (cur->id == key)
        {
            printf("Element found: ID: %d, Name: %s, Score: %d\n", cur->id, cur->name, cur->score);
            head = delete_node(head, key); // Delete the node
            return head;
        }

        prev = cur;
        cur = cur->next;
    }

    printf("Element not found\n");
    return head;
}

node delete_node(node head, int id)
{
    node cur, prev;

    if (head == NULL)
    {
        printf("List empty\n");
        return head;
    }

    cur = head;
    prev = NULL;

    while (cur != NULL)
    {
        if (cur->id == id)
        {
            if (prev == NULL) // Node to be deleted is the first node
            {
                head = head->next;
                printf("Deleted: ID: %d, Name: %s, Score: %d\n", cur->id, cur->name, cur->score);
                free(cur);
                return head;
            }
            else // Node to be deleted is in the middle or end
            {
                prev->next = cur->next;
                printf("Deleted: ID: %d, Name: %s, Score: %d\n", cur->id, cur->name, cur->score);
                free(cur);
                return head;
            }
        }

        prev = cur;
        cur = cur->next;
    }

    printf("Element not found\n");
    return head;
}

node search_by_name(node head)
{
    char search_name[50];
    node cur;

    if (head == NULL)
    {
        printf("List empty\n");
        return head;
    }

    printf("Enter the name to search: ");
    scanf(" %[^\n]s", search_name);

    cur = head;

    while (cur != NULL)
    {
        if (strcmp(cur->name, search_name) == 0)
        {
            printf("Student found: ID: %d, Name: %s, Score: %d\n", cur->id, cur->name, cur->score);
            return head;
        }

        cur = cur->next;
    }

    printf("Student not found\n");
    return head;
}
node insert_pos(int pos, node head)
{

    node new,prev,cur;
    int count;
    new=read_details();
	new ->next = NULL;
	if(head==NULL &&pos==1)
	  return new;
    if(head==NULL)
    {

        printf("invalid position\n");
        return head;
    }
if(pos==1)
{

    new->next=head;
    return new;
}
count=1;
prev=NULL;
cur=head;
while(cur!=NULL && count!=pos)
{

    prev=cur;
    cur=cur->next;
    count++;
}
if(count==pos)
{

    prev->next=new;
    new->next=cur;
return head;
    }
    else
        printf("Invalid position\n");
    return head;
}



