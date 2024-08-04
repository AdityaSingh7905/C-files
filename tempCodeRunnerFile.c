#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define size 10 // SIZE OF TABLE
struct node
{
    char name[50];
    int occ;
    struct node *next;
};

struct node *table[size]; // hashing table

// making all pointers null
void init()
{
    int i;
    for (i = 0; i < size; i++)
        table[i] = NULL;
}

// removing newline character front input string
void correction(char *s)
{

    char i = 0;
    while (s[i] != '\0' && s[i] != '\n')
    {
        i++;
    }
    s[i] = '\0';
}

// hashfunction used to calculate hash values
int hashfunction(char *s)
{
    unsigned long long int f = 1;
    char i = 0;
    int sum = 0;
    while (s[i] != '\0')
    {
        sum = (sum + ((s[i]) * f) % size) % size;
        f *= 31;
        i++;
    }
    return sum;
}

// inserting node to the table
void insert(char *s)
{
    // create a newnode with value
    struct node *newNode = malloc(sizeof(struct node));
    strcpy(newNode->name, s);
    newNode->next = NULL;
    newNode->occ = 1;

    // calculate hash key
    int key = hashfunction(s);

    // adding to the table
    if (table[key] == NULL)
        table[key] = newNode;

    // collision
    else
    {
        // add the node at the end of chain[key].
        struct node *temp = table[key];
        while (temp->next != NULL)
        {
            if (!strcmp(temp->name, s))
            {
                temp->occ++;
                return;
            }
            temp = temp->next;
        }
        if (!strcmp(temp->name, s))
        {
            temp->occ++;
            return;
        }

        temp->next = newNode;
    }
}

// searching name entered in input
void search(char *s)
{
    int key = hashfunction(s);
    // printf("%d\n",key);
    if (table[key] == NULL)
    {
        return;
    }
    struct node *temp = table[key];

    while (temp != NULL)
    {
        if (strcmp(s, temp->name) == 0)
        {
            printf("%s occured = %d times in the list\n", temp->name, temp->occ);
            return;
        }
        (temp) = (temp)->next;
    }
    printf("not found!\n");
}
// prints the complete table
void print()
{
    int i;

    for (i = 0; i < size; i++)
    {
        struct node *temp = table[i];
        printf("table[%d]-->", i);
        while (temp)
        {
            printf("%s -->", temp->name);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}
int main()
{
    char filename[100];
    printf("enter file name \t");
    scanf("%s", filename);
    strcat(filename, ".txt");
    char str[50];                      // input string
    FILE *fptr = fopen(filename, "r"); // file opening
    // INPUT
    while (fgets(str, 50, fptr) != NULL)
    {
        correction(str);
        insert(str);
    }
    fclose(fptr); // file close

    print();
    char input[50];
    int n;
    while (1)
    {
        printf("enter 1 to search else -1\t");
        scanf("%d", &n);
        if (n == -1)
            break;
        printf("enter name -\t");
        scanf("%s", input);
        search(input);
        printf("\n");
    }

    return 0;
}