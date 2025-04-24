printf("Enter temperature: ");
    scanf("%f", &temp);

    switch (choice) {
        case 1: celsiusToFahrenheit(temp); break;
        case 2: celsiusToKelvin(temp); break;
        case 3: fahrenheitToCelsius(temp); break;