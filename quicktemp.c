#include <stdio.h>
int main() {
    float temperature;
    int choice;
    float result;
    
    // Menu
    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        // Convert Celsius to Fahrenheit
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        result = (temperature * 9.0 / 5.0) + 32.0;
        printf("%.2f Celsius = %.2f Fahrenheit\n", temperature, result);
    }

    else if (choice == 2) {
        // Convert Fahrenheit to Celsius
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        result = (temperature - 32.0) * 5.0 / 9.0;
        printf("%.2f Fahrenheit = %.2f Celsius\n", temperature, result);
    }

    else if (choice == 3) {
        // Convert Celsius to Kelvin
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        result = temperature + 273.15;
        printf("%.2f Celsius = %.2f Kelvin\n", temperature, result);
    }

    else if (choice == 4) {
        // Convert Kelvin to Celsius
        printf("Enter temperature in Kelvin: ");
        scanf("%f", &temperature);
        result = temperature - 273.15;
        printf("%.2f Kelvin = %.2f Celsius\n", temperature, result);
    }

    else if (choice == 5) {
        // Convert Fahrenheit to Kelvin
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        result = (temperature - 32.0) * 5.0 / 9.0 + 273.15;
        printf("%.2f Fahrenheit = %.2f Kelvin\n", temperature, result);
    }

    else if (choice == 6) {
        // Convert Kelvin to Fahrenheit
        printf("Enter temperature in Kelvin: ");
        scanf("%f", &temperature);
        result = (temperature - 273.15) * 9.0 / 5.0 + 32.0;
        printf("%.2f Kelvin = %.2f Fahrenheit\n", temperature, result);
    }

    else {
        printf("Invalid choice! Please enter 1-6.\n");
    }
    
    return 0;
}