#include <stdio.h>

int main() {
    char name[50], regNo[20], section[5];
    int n, i, j, choice;
    float salaries[10];
    float total = 0, average = 0, highest, lowest;
    int aboveAvg = 0, belowAvg = 0;
    float temp;

    printf("=============================================\n");
    printf("      Employee Salary Analysis System \n");
    printf("=============================================\n");

    // Collecting student details
    printf("\nEnter your details before starting:\n");
    printf("→ Student Name: ");
    scanf(" %[^\n]", name);
    printf("→ Registration Number: ");
    scanf(" %[^\n]", regNo);
    printf("→ Section: ");
    scanf(" %[^\n]", section);

    // Employee data
    printf("\nEnter the number of employees (max 10): ");
    scanf("%d", &n);

    if (n <= 0 || n > 10) {
        printf("\n Invalid number of employees! Program will exit.\n");
        return 0;
    }

    printf("\nEnter the salary of each employee:\n");
    for (i = 0; i < n; i++) {
        printf("  Employee %d Salary: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    // Menu-driven system
    do {
        printf("\n---------------------------------------------\n");
        printf("                 MAIN MENU\n");
        printf("---------------------------------------------\n");
        printf("1️ View All Salaries\n");
        printf("2️  Calculate Total and Average Salary\n");
        printf("3️  Find Highest and Lowest Salary\n");
        printf("4️  Count Employees Above/Below Average\n");
        printf("5️  Display Sorted Salaries (Ascending)\n");
        printf("6️  Exit Program\n");
        printf("---------------------------------------------\n");
        printf("Enter your choice (1–6): ");
        scanf("%d", &choice);

        // Compute total and average for most options
        total = 0;
        for (i = 0; i < n; i++)
            total += salaries[i];
        average = total / n;

        switch (choice) {
            case 1:
                printf("\n All Employee Salaries:\n");
                for (i = 0; i < n; i++)
                    printf("  Employee %d: ₹%.2f\n", i + 1, salaries[i]);
                break;

            case 2:
                printf("\nTotal Salary: ₹%.2f\n", total);
                printf("📊 Average Salary: ₹%.2f\n", average);
                break;

            case 3:
                highest = lowest = salaries[0];
                for (i = 1; i < n; i++) {
                    if (salaries[i] > highest)
                        highest = salaries[i];
                    if (salaries[i] < lowest)
                        lowest = salaries[i];
                }
                printf("\n Highest Salary: ₹%.2f\n", highest);
                printf(" Lowest Salary: ₹%.2f\n", lowest);
                break;

            case 4:
                aboveAvg = belowAvg = 0;
                for (i = 0; i < n; i++) {
                    if (salaries[i] > average)
                        aboveAvg++;
                    else if (salaries[i] < average)
                        belowAvg++;
                }
                printf("\n Employees Above Average: %d\n", aboveAvg);
                printf("Employees Below Average: %d\n", belowAvg);
                break;

            case 5:
                // Bubble Sort (ascending)
                for (i = 0; i < n - 1; i++) {
                    for (j = 0; j < n - i - 1; j++) {
                        if (salaries[j] > salaries[j + 1]) {
                            temp = salaries[j];
                            salaries[j] = salaries[j + 1];
                            salaries[j + 1] = temp;
                        }
                    }
                }
                printf("\n Salaries in Ascending Order:\n");
                for (i = 0; i < n; i++)
                    printf("  %.2f  ", salaries[i]);
                printf("\n");
                break;

            case 6:
                printf("\n Exiting the program. Thank you!\n");
                break;

            default:
                printf("\n Invalid choice! Please select a valid option (1–6).\n");
        }

        if (choice != 6) {
            printf("\n---------------------------------------------\n");
            printf("Submitted by: %s | Reg No: %s | Section: %s\n", name, regNo, section);
            printf("---------------------------------------------\n");
        }

    } while (choice != 6);

    printf("\n Program Completed Successfully!\n");
    printf(" Submitted by: %s | Reg No: %s | Section: %s\n", name, regNo, section);
    printf(" Challenge Day 17 – Code2Grow Program\n");

    return 0;
}
