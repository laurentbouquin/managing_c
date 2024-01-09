# FreelanceLink

## About Us

FreelanceLink connects businesses with top freelancers across diverse industries, offering a streamlined platform for efficient collaboration.

### Mission

Redefining work dynamics, FreelanceLink empowers freelancers and businesses by fostering a flexible, creative, and successful working environment.

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


