/* write a program to implement singly linked list with following operations
* Singly linked list
* Insert last
* Delete first
* View list
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node* next;
};

void insertlast(struct node** head, int data) {
    struct node* newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->item = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
    }
    else {
        struct node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deletefirst(struct node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
    }
    else {
        struct node* temp = *head;
        *head = temp->next;
        free(temp);
    }
}

void viewlist(struct node* head) {
    if (head == NULL) {
        printf("List is empty\n");
    }
    else {
        struct node* temp = head;
        printf("List is: ");
        while (temp != NULL) {
            printf("%d ", temp->item);
            temp = temp->next;
        }
        printf("\n");
    }
}

int menu() {
    int choice;
    printf("1. Insert last\n");
    printf("2. Delete first\n");
    printf("3. View list\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

int main() {
    struct node* head = NULL;
    int data;
    while (1) {
        system("clear");
        viewlist(head);
        switch (menu()) {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            insertlast(&head, data);
            break;
        case 2:
            deletefirst(&head);
            break;
        case 3:
            viewlist(head);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}