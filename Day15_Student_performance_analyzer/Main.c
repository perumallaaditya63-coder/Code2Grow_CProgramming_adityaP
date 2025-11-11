#include <stdio.h>

int main() {
    int n, i;
    int marks[10];
    int countAplus = 0, countA = 0, countB = 0, countC = 0, countD = 0, countFail = 0;
    int totalPassed = 0, totalFailed = 0;
    int highest, lowest;
    float sum = 0.0, avg;

    printf("========= Student Performance Analyzer =========\n");
    printf("Enter total number of students: ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Invalid number of students. Please enter up to 10.\n");
        return 0;
    }

    printf("Enter marks for each student:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
            return 0;
        }
    }

    highest = lowest = marks[0];

    for (i = 0; i < n; i++) {
        sum += marks[i];

        if (marks[i] > highest)
            highest = marks[i];
        if (marks[i] < lowest)
            lowest = marks[i];

        if (marks[i] >= 90) {
            countAplus++;
            totalPassed++;
        } else if (marks[i] >= 80) {
            countA++;
            totalPassed++;
        } else if (marks[i] >= 70) {
            countB++;
            totalPassed++;
        } else if (marks[i] >= 60) {
            countC++;
            totalPassed++;
        } else if (marks[i] >= 50) {
            countD++;
            totalPassed++;
        } else {
            countFail++;
            totalFailed++;
        }
    }

    avg = sum / n;

    printf("========= Result Summary =========\n");
    printf("Average Marks: %.2f\n", avg);
    printf("Highest Marks: %d\n", highest);
    printf("Lowest Marks: %d\n", lowest);
    printf("Total Passed Students: %d\n", totalPassed);
    printf("Total Failed Students: %d\n", totalFailed);

    printf("Grade Distribution:\n");
    printf("A+ : %d\n", countAplus);
    printf("A  : %d\n", countA);
    printf("B  : %d\n", countB);
    printf("C  : %d\n", countC);
    printf("D  : %d\n", countD);
    printf("Fail: %d\n", countFail);
    printf("==================================\n");

    return 0;
}
