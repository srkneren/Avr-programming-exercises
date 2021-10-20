/*
 * GccApplication2.c
 *
 * Created: 19.10.2021 14:16:48
 * Author : Serkan
 */ 
//#define F_CPU 16000000
//#include <avr/io.h>
//#include <util/delay.h>
//#include <stdint.h>
//#define REGISTER_ZERO 0x29
//#define MY_DDRD  *myDDRD 
//#define MY_PORTD *(myDDRD+1)
//#define ON	0xFF
//#define OFF 0x00
//#define LEDS(led_state,timing)   do{MY_PORTD = led_state; _delay_ms(timing);}while(0)
//uint8_t* myDDRD = (uint8_t*)(REGISTER_ZERO +1) ;
//uint8_t* arr[2] = {(uint8_t*)0x2A,(uint8_t)0x2B};
//uint8_t** parr = arr ;
#define F_CPU 16000000UL

#include <util/delay.h>


//#define ON				0xFF
//#define OFF				0x00
//#define PIND			*((uint8_t*)0x29)
//#define DDRD			*((uint8_t*)0x2A)
//#define PORTD			*((uint8_t*)0x2B)

//void lp1(),lp2(),lp3(),lp4();
//
//void lp1(){
	//PORTD = 0x18 ;
	//_delay_ms(100);
//}
//void lp2(){
	//PORTD = 0x24;
//}
//void lp3(){
	//PORTD = 0x42;
//}
//void lp4(){
	//PORTD = 0x81;
//}


int main(void){
{
	//void (*fun_ptr_arr[])() = {lp1,lp2,lp3,lp4} ;
	//DDRD = 0xFF ;
	
	//*parr[0] = ON ;
	//*parr[1]= ON  ;
	//DDRD = 0xFF ;
	//uint8_t* p = (uint8_t*)0x2B;
	//*p = 0x7C;
	 //
	//PORTD |= (1<<3) ;  
	//MY_DDRD = ON ;
	//MY_PORTD = OFF ;                                                                                                            
	
	while(1){
		//uint8_t i = 0 ;
		//for(i=0;i<4;i++){
			//fun_ptr_arr[i]();
			//_delay_ms(100);
		//}
		//for(i=3;i>-1;i--){
			//fun_ptr_arr[i]();
			//_delay_ms(100);
		}
		//LEDS(ON,1000);
		//LEDS(OFF,1000);
		
		//MY_PORTD = ON;
		//_delay_ms(1000);
		//MY_PORTD = OFF ;
		//_delay_ms(1000);
		
	}
	
	DDRD = 0xFF ;
	DDRB = 0x00 ;
	PORTD = 0xFF ;
	PORTB = 0xFF ;
	while(1){
		//if(PINB & (1<<0))
			//PORTD = 0xF0 ;
		//else
			//PORTD = 0x0F ;
	
	}
	
	
	
	
	
	//DDRD = 0b11111111;
	//DDRD = 0xFF ;	
	//PORTD |= (1<<PORTD0);
	//PORTD |= (1<<PORTD1);
    /* Replace with your application code */
    //while (1)
    //{
	    
	    
	    //int i;
	    //for(i=0;i<256;i++){
	    //PORTD = i ;
	    //_delay_ms(300);
	    //}
	    
	    //PORTD = 0b11111111;
	    //PORTD = 0xFF ;
	    //_delay_ms(1000);
	    //PORTD = 0x00 ;
	    //_delay_ms(1000);
    //}
}

