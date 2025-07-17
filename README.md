# Experiment 4


## Potentiometer and how it functions
A potentiometer is a three-terminal resistor with a sliding or rotating contact (wiper) that allows for manual adjustment of resistance and voltage division within a circuit. Potentiometers act as voltage dividers, meaning they can be used to adjust the output voltage of a circuit or to measure voltage levels. 

1. Basic Principle: Variable Resistance
A potentiometer has three terminals: two fixed ends (Terminals 1 and 3) and a movable wiper (Terminal 2).
The resistive track (made of carbon, cermet, or wire) provides a fixed total resistance between Terminals 1 and 3.
The wiper slides along this track, splitting the resistance into two parts:
R₁ (between Terminal 1 and the wiper).
R₂ (between the wiper and Terminal 3).

2. Voltage Divider Action
When a voltage (Vin) is applied across Terminals 1 and 3:
The wiper "taps" a fraction of Vin based on its position.
If the wiper is at Terminal 1: Vout = 0V.
If the wiper is at Terminal 3: Vout = Vin.
Midway: Vout = Vin/2 (for linear pots).
Example:
A 10kΩ potentiometer with Vin = 5V:
Wiper at 25% → Vout = 1.25V.
Wiper at 75% → Vout = 3.75V.

3. Current Control (Rheostat Mode)
By connecting only two terminals (wiper + one fixed end), the pot acts as a variable resistor (rheostat).
Turning the knob changes the resistance in the circuit, adjusting current flow.



## Project description
The code is structured into two primary functions: setup() and loop().

setup(): This function initializes the serial communication and sets the LED pin as an output.
loop(): This function continuously reads the potentiometer value, maps it to the appropriate brightness level, and writes that value to the LED. It also prints the brightness level to the serial monitor for debugging purposes.

### Steps followed
1. pin 12 connected to the potentiometer
2. Pin 5 connected to the LED
3. Initialized serial communication at 9600 baud rate
4. Set the LED pin as an output
5. Read the analog value from the potentiometer (0-4095)
6. Mapped the potentiometer value to LED brightness (0-255)
7. Set the LED brightness
8. Added a Short delay to stabilize the reading
9. Printed the brightness value to the serial monitor


## key things learnt
Analog Input: The potentiometer provides a variable resistance, which translates into an analog voltage that can be read by the microcontroller. This voltage is typically within a range of 0 to 5 volts, corresponding to a digital value between 0 and 4095 in a 12-bit resolution system.

PWM (Pulse Width Modulation): The analogWrite function is used to control the brightness of the LED. This function does not output an actual analog voltage but rather simulates it by rapidly turning the LED on and off at varying intervals.

Mapping Values: The map function is crucial for converting the potentiometer's analog reading (0-4095) into a suitable range for the LED brightness (0-255).