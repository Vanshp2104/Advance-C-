#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct node
{
    int data;
    char name[];
    struct node *next;
};
void display(void)
{
	struct node*head;
    struct node *temp = head;
    printf("\nLinkedList: ");
    while(temp!=NULL)
    {
        printf("%d %s -> ",temp->data, temp->name);
        temp = temp->next;
    }
    printf("NULL\n\n");
}
  void insert(void)
{	int data;
	char name;
	struct node *head;    
    struct node *ptr;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    strcpy(temp->name,name);
    temp->next = NULL;
    
    if(head==NULL)
    {
        head = temp;    
    }
    else 
    {
        temp->next = head;
        head = temp;
    }    
    
    return head;
    
}
void write(void)
{
	char filename[];
	struct node* head;    
    struct node* temp = head;
    
    FILE* file;
    file = fopen (filename, "w");
    if (file == NULL)
    {
        fprintf(stderr, "\nCouldn't Open File'\n");
        exit (1);
    }
    
    // writing all the nodes of the linked list to the file
    while(temp!=NULL)
    {
        fwrite(temp, sizeof(struct node), 1, file);
        temp = temp->next;
    }
    
    if(fwrite != 0)
    {
        printf("Linked List stored in the file successfully\n");
    }
       else
    {
           printf("Error While Writing\n");
    }
    
    fclose(file);
    
}
struct node* readLinkedList(char filename[]){
    
    struct node* temp = (struct node *)malloc(sizeof(struct node));;
    struct node* head; // points to the first node of the linked list in the file
    struct node* last; // points to the last node of the linked list in the file
    last = head = NULL;
    
    FILE* file;
    file = fopen (filename, "r");
    if (file == NULL)
    {
        fprintf(stderr, "\nCouldn't Open File'\n");
        exit (1);
    }
    
    // reading nodes from the file
    // nodes are read in the same order as they were stored
    // we are using the data stored in the file to create a new linked list
    while(fread(temp, sizeof(struct node), 1, file))
    {
        
        if(head==NULL)
        {
            head = last = (struct node *)malloc(sizeof(struct node));
        }
        else
        {
            last->next = (struct node *)malloc(sizeof(struct node));
            last = last->next;
        }
        last->data = temp->data;
        strcpy(last->name, temp->name);
        last->next = NULL;
        
    }
    
    fclose(file);
    
    return head;
    
}
main() {
    struct node *head = NULL;
    head = insert(head, 1, "John");
    head = insert(head, 3, "George");
    head = insert(head, 6, "Ravil");
    
    void display();
    writeLinkedList("Hello.txt", head);
    
    printf("\nReading Linked List from the file!!\n");
    struct node* newHead = readLinkedList("Hello.txt");
    printf("\nPrint the New Linked List\n");
    display();
}
