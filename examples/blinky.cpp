/*
 *  bliky.cpp
 *
 *  Created on: Feb 13, 2021
 *
 *  Copyright (c) 2021 Jan-Hendrik Ewers.
 *
 *  This file is part of wiringPi-mock.
 *
 *  This program is free software: you can redistribute it and/or
 *  modify it under the terms of the Lesser GNU General Public
 *  License as  published by the Free Software Foundation, either
 *  version 3 of the  License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 *  See the GNU General Public License for more details.
 *
 */

#include <wiringPi.h>
#include <iostream>

#define LED_PIN 15
#define DELAY 100

int main(void){
    wiringPiSetup();
    pinMode(LED_PIN, OUTPUT);

    for(int i=0;i<10;i++){
        
        digitalWrite(LED_PIN,HIGH);
        std::cout << "Blinky: bl1nk" << std::endl;

        delay(DELAY);

        digitalWrite(LED_PIN,LOW);
        std::cout << "Blinky: bl0nk" << std::endl;

        delay(DELAY);
    
    }

    return 0;
}
