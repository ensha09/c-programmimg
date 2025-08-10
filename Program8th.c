#include <stdio.h>

union SensorData
{
    int temperature;
    float humidity;
    char status[20];
};

int main()
{
    union SensorData data;
    int choice;
    printf("Select Sensor Type (1-Temperature, 2-Humidity, 3-Status): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter Temperature: ");
        scanf("%d", &data.temperature);
        printf("Temperature: %d°C\n", data.temperature);
    }
    else if (choice == 2)
    {
        printf("Enter Humidity: ");
        scanf("%f", &data.humidity);
        printf("Humidity: %.2f%%\n", data.humidity);
    }
    else if (choice == 3)
    {
        printf("Enter Status: ");
        scanf("%s", data.status);
        printf("Status: %s\n", data.status);
    }
    else
    {
        printf("Invalid choice!\n");
    }
    return 0;
}
