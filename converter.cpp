#include <iostream>
#include <cmath>

// Length
double meters_to_feet(double meters);
double feet_to_meters(double feet);

// Temperature
double faren_to_celsi(double faren);
double celsi_to_faren(double celsi);

// Fuel Economy
double find_mpg(double miles, double gallons);
double price_per_mile(double miles, double price);


int main() {
    int choice;

    do {
        std::cout << "\nConverter Menu:\n"
            << "0. Quit Program\n"
            << "1. Length\n"
            << "2. Temperature\n"
            << "3. Fuel Economy\n"
            << "Your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 0:
        // Exit Program
            std::cout << "Exiting program..." << std::endl;
            break;
        
        case 1:
        // Length Converter
            int lengthchoice;
            std::cout << "\nLength Converter:\n"
            << "0. Previous Menu\n"
            << "1. Meters to Feet\n"
            << "2. Feet to Meters\n"
            << "Your Choice: ";
            std::cin >> lengthchoice;

            if (lengthchoice == 1) {
                // Converting Meters to Feet
                int meters;
                std::cout << "Enter Length in Meters: ";
                std::cin >> meters;
                std::cout << meters_to_feet(meters) << " Feet\n";

            } else if (lengthchoice == 2) {
                // Converting Feet to Meters
                int feet;
                std::cout << "Enter Length in Feet: ";
                std::cin >> feet;
                std::cout << feet_to_meters(feet) << " Meters\n";
            }
            break;
        case 2:
        // Termperature Converter
            int tempchoice;
            std::cout << "\nTemperature Converter:\n"
            << "0. Previous Menu\n"
            << "1. Farenheit to Celsius\n"
            << "2. Celsius to Farenheit\n"
            << "Your Choice: ";
            std::cin >> tempchoice;

            if (tempchoice == 1) {
                // Farenheit to Celsius
                int faren;
                std::cout << "Enter Temp in F: ";
                std::cin >> faren;
                std::cout << faren_to_celsi(faren) << " C\n";

            } else if (tempchoice == 2) {
                // Celsius to Farenheit
                int celsi;
                std::cout << "Enter Temp in C: ";
                std::cin >> celsi;
                std::cout << celsi_to_faren(celsi) << " F\n";
            }
            break;
        case 3:
        // Fuel Economy
            float gallons;
            float miles;
            float price;
            int mpgchoice;
            std::cout << "\nFuel Economy:\n"
            << "0. Previous Menu\n"
            << "1. Miles per Gallon Efficiency\n"
            << "2. Price per 10 Miles\n"
            << "Your Choice: ";
            std::cin >> mpgchoice;
            if (mpgchoice == 1) {
                // Miles per Gallon
                std::cout << "\nEnter Miles Traveled: ";
                std::cin >> miles;
                std::cout << "\nEnter Gallons Used: ";
                std::cin >> gallons;
                std::cout << find_mpg(miles, gallons) << "mpg\n";
            } else if (mpgchoice == 2) {
                // Price per 10 Miles
                std::cout << "\nEnter Miles Traveled: ";
                std::cin >> miles;
                std::cout << "\nEnter Money Spent: $";
                std::cin >> price;
                std::cout << "$" << price_per_mile(miles, price) << " Per 10 miles\n";
            }
            break;


        default:
            std::cout << "Invalid choice. Try again." << std::endl;
        }
    } while (choice != 0);
}

double meters_to_feet(double meters) {
    double feet = meters * 3.281;
    return std::round(feet * 10.0) / 10.0;

}

double feet_to_meters(double feet) {
    double meters = feet / 3.281;
    return std::round(meters * 10.0) / 10.0;
}

double faren_to_celsi(double faren) {
    double celsius = (faren - 32) * (5.0 / 9.0);
    return std::round(celsius * 10.0) / 10.0;
}

double celsi_to_faren(double celsi) {
    double faren = (celsi * (9.0 / 5.0)) + 32;
    return std::round(faren * 10.0) / 10.0;
}

double find_mpg(double miles, double gallons) {
    double mpg = miles / gallons;
    return std::round(mpg * 10.0) / 10.0;
}

double price_per_mile(double miles, double price) {
    double ppm = (price / miles) * 10.0;
    return std::round(ppm * 10.0) / 10.0;
}