# Day15_SRM_Student_Performance_Analyzer
**Student Name:** p.aditha  
**Roll No:** AP25110090159  
**Challenge:** Day 13 - SRM Student performance Analyzer

## Description
This program is used to analyze performance of multiple students in class.This program takes marks of 10 students and compute their total marks and average and identify the highest and lowest marks and 
the number of students passed and failed.And also identify and describe their grade.This program describes the class average and grade distribution.This program takes the  marks of each student (out of 100)
as input.And later describe the grade of each students,total class average and grade distribution.

---

## Build Commands
### Linux/macOS:
```bash
mkdir -p build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program
mkdir build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program.exe
build\program.exe

========= Student Performance Analyzer =========
Enter total number of students: 6
Enter marks for each student:
Student 1: 95
Student 2: 82
Student 3: 67
Student 4: 49
Student 5: 78
Student 6: 91
========= Result Summary =========
Average Marks: 77.00
Highest Marks: 95
Lowest Marks: 49
Total Passed Students: 5
Total Failed Students: 1
Grade Distribution:
A+ : 2
A : 1
B : 1
C : 1
D : 0
Fail: 1
==================================
