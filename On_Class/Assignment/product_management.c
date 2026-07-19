/*
 * PRF192 - Programming Fundamental with C
 * Assignment: Product Management System (Binary File CRUD)
 *
 * Menu:
 *   1. Write Products   (overwrite the binary file)
 *   2. Append Products  (add records without overwriting)
 *   3. Read Products    (display all records in a table)
 *   4. Modify Product   (search by product_id and update)
 *   5. Exit
 *
 * Data file: products.bin
 */

#include <stdio.h>
#include <string.h>

#define FILENAME "products.bin"

/* Product structure */
typedef struct {
    int product_id;
    char product_name[50];
    float price;
    int quantity;
} Product;

/* Function prototypes */
void writeProducts();
void appendProducts();
void readProducts();
void modifyProduct();
void clearInputBuffer();
Product inputProduct(int index);

int main() {
    int choice;

    do {
        printf("-- Product Management System --\n");
        printf("1. Write Products\n");
        printf("2. Append Products\n");
        printf("3. Read Products\n");
        printf("4. Modify Product\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearInputBuffer();

        switch (choice) {
            case 1: writeProducts(); break;
            case 2: appendProducts(); break;
            case 3: readProducts(); break;
            case 4: modifyProduct(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice, please try again.\n");
        }
        printf("\n");

    } while (choice != 5);

    return 0;
}

/* Removes leftover characters (like '\n') from the input buffer.
   Needed because scanf leaves the newline behind, which would
   otherwise mess up the next fgets() call. */
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

/* Asks the user for one product's details and returns it */
Product inputProduct(int index) {
    Product p;

    printf("Enter details for product %d:\n", index);

    printf("Product ID: ");
    scanf("%d", &p.product_id);
    clearInputBuffer();

    printf("Product Name: ");
    fgets(p.product_name, sizeof(p.product_name), stdin);
    p.product_name[strcspn(p.product_name, "\n")] = '\0'; /* remove trailing \n */

    printf("Price: ");
    scanf("%f", &p.price);

    printf("Quantity: ");
    scanf("%d", &p.quantity);
    clearInputBuffer();

    return p;
}

/* 1. Write Products: overwrites the file with new data */
void writeProducts() {
    FILE *fp = fopen(FILENAME, "wb");
    if (fp == NULL) {
        printf("Error: could not open the file.\n");
        return;
    }

    int n;
    printf("Enter the number of products to write: ");
    scanf("%d", &n);
    clearInputBuffer();

    for (int i = 1; i <= n; i++) {
        Product p = inputProduct(i);
        fwrite(&p, sizeof(Product), 1, fp);
    }

    fclose(fp);
    printf("Products have been written to the file successfully.\n");
}

/* 2. Append Products: adds new records to the end of the file */
void appendProducts() {
    FILE *fp = fopen(FILENAME, "ab");
    if (fp == NULL) {
        printf("Error: could not open the file.\n");
        return;
    }

    int n;
    printf("Enter the number of products to append: ");
    scanf("%d", &n);
    clearInputBuffer();

    for (int i = 1; i <= n; i++) {
        Product p = inputProduct(i);
        fwrite(&p, sizeof(Product), 1, fp);
    }

    fclose(fp);
    printf("Products have been appended to the file successfully.\n");
}

/* 3. Read Products: prints every record in a table */
void readProducts() {
    FILE *fp = fopen(FILENAME, "rb");
    if (fp == NULL) {
        printf("No data found. The file does not exist yet.\n");
        return;
    }

    Product p;
    printf("Reading products from the file:\n");
    printf("-----------------------------------------------------\n");
    printf("%-15s %-20s %-8s %-8s\n", "Product ID", "Product Name", "Price", "Quantity");
    printf("-----------------------------------------------------\n");

    while (fread(&p, sizeof(Product), 1, fp) == 1) {
        printf("%-15d %-20s %-8.2f %-8d\n", p.product_id, p.product_name, p.price, p.quantity);
    }

    printf("-----------------------------------------------------\n");
    fclose(fp);
}

/* 4. Modify Product: finds a product by ID and updates it */
void modifyProduct() {
    FILE *fp = fopen(FILENAME, "rb+");
    if (fp == NULL) {
        printf("No data found. The file does not exist yet.\n");
        return;
    }

    int id, found = 0;
    printf("Enter the Product ID to modify: ");
    scanf("%d", &id);
    clearInputBuffer();

    Product p;
    while (fread(&p, sizeof(Product), 1, fp) == 1) {
        if (p.product_id == id) {
            found = 1;

            printf("Product found. Enter new details:\n");
            printf("New Product Name: ");
            fgets(p.product_name, sizeof(p.product_name), stdin);
            p.product_name[strcspn(p.product_name, "\n")] = '\0';

            printf("New Price: ");
            scanf("%f", &p.price);

            printf("New Quantity: ");
            scanf("%d", &p.quantity);
            clearInputBuffer();

            /* move the file pointer back to the start of this record and rewrite it */
            fseek(fp, -(long)sizeof(Product), SEEK_CUR);
            fwrite(&p, sizeof(Product), 1, fp);

            printf("Product updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Product with ID %d not found.\n", id);
    }

    fclose(fp);
}
