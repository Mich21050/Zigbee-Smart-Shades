# Zigbee-Smart-Shades
A smart shade using a ikea trafri zigbee module and other low cost parts. My aim was to create low budget smart shades which were easily integratable into my existing smart home solution. I ended up using the Ikea Tradfri module which is found in almost every Ikea smart bulb which makes it very cheap to obtain.

# Introduction:
This repository includes everything you need to build my Zigbee using the Ikea Tradfri Module smart shades. Thanks to this https://github.com/basilfx/TRADFRI-Hacking great repository from @basilfx it was pretty easy to utilize the Ikea Tradfri module. The main advantage of that is, that you can just pair the shades up to any existing Zigbee smart home solution and it will just work as a light bulb, including the dimming function.
The main 
I got my Module from the cheap GU10 smart lamps (in Austria they cost about 7€ so pretty cheap).

# Concept
So the underlying concept is, just powering the Ikea Tradfri Module using a 3.3V source (Arduino Nano internal regulator) and then reading the PWM output on Pin PB13 (Tradfri Module) using the Arduino Nano and then proccesing the signal to controll a ULN2003 motor controller and a cheap 28byj-48 stepper using the Accelstepper library.

# Disassembling the GU10 bulb
**WARNING: Disassembling the bulb is pretty messy and if you are not carefull it can also be pretty dangerous. You need to carefully seperate the top plastic diffuser from the glass shell of the light. Furthermore if you plugged the bulb in before disassembling it the caps could still hold a little charge so just be carefull.**
1) Carefully seperate the plastic diffuser from the glass shell using a small flathead screwdriver.

2) Once you seperated both of them, unscrew the 2 bolts holding the led pcb in. 

3) Now carefully remove the small metall "heatsink" and the remaining pcb using small pliers.

4) Now you can remove the Tradfri Moduke by just heating up the bottom contacts by adding some new solder and then carefully pulling the module out of its slot.

5) Now solder some pin headers to the the pins shown in the photo below. (Pinout Credits to @basilfx)

# Creating the Control Circuit
*I'm currently working on a custom pcb using the same Atmega328p microcontroller and custom tradfri holder.*
I built the original circuit on a breadboard using an Arduino Nano due to 
