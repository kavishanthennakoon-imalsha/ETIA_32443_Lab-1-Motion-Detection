#include <avr/io.h>
#include <util/delay.h>

void setup() { 
    DDRB |= (1 << DDB5);  
    DDRB |= (1 << DDB0);  
    DDRB |= (1 << DDB1);      
    DDRD &= ~(1 << DDD2);    
}

 // Set PD2 as INPUT 
    DDRD &= ~(1 << DDD2);
