/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include <cstdint>
#include <cstdio>
#include "Sharp_GP2Y.h"




int main()
{
    // Initialise the digital pin LED1 as an output
    GP2Y inf(A1);
    DigitalOut led1(LED1);
   
    
    uint16_t range=0;
    char buffer[200];
    while (true) {

       
       range=inf.getRange();
       sprintf(buffer,"Abstand uint = %d \n\r",range);
       printf(buffer);
       
       if(range>= 15){

           led1=0;
       }   else{
           led1=1;
       }
       
       
        ThisThread::sleep_for(100ms);
    }
}
