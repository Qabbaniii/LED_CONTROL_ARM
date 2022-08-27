#ifndef INT_INT_REGISTER_H_
#define INT_INT_REGISTER_H_

#include"Std_Types.h"


 
#define CORTEXM4_PERI_BASE_ADDRESS 	            0xE000E000

#define APINT            (*((volatile uint32 *)0xE000ED0C))
#define INTCTRL          (*((volatile uint32 *)0xE000ED04))



#endif /* INT_INT_REGISTER_H_ */
