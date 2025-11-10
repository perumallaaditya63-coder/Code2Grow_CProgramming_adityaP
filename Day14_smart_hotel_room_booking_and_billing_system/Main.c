#include <stdio.h>

int main() {
    int total_customers;
    int rooms_booked = 0;
    int total_revenue = 0;
    int highest_bill = 0;
    int lowest_bill = 0;
   
     int DELUXE_RATE = 2500;
     int SUPER_DELUXE_RATE = 4000;
    int SUITE_RATE = 6000;
     int BREAKFAST_COST = 300;
     int WIFI_COST = 100;
     int GYM_COST = 200;

    printf("========= Smart Hotel Room Booking System =========\n");
    printf("Enter total number of customers: ");
    scanf("%d", &total_customers);

    int i;
    for (i = 1; i <= total_customers; i++) {
        char name[50];
        int room_type;
        int days;
        char breakfast, wifi, gym;
        int base_fare, additional_services;
        double subtotal, discount, gst, final_bill;
        
        printf("--- Customer %d ---\n", i);
        printf("Enter name: ");
        scanf(" %[^\n]", name);  // reads string with spaces
        
        printf("Enter room type (1-Deluxe, 2-Super Deluxe, 3-Suite): ");
        scanf("%d", &room_type);
        
        printf("Enter number of days: ");
        scanf("%d", &days);

        printf("Breakfast (Y/N): ");
        scanf(" %c", &breakfast);
        printf("Wi-Fi (Y/N): ");
        scanf(" %c", &wifi);
        printf("Gym Access (Y/N): ");
        scanf(" %c", &gym);

        // Calculate base fare
        if (room_type == 1) {
            base_fare = DELUXE_RATE * days;
        } else if (room_type == 2) {
            base_fare = SUPER_DELUXE_RATE * days;
        } else {
            base_fare = SUITE_RATE * days;
        }

        // Calculate additional services cost
        additional_services = 0;
        if (breakfast == 'Y' || breakfast == 'y') {
            additional_services += BREAKFAST_COST * days;
        }
        if (wifi == 'Y' || wifi == 'y') {
            additional_services += WIFI_COST * days;
        }
        if (gym == 'Y' || gym == 'y') {
            additional_services += GYM_COST * days;
        }

        subtotal = base_fare + additional_services;

        // Apply discount if applicable
        if (subtotal > 10000) {
            discount = subtotal * 0.10;
        } else {
            discount = 0;
        }

        double net = subtotal - discount;
        gst = net * 0.12;
        final_bill = net + gst;

        // Update summary
        rooms_booked++;
        total_revenue += (int)(final_bill + 0.5); // rounding
    
        if (i == 1) {
            highest_bill = (int)(final_bill + 0.5);
            lowest_bill = (int)(final_bill + 0.5);
        } else {
            if ((int)(final_bill + 0.5) > highest_bill) {
                highest_bill = (int)(final_bill + 0.5);
            }
            if ((int)(final_bill + 0.5) < lowest_bill) {
                lowest_bill = (int)(final_bill + 0.5);
            }
        }

        // Print individual bill
        printf("Base Fare: ₹%d\n", base_fare);
        printf("Additional Services: ₹%d\n", additional_services);
        printf("Subtotal: ₹%.0f\n", subtotal);
        printf("Discount (10%%): ₹%.0f\n", discount);
        printf("GST (12%%): ₹%.0f\n", gst);
        printf("Final Bill: ₹%.0f\n", final_bill);
    }

    // Print hotel summary
    printf("========= Hotel Summary =========\n");
    printf("Total Rooms Booked: %d\n", rooms_booked);
    printf("Total Revenue: ₹%d\n", total_revenue);
    printf("Highest Bill: ₹%d\n", highest_bill);
    printf("Lowest Bill: ₹%d\n", lowest_bill);
     return 0;
}
