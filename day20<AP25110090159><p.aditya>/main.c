#include <stdio.h>
#define MAX_PRODUCTS 20

int productIDs[MAX_PRODUCTS];
int quantities[MAX_PRODUCTS];
int prices[MAX_PRODUCTS];
int productCount = 0;

int rack[3][3];

void addProduct();
int findProductIndex(int id);
void searchProduct();
void updateQuantity();
void rackReport();
void calculateStockValues();
void displayProducts();
int inputPositiveInteger(const char *label);
void initializeRack();


int main() {
    int choice;
    initializeRack();
    do {
        printf("\n==== Warehouse Menu ====\n");
        printf("1. Add Product\n");
        printf("2. Search Product (By ID)\n");
        printf("3. Update Quantity\n");
        printf("4. Generate Rack Report\n");
        printf("5. Calculate Stock Value for Each Product\n");
        printf("6. Display All Products\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addProduct(); break;
            case 2: searchProduct(); break;
            case 3: updateQuantity(); break;
            case 4: rackReport(); break;
            case 5: calculateStockValues(); break;
            case 6: displayProducts(); break;
            case 0: printf("Exiting program.\n"); break;
            default: printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
    return 0;
}

void addProduct() {
    if (productCount == MAX_PRODUCTS) {
        printf("Warehouse full. Cannot add more products.\n");
        return;
    }
    int id, qty, price, idx;
    printf("Enter Product ID (number): ");
    scanf("%d", &id);

    idx = findProductIndex(id);
    if (idx != -1) {
        printf("Duplicate Product ID! Not allowed.\n");
        return;
    }

    printf("Enter Quantity (positive): ");
    scanf("%d", &qty);
    if (qty <= 0) {
        printf("Invalid quantity.\n");
        return;
    }

    printf("Enter Price per unit (positive): ");
    scanf("%d", &price);
    if (price <= 0) {
        printf("Invalid price.\n");
        return;
    }

    productIDs[productCount] = id;
    quantities[productCount] = qty;
    prices[productCount] = price;
    productCount++;
    printf("Product added successfully.\n");
}

int findProductIndex(int id) {
    for (int i = 0; i < productCount; ++i) {
        if (productIDs[i] == id)
            return i;
    }
    return -1;
}

void searchProduct() {
    int id;
    printf("Enter Product ID to search: ");
    scanf("%d", &id);

    int idx = findProductIndex(id);
    if (idx == -1) {
        printf("Not Found.\n");
    } else {
        printf("ID: %d, Quantity: %d, Price: %d\n", productIDs[idx], quantities[idx], prices[idx]);
    }
}

void updateQuantity() {
    int id, idx, ch, amt;
    printf("Enter Product ID to update: ");
    scanf("%d", &id);

    idx = findProductIndex(id);
    if (idx == -1) {
        printf("Not Found.\n");
        return;
    }
    printf("1. Increase Quantity\n2. Decrease Quantity\nEnter choice: ");
    scanf("%d", &ch);

    printf("Enter Amount: ");
    scanf("%d", &amt);

    if (ch == 1) {
        if (amt > 0) {
            quantities[idx] += amt;
            printf("Updated Quantity: %d\n", quantities[idx]);
        } else {
            printf("Invalid amount.\n");
        }
    } else if (ch == 2) {
        if (amt > 0 && quantities[idx] >= amt) {
            quantities[idx] -= amt;
            printf("Updated Quantity: %d\n", quantities[idx]);
        } else {
            printf("Cannot decrease. Invalid amount or insufficient quantity.\n");
        }
    } else {
        printf("Invalid choice.\n");
    }
}

void initializeRack() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            rack[i][j] = 0;
}

void rackReport() {
    int i, j, max = rack[0][0], min = rack[0][0], total = 0;
    int maxRow = 0, maxCol = 0, minRow = 0, minCol = 0;

    printf("Enter 3x3 rack matrix (item counts):\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            scanf("%d", &rack[i][j]);
            if (rack[i][j] > max) {
                max = rack[i][j];
                maxRow = i;
                maxCol = j;
            }
            if (rack[i][j] < min) {
                min = rack[i][j];
                minRow = i;
                minCol = j;
            }
            total += rack[i][j];
        }
    }

    printf("Rack Matrix:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("%d\t", rack[i][j]);
        }
        printf("\n");
    }
    printf("Maximum stock: %d at (%d,%d)\n", max, maxRow, maxCol);
    printf("Minimum stock: %d at (%d,%d)\n", min, minRow, minCol);
    printf("Total stock across racks: %d\n", total);
}

void calculateStockValues() {
    int maxValue = -1, minValue = -1, maxIdx = 0, minIdx = 0, totalValue = 0;
    int stockValue[MAX_PRODUCTS];
    if (productCount == 0) {
        printf("No products available.\n");
        return;
    }

    for (int i = 0; i < productCount; ++i) {
        stockValue[i] = quantities[i] * prices[i];
        totalValue += stockValue[i];
        if (i == 0 || stockValue[i] > maxValue) {
            maxValue = stockValue[i];
            maxIdx = i;
        }
        if (i == 0 || stockValue[i] < minValue) {
            minValue = stockValue[i];
            minIdx = i;
        }
    }

    printf("\nProduct ID\tStock Value\n");
    for (int i = 0; i < productCount; ++i) {
        printf("%d\t\t%d\n", productIDs[i], stockValue[i]);
    }
    printf("Product with highest stock value: ID %d, Value %d\n", productIDs[maxIdx], maxValue);
    printf("Product with lowest stock value: ID %d, Value %d\n", productIDs[minIdx], minValue);
    printf("Total warehouse value: %d\n", totalValue);
}

void displayProducts() {
    if (productCount == 0) {
        printf("No products to display.\n");
        return;
    }
    printf("\nID\tQuantity\tPrice\tStockValue\n");
    for (int i = 0; i < productCount; ++i) {
        int stockValue = quantities[i] * prices[i];
        printf("%d\t%d\t\t%d\t%d\n", productIDs[i], quantities[i], prices[i], stockValue);
    }
}
