# Day14_SRM_Smart_Hotel_Room_booking_billing_system_Aditya
**Student Name:** p.aditya  
**Roll No:** AP25110090159  
**Challenge:** Day 14 - SRM Smart hotel room booking and billing analyzer 

## Description
This program used to design a smart hotel room booking and billing system.With this system we can manage multiple customers at a time.This system helps customer to select room type,stay duration and additional services
and final billing and including taxes(GST) and discounts.
It applies discount of10% uf billing exceeds Rs.100000/-(before GST).And we have to summarize the total rooms booked and total revenue and highest and lowest billings of the day.
---

## Build Commands
### Linux/macOS:
```bash
mkdir -p build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program
mkdir build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program.exe
build\program.exe

========= Smart Hotel Room Booking System =========
Enter total number of customers: 2
--- Customer 1 ---
Enter name: Arjun
Enter room type (1-Deluxe, 2-Super Deluxe, 3-Suite): 2
Enter number of days: 3
Breakfast (Y/N): Y
Wi-Fi (Y/N): N
Gym Access (Y/N): Y
Base Fare: ₹12000
Additional Services: ₹1500
Subtotal: ₹13500
Discount (10%): ₹1350
GST (12%): ₹1458
Final Bill: ₹13508
--- Customer 2 ---
Enter name: Sneha
Enter room type (1-Deluxe, 2-Super Deluxe, 3-Suite): 1
Enter number of days: 2
Breakfast (Y/N): N
Wi-Fi (Y/N): Y
Gym Access (Y/N): N
Base Fare: ₹5000
Additional Services: ₹200
Subtotal: ₹5200
Discount: ₹0
GST (12%): ₹624
Final Bill: ₹5824
========= Hotel Summary =========
Total Rooms Booked: 2
Total Revenue: ₹19332
Highest Bill: ₹13508
Lowest Bill: ₹5824
=================================
