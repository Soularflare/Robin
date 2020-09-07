# Robin
An automated bird feeder for the avid bird enthusiast



## About
Robin is an automated bird feeder that programmed and controlled using a linux kernel and multiple drivers, as well as a Qt-based GUI. The system is capable of dispensing bird seed at the press of a button, as well as setting an interval for the feeder to dispense after every time this interval has passed, and also an automatic mode, where the feeder will dispense seed whenever its motion sensor detects a bird perched on the feeder. In addition, the system is also equipped with a scarecrow mode: a setting that will sound a buzzer when motion is detected to scare away unwanted attention, such as squirrels or crows. The purpose of this project was to deepen my understanding of Linux kernel  and device driver development by creating a system completely controlled by microcontrollers and user input. The scope of this project covers setting up a PIC18f4550 microcontroller to run a bird feeder with multiple peripherals, as well as the source code for the Qt GUI.

## Usage



## Required Libraries and Dependencies


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




