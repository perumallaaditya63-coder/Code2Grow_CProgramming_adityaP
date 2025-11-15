# Day19_student_attendance_performance_matrix
*Student Name:* p.aditya  
*Roll No:* AP25110090159  
*Challenge:* Day 19- student attendance performance matrix

## Description
This project allows storing and analyzing attendance and marks of 5 students using matrices.

Features
Input names, attendance, and marks
Display attendance and marks in matrix form
Attendance Report (highest/lowest)
Performance Report (total & average marks)
Grade Report based on average.


---

## Build Commands
### Linux/macOS:
```bash
mkdir -p build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program

#sample output:

Input names of 5 students:
Name of student 1: aditya
Name of student 2: ravi
Name of student 3: pavan
Name of student 4: nayan
Name of student 5: pardeev

Record attendance (1=Present, 0=Absent):
Attendance for aditya:
  Subject 1: 1
  Subject 2: 1
  Subject 3: 1
  Subject 4: 1
  Subject 5: 1
Attendance for ravi:
  Subject 1: 0
  Subject 2: 1
  Subject 3: 1
  Subject 4: 1
  Subject 5: 1
Attendance for pavan:
  Subject 1: 1
  Subject 2: 1
  Subject 3: 0
  Subject 4: 0
  Subject 5: 1
Attendance for nayan:
  Subject 1: 1
  Subject 2: 1
  Subject 3: 1
  Subject 4: 1
  Subject 5: 0
Attendance for pardeev:
  Subject 1: 1
  Subject 2: 1
  Subject 3: 1
  Subject 4: 1
  Subject 5: 1

Record marks (0-100):
Marks for aditya:
  Subject 1: 96
  Subject 2: 97
  Subject 3: 98
  Subject 4: 93
  Subject 5: 94
Marks for ravi:
  Subject 1: 99
  Subject 2: 98
  Subject 3: 92
  Subject 4: 91
  Subject 5: 83
Marks for pavan:
  Subject 1: 88
  Subject 2: 89
  Subject 3: 88
  Subject 4: 90
  Subject 5: 78
Marks for nayan:
  Subject 1: 90
  Subject 2: 99
  Subject 3: 9
  Subject 4: 99
  Subject 5: 99
Marks for pardeev:
  Subject 1: 99
  Subject 2: 99
  Subject 3: 99
  Subject 4: 55
  Subject 5: 100

====== STUDENT DATA MENU ======
1. Show Attendance Table
2. Show Marks Table
3. Generate Attendance Summary
4. Generate Performance Summary
5. Show Grade Report
6. Exit
Select an option: 1

Attendance Matrix:
aditya         1 1 1 1 1
ravi           0 1 1 1 1
pavan          1 1 0 0 1
nayan          1 1 1 1 0
pardeev        1 1 1 1 1

====== STUDENT DATA MENU ======
1. Show Attendance Table
2. Show Marks Table
3. Generate Attendance Summary
4. Generate Performance Summary
5. Show Grade Report
6. Exit
Select an option: 2

Marks Matrix:
aditya         96 97 98 93 94
ravi           99 98 92 91 83
pavan          88 89 88 90 78
nayan          90 99 9 99 99
pardeev        99 99 99 55 100

====== STUDENT DATA MENU ======
1. Show Attendance Table
2. Show Marks Table
3. Generate Attendance Summary
4. Generate Performance Summary
5. Show Grade Report
6. Exit
Select an option: 3

Attendance Summary:
aditya          Present: 5, Absent: 0
ravi            Present: 4, Absent: 1
pavan           Present: 3, Absent: 2
nayan           Present: 4, Absent: 1
pardeev         Present: 5, Absent: 0
Top Attendance: aditya with 5 classes present
Lowest Attendance: pavan with 3 classes present

====== STUDENT DATA MENU ======
1. Show Attendance Table
2. Show Marks Table
3. Generate Attendance Summary
4. Generate Performance Summary
5. Show Grade Report
6. Exit
Select an option: 4

Performance Summary:
aditya          Total: 478, Average: 95.60
ravi            Total: 463, Average: 92.60
pavan           Total: 433, Average: 86.60
nayan           Total: 396, Average: 79.20
pardeev         Total: 452, Average: 90.40
Topper: aditya with 478 total marks
Lowest Performer: nayan with 396 total marks

====== STUDENT DATA MENU ======
1. Show Attendance Table
2. Show Marks Table
3. Generate Attendance Summary
4. Generate Performance Summary
5. Show Grade Report
6. Exit
Select an option: 5

Grade Report:
aditya          Average: 95.60, Grade: A+
ravi            Average: 92.60, Grade: A+
pavan           Average: 86.60, Grade: A
nayan           Average: 79.20, Grade: B
pardeev         Average: 90.40, Grade: A+

====== STUDENT DATA MENU ======
1. Show Attendance Table
2. Show Marks Table
3. Generate Attendance Summary
4. Generate Performance Summary
5. Show Grade Report
6. Exit
Select an option: 6
Program terminated. Have a nice day!
PS C:\User
