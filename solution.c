#include <stdio.h>
#include <string.h>

// Define the maximum number of contacts
#define MAX_CONTACTS 100

// Contact data structure
typedef struct
{
    char name[50];
    char surname[50];
    int age;
    char country[50];
} Contact;

// Function prototypes
void addContact(Contact contacts[], int *numContacts);
void deleteContact(Contact contacts[], int *numContacts);
void modifyContact(Contact contacts[], int numContacts);

int main()
{
    Contact contacts[MAX_CONTACTS];
    int numContacts = 0;
    int choice;

    do
    {
        // Display menu
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Delete Contact\n");
        printf("3. Modify Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Process user choice
        switch (choice)
        {
        case 1:
            addContact(contacts, &numContacts);
            break;
        case 2:
            deleteContact(contacts, &numContacts);
            break;
        case 3:
            modifyContact(contacts, numContacts);
            break;
        case 4:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 4);

    return 0;
}

// Function to add a new contact
void addContact(Contact contacts[], int *numContacts)
{
    if (*numContacts < MAX_CONTACTS)
    {
        printf("\nEnter contact details:\n");
        printf("Name: ");
        scanf("%s", contacts[*numContacts].name);
        printf("Surname: ");
        scanf("%s", contacts[*numContacts].surname);
        printf("Age: ");
        scanf("%d", &contacts[*numContacts].age);
        printf("Country: ");
        scanf("%s", contacts[*numContacts].country);

        (*numContacts)++;
        printf("Contact added successfully!\n");
    }
    else
    {
        printf("Contact limit reached. Unable to add more contacts.\n");
    }
}

// Function to delete a contact
void deleteContact(Contact contacts[], int *numContacts)
{
    if (*numContacts > 0)
    {
        char searchName[50];
        printf("\nEnter the name of the contact to delete: ");
        scanf("%s", searchName);

        int foundIndex = -1;

        // Search for the contact by name
        for (int i = 0; i < *numContacts; i++)
        {
            if (strcmp(contacts[i].name, searchName) == 0)
            {
                foundIndex = i;
                break;
            }
        }

        if (foundIndex != -1)
        {
            // Shift contacts to remove the found contact
            for (int i = foundIndex; i < *numContacts - 1; i++)
            {
                contacts[i] = contacts[i + 1];
            }

            (*numContacts)--;
            printf("Contact deleted successfully!\n");
        }
        else
        {
            printf("Contact not found.\n");
        }
    }
    else
    {
        printf("No contacts to delete.\n");
    }
}

// Function to modify a contact
void modifyContact(Contact contacts[], int numContacts)
{
    if (numContacts > 0)
    {
        char searchName[50];
        printf("\nEnter the name of the contact to modify: ");
        scanf("%s", searchName);

        int foundIndex = -1;

        // Search for the contact by name
        for (int i = 0; i < numContacts; i++)
        {
            if (strcmp(contacts[i].name, searchName) == 0)
            {
                foundIndex = i;
                break;
            }
        }

        if (foundIndex != -1)
        {
            // Modify contact details
            printf("Enter new details for the contact:\n");
            printf("Name: ");
            scanf("%s", contacts[foundIndex].name);
            printf("Surname: ");
            scanf("%s", contacts[foundIndex].surname);
            printf("Age: ");
            scanf("%d", &contacts[foundIndex].age);
            printf("Country: ");
            scanf("%s", contacts[foundIndex].country);

            printf("Contact modified successfully!\n");
        }
        else
        {
            printf("Contact not found.\n");
        }
    }
    else
    {
        printf("No contacts to modify.\n");
    }
}

void seeContact(Contact contacts[], int *numContacts)
{
    if (numContacts > 0)
    {
        char searchName[50];
        printf("\nEnter the name of the contact to see: ");
        scanf("%s", searchName);

        int foundIndex = -1;

        // Search for the contact by name
        for (int i = 0; i < numContacts; i++)
        {
            if (strcmp(contacts[i].name, searchName) == 0)
            {
                foundIndex = i;
                break;
            }
        }

        if (foundIndex != -1)
        {
            printf("Name: %s\n", contacts[foundIndex].name);
            printf("Surname: %s\n", contacts[foundIndex].surname);
            printf("Age: %d\n", contacts[foundIndex].age);
            printf("Country: %s\n", contacts[foundIndex].country);
        }
        else
        {
            printf("Contact not found.\n");
        }
    }
    else
    {
        printf("No contacts to modify.\n");
    }
}