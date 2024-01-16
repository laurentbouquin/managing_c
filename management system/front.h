#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "back.h" // Include header file

typedef struct Product
{
    char ID[50];
    char name[50];
    int quantity;
    float price;
} Product;


void seeInventory();
void addProduct();
void deleteProduct();

int main()
{
    int choice;
    do
    {
        // Display menu
        printf("\n===== Inventory Management System =====\n");
        printf("1. See inventory\n");
        printf("2. Add product to inventory\n");
        printf("3. Delete product from inventory\n");
        // printf("4. See Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Process user choice
        switch (choice)
        {
        case 1:
            seeInventory();
            break;
        case 2:
            addProduct();
            break;
        case 3:
            deleteProduct();
            break;
        // case 4:
        //     seeContact();
        //     break;
        case 4:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 5);

    return 0;
}

void seeInventory()
{
    read_file("inventory", -1);
}

void addProduct()
{
    Product p;
    printf("Enter product ID: ");
    scanf("%s", p.ID);
    printf("Enter product name: ");
    scanf("%s", p.name);
    printf("Enter product quantity: ");
    scanf("%d", &p.quantity);
    printf("Enter product price: ");
    scanf("%f", &p.price);
}

void deleteProduct()
{
    char ID[50];
    printf("Enter product ID: ");
    scanf("%s", ID);
    delete_file("inventory", ID);

}
