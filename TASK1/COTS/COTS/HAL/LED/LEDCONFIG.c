
#include"DIO_interface.h"
#include"GPT_interface.h"
#include"LED_interface.h"
void preparGPIO(void){

/*configer GPIO LED*/
	           /* 1. Enable the GPIO PORT */
	 /*****************************************/
	 SET_BIT(SYSCTL_RCGCGPIO,Dio_PortF);
	 
	           /* 2. Set the Direction as output  */
	 /**********************************************************/
	 SET_BIT(GPIO_PORTF_DIR,Dio_Channel2);
	 
             /* 3. Set pin  as a GPIO  */
	 /***********************************************************/
	 CLR_BIT(GPIO_PORTF_AFSEL,Dio_Channel2);
	 
	            /* 4. Enable the pin for digital function  */
	 /***********************************************************/
	 SET_BIT(GPIO_PORTF_DEN,Dio_Channel2);

	            /* 5. Clear the pin data  */
	 /***********************************************************/
	 CLR_BIT(GPIO_PORTF_DATA,Dio_Channel2);
}

void preparTIMER(){

}