#include <stdio.h>

int gst(int total) {
    // Calculate GST as 18% of the total
    return total * 0.18;  // GST is 18%
}

int main() {
    int total, totalcost, finalBill;
    char name[50];
    int option, days;

    printf("*** Welcome to Taj Mahal Hotel ***\n");
    printf("Enter your name:\n");
    scanf("%s", name);  // No need for & for strings in scanf

    printf("Select the room you would like:\n");
    printf("1. Non-AC rooms: Rs.1000 per day\n");
    printf("2. AC rooms: Rs.1500 per day\n");
    printf("3. Top room with AC: Rs.2000 per day\n");

    printf("Enter the option number of the room you want:\n");
    scanf("%d", &option);

    printf("For how many days do you want to stay?\n");
    scanf("%d", &days);

    // Calculate the total based on the room option selected
    if (option == 1) {
        total = 1000 * days;
    } else if (option == 2) {
        total = 1500 * days;
    } else if (option == 3) {
        total = 2000 * days;
    } else {
        printf("Invalid option selected.\n");
        return 1;  // Exit the program if an invalid option is chosen
    }

    // Calculate GST
    totalcost = gst(total);

    // Calculate final bill (total + GST)
    finalBill = total + totalcost;

    // Display all details
    printf("\n*** Invoice ***\n");
    printf("Name: %s\n", name);
    printf("Room option: ");
    
    if (option == 1) {
        printf("Non-AC room\n");
    } else if (option == 2) {
        printf("AC room\n");
    } else {
        printf("Top room with AC\n");
    }

    printf("Total for %d days: Rs.%d\n", days, total);
    printf("GST (18%%): Rs.%d\n", totalcost);
    printf("Final bill: Rs.%d\n", finalBill);
    printf("thankyouu for booking a room %s",name);
    return 0;
}

