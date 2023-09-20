/*    
*     Created in 6/9/2023
*     By : Ahmed Eldab3
*/


#include "../LIB/Bit_utils.h"
#include "../LIB/Std_types.h"

#define F_CPU 1000000
#include "util/delay.h"
#include "../MCAL/DIO/DIO_Interface.h"
#include "../HALL/SSD/SSD_Interface.h"
#include "../HALL/LCD/LCD_Interface.h"
#include "../HALL/LCD/LCD_Private.h"
#include "../HALL/KPAD/KPAD_Interface.h"


int main (){

	LCD_voidIitialize();
	LCD_voidAddPatternsToCGRAM();
    while(1){
    	u8 c=4;
    	u8 v=15;
    	for (s8 j=0;j<4;j++){

            LCD_voidGoToPosition(LINE2,j);
    		LCD_voidWritePattern(4);
    	    _delay_ms(250);
    	    LCD_voidWriteCommand(Clear_Display);
    	    		}
    	for (s8 i=0;i<5;i++){

    		LCD_voidGoToPosition(LINE2,v);
    		LCD_voidWritePattern(6);
    		//_delay_ms(250);
    		//LCD_voidWriteCommand(Clear_Display);
    		LCD_voidGoToPosition(LINE2,c);
    		LCD_voidWritePattern(4);
    		_delay_ms(250);
    		LCD_voidWriteCommand(Clear_Display);
    		c++;
    		v--;

    	}
		LCD_voidGoToPosition(LINE2,9);
		LCD_voidWritePattern(4);
		LCD_voidGoToPosition(LINE2,10);
		LCD_voidWritePattern(6);
		_delay_ms(250);
		LCD_voidWriteCommand(Clear_Display);
		LCD_voidGoToPosition(LINE1,10);
		LCD_voidWritePattern(4);
		LCD_voidGoToPosition(LINE2,10);
		LCD_voidWritePattern(6);
		_delay_ms(250);
		LCD_voidWriteCommand(Clear_Display);

    	u8 x=11;
    	u8 y=9;
		for (s8 i=0;i<5;i++){

		    LCD_voidGoToPosition(LINE2,x);
		    LCD_voidWritePattern(4);
		    //_delay_ms(250);
		    //LCD_voidWriteCommand(Clear_Display);
		    LCD_voidGoToPosition(LINE2,y);
		    LCD_voidWritePattern(6);
		    _delay_ms(250);
		    LCD_voidWriteCommand(Clear_Display);
		    x++;
		    y--;

		 }

		for (s8 i=4;i>=0;i--){

		    LCD_voidGoToPosition(LINE2,i);
		    LCD_voidWritePattern(6);
		    _delay_ms(250);
		    LCD_voidWriteCommand(Clear_Display);

		 }

		_delay_ms(300);

    }


}
