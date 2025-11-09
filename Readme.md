# Day13_SRM_Smart_Bus_Fare_Aditya
**Student Name:** p.aditya  
**Roll No:** AP25110090159  
**Challenge:** Day 13 - SRM Smart Bus Fare Analyzer

## Description
This program calculates bus fares for multiple passengers based on distance, age, and time of travel.  
It applies discounts for children and senior citizens, adds a peak-hour surcharge, and summarizes the day's revenue.

---

## Build Commands
### Linux/macOS:
```bash
mkdir -p build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program
mkdir build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program.exe
build\program.exe
Enter number of passengers: 2

Passenger 1
Enter name: Aditya
Enter age: 20
Enter distance (in km): 10
Enter travel time (24-hour format): 9
Passenger: Aditya | Base Fare: ₹100.00 | Peak Hour Surcharge Applied | Final Fare: ₹120.00

Passenger 2
Enter name: Ravi
Enter age: 65
Enter distance (in km): 5
Enter travel time (24-hour format): 12
Passenger: Ravi | Base Fare: ₹50.00 | Senior Citizen Discount Applied | Final Fare: ₹35.00

--- Daily Summary ---
Total Passengers: 2
Total Revenue Collected: ₹155.00
Highest Fare: ₹120.00
Lowest Fare: ₹35.00
