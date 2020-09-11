![logo](https://media.istockphoto.com/vectors/rdhake-vector-id1068306756?k=6&m=1068306756&s=612x612&w=0&h=uP8xaddbBcGBDK_E2su2-xtzfWx5NJ2AFjBmTAndx4M=)

# Robin
An automated bird feeder for the avid bird enthusiast

<img src="/Demo/Robin_demo.gif" />

## About
Robin is an automated bird feeder that programmed and controlled using a linux kernel and multiple drivers, as well as a Qt-based GUI. The system is capable of dispensing bird seed at the press of a button, as well as setting an interval for the feeder to dispense after every time this interval has passed, and also an automatic mode, where the feeder will dispense seed whenever its motion sensor detects a bird perched on the feeder. In addition, the system is also equipped with a scarecrow mode: a setting that will sound a buzzer when motion is detected to scare away unwanted attention, such as squirrels or crows. The purpose of this project was to deepen my understanding of Linux kernel  and device driver development by creating a system completely controlled by microcontrollers and user input. The scope of this project covers setting up a PIC18f4550 microcontroller to run a bird feeder with multiple peripherals, as well as the source code for the Qt GUI.

## Usage
```
Menu Options:

Manual Feeding - Dispenses bird seed whenever the button is pressed
Interval Feeding - Specify a minute interval to the right of the button. Feeder will dispense seed each time that amount of time has passed
Automatic Mode - Feeder will dispense seed each time a bird lands near the feeder (5 minute minimal downtime between dispenses)
Scarecrow Mode - Feeder will sound a buzzer rather than dispense seed whenever somethine approaches it
Turn Off Feeder - Turns off any other modes that have been set so that only Manual Feeding will dispense seed

```



## Features
  - Written in C/C++
  - Linux kernel
  - USB, PCI, and other drivers
  - Qt GUI Application
  - BeagleBone Black board
  - PIC18F4550 board

## Getting Started



### Installing prerequesites


### Installing Linux kernel



### Acquiring and assembling the hardware  


For this project you will need the following:


The pinouts selected for the components are the following:  
- **PIR Motion Sensor**
  - Pin 2(+5v)
  - Pin 11(GPIO 17)
  - Pin 6(GND)




