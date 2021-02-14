/*
 *  ISR.cpp
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

#define BUTTON_PIN 15
#define DELAY 400

volatile long timer = 0;

void interrupt(void){
    if((millis()-timer)<100){return;}
    timer = millis();

    int val = 0;
    for(int i=0;i<10;i++){
        val += digitalRead(BUTTON_PIN);
    }
    float mean = val/(float)10;
    std::cout << "Button state: ";
    if(mean>=0.5){
        std::cout << 1 << std::endl;
    }else{
        std::cout << 0 << std::endl;
    }
}

int main(void){

    wiringPiSetup();

    wiringPiISR(BUTTON_PIN, INT_EDGE_FALLING, &interrupt);

    long t = millis();
    for(int i=0;i<10;i++){
        std::cout << "ISR: Heartbeat at " <<(t-millis())/1000 << "s" << std::endl;
        delay(DELAY);
    }
    return 0;
}
