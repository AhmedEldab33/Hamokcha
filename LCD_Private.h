/*    
*     Created in 10/9/2023
*     By : Ahmed Eldab3
*/
#include "../../LIB/Std_types.h"

#ifndef LCD_PRIVATE_H
#define LCD_PRIVATE_H

#define                LINE1                0

#define                LINE2                1



/******************************************************|--------------|*****************************************************/
/******************************************************| LCD Commands |*****************************************************/
/******************************************************|--------------|*****************************************************/

#define                                     Clear_Display                                       0b00000001

#define                                     Return_Home                                         0b00000010

#define                                     Entry_Mode_Set                                      0b00000110

#define                                     Display_On_Off                                      0b00001100
           
#define                                     Cursor_Or_Display_Shift                             0b00010100
           
#define                                     Function_Set                                        0b00111100
           
#define                                     Set_Address_To_CGRAM                                0b01000000


#endif