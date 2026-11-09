/*
 * This program reads a DHT11 sensor and outputs the data to the Serial port.
 * First Last - Month Year 
 */

 #include <DHT.h>

const int dhtPin = 2; 
const int dhtType = DHT11; // defines what kind of DHT sensor we have

DHT dht(dhtPin, dhtType); // create the DHT object


/**
 * @brief Converts Celsius to Fahrenheit
 * 
 * @param tempC The temperature in Celsius
 * @return float The equivalent temperature in Fahrenheit
 */
float celsiusToFahrenheit(float tempC) {
    float tempFahrenheit = 0.0;
    // TODO: Use conversion F = (C * 1.8) + 32
    return tempFahrenheit;
}

void setup() {
    // TODO: Explain me
    Serial.begin(9600);
    // TODO: Explain me
    dht.begin();

    // TODO: Explain me
    Serial.println("DHT11 sensor started");
}

void loop() {
    // declare variables
    float tempCelsius;
    float tempFahrenheit;
    float humidity;

    // TODO: Read temp from DHT sensor in Celsius and assign to tempCelsius
    
    // TODO: Convert Celsius to Fahrenheit and assign to tempFahrenheit
    
    // TODO: Read humidity from DHT sensor and assign to humidity

    // TODO: Display Celsius, Fahrenheit and humidity with correct labels
    // Temperature: xx.xC / xx.xF
    // Humidity: xx.x%

    // TODO: Wait 5 seconds before taking another measurement

}