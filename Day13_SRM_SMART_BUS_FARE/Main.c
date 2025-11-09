#include <stdio.h> 

int main() {
    int num_passengers, age, distance, travel_time;
    int BASE_PRICE_PER_KM = 10, MINIMUM_FARE = 10;
    char name[50];
    float base_fare, final_fare, total_revenue = 0.0;
    int total_passengers = 0;
    float highest_fare = 0.0;
    float lowest_fare = -1.0;

    printf("Enter number of passengers: ");
    scanf("%d", &num_passengers);
    
    for (int i = 0; i < num_passengers; i++) {
        printf("\nPassenger %d\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]s", name);  // allows spaces in names

        printf("Enter age: ");
        scanf("%d", &age);

        printf("Enter distance (in km): ");
        scanf("%d", &distance);

        printf("Enter travel time (24-hour format): ");
        scanf("%d", &travel_time);

        base_fare = distance * BASE_PRICE_PER_KM;
        final_fare = base_fare;

        if (age < 12) {
            final_fare *= 0.50;
            printf("Passenger: %s | Base Fare: ₹%.2f | Child Discount Applied | ", name, base_fare);
        } else if (age >= 60) {
            final_fare *= 0.70;
            printf("Passenger: %s | Base Fare: ₹%.2f | Senior Citizen Discount Applied | ", name, base_fare);
        } else {
            printf("Passenger: %s | Base Fare: ₹%.2f | ", name, base_fare);
        }

        if ((travel_time >= 8 && travel_time <= 10) || (travel_time >= 17 && travel_time <= 20)) {
            final_fare *= 1.20;
            printf("Peak Hour Surcharge Applied | ");
        }

        if (final_fare < MINIMUM_FARE) {
            final_fare = MINIMUM_FARE;
        }
        
        printf("Final Fare: ₹%.2f\n", final_fare);

        total_passengers++;
        total_revenue += final_fare;
        
        if (final_fare > highest_fare) {
            highest_fare = final_fare;
        }
        if (lowest_fare == -1.0 || final_fare < lowest_fare) {
            lowest_fare = final_fare;
        }
    }

    printf("\n--- Daily Summary ---\n");
    printf("Total Passengers: %d\n", total_passengers);
    printf("Total Revenue Collected: ₹%.2f\n", total_revenue);
    printf("Highest Fare: ₹%.2f\n", highest_fare);
    printf("Lowest Fare: ₹%.2f\n", lowest_fare);

    return 0;
}
