#include <stdio.h>

void celsiusToFahrenheit(float c) {
    printf("Fahrenheit: %.2f\n", (c * 9 / 5) + 32);
}

void celsiusToKelvin(float c) {
    
    printf("Kelvin: %.2f\n", c + 273.15);
}

void fahrenheitToCelsius(float f) {
    printf("Celsius: %.2f\n", (f - 32) * 5 / 9);
}

void fahrenheitToKelvin(float f) {
    printf("Kelvin: %.2f\n", ((f - 32) * 5 / 9) + 273.15);
}

void kelvinToCelsius(float k) {
    printf("Celsius: %.2f\n", k - 273.15);
}

void kelvinToFahrenheit(float k) {
    printf("Fahrenheit: %.2f\n", ((k - 273.15) * 9 / 5) + 32);
}

int main() {
    int choice;
    float temp;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice)
printf("Enter temperature: ");
    scanf("%f", &temp);

    switch (choice) {
        case 1: celsiusToFahrenheit(temp); break;
        case 2: celsiusToKelvin(temp); break;
        case 3: fahrenheitToCelsius(temp); break;
    case 4: fahrenheitToKelvin(temp); break;
        case 5: kelvinToCelsius(temp); break;
        case 6: kelvinToFahrenheit(temp); break;
        default: printf("Invalid choice\n");
    }

    return 0;
}
