# 16 Channel PWM led dimming board for ESP32

this repo contains the files for a 16 channel pcb to dim leds. 


## Description

I designed this board originally for my friend [Eddie Farr](https://www.instagram.com/freaughouse/?hl=en) for an led sculpture he is working on. I've also wanted something like this for a while to dim analog LED strips easily via WLED or ArtNet, or just plain old locally from a microcontroller.

It is designed to take in voltages from 5 to 37 Volts to power the ESP32. That way you can use this with 12 or 24 volt LEDs and dont have to deal with an extra 5V power supply to power the esp32. 

There are two separate places to put power in. 
EITHER plug 5V into the 5V side, or plug 7 - 37V into the other side. 

## Schematic 
![Alt text](pwm_pcb/16_channel_pwm_schematic.jpg)

## PCB
pcb with larger transistors:

![Alt text](pwm_pcb_larger/render_front.jpg)
![Alt text](pwm_pcb_larger/render_back.jpg)

pcb with smaller transistors:

![Alt text](pwm_pcb/render_front.jpg)
![Alt text](pwm_pcb/render_back.jpg)


## Getting Started


## Help

Any advise for common problems or issues.


## Authors

[william kennedy](https://freakylamps.com/)

## Version History


* 1.0
    * Initial Release - March 15, 2023
* 1.1
    * new design with larger TO-252 package for NMOS

## License

This project is licensed under the [NAME HERE] License - see the LICENSE.md file for details

## Acknowledgments

Inspiration comes from [quinLED's analog boards](https://quinled.info/quinled-an-quad/)