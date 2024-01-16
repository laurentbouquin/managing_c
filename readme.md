# FreelanceLink

## About Us

FreelanceLink connects businesses with top freelancers across diverse industries, offering a streamlined platform for efficient collaboration.

### Mission

Redefining work dynamics, FreelanceLink empowers freelancers and businesses by fostering a flexible, creative, and successful working environment and management system.

---

## Contact Management System Solution

### What it does?

The system should allow users to manage and organize contacts:

- Add users information.
- Delete users information.
- Modify users information.
- Search by category.

### Contact Data Structure

#### Contact

The `Contact` data structure represents an individual contact with the following information:

- **Name**: The first name of the contact.
- **Surname**: The last name or surname of the contact.
- **Age**: The age of the contact.
- **Country**: The country where the contact resides.

```c
typedef struct {
    char name[50];
    char surname[50];
    int age;
    char country[50];
} Contact;
```

---

## Frontend : Inventory Management System Solution

### What it does?

The frontend system should allow users to see inventory with all information that we get.

## Backend : File Management System Solution

### What it does?

The backend system should allow users to manage and organise inventory informations :
- listing file in a directory
- creating new file
- deleting file
- Modify file information
- searching file by category

### Inventory Data Structure

The `inventory` data structure represents an individual object with the following information:

- **Product ID** : The first name of the contact.
- **Name** : The last name or surname of the contact.
- **Quantity** : The age of the contact.
- **Price** : The country where the contact resides.

```c
typedef struct {
    int productID;
    char name[50];
    int quantity;
    int price;
} Inventory;
```
