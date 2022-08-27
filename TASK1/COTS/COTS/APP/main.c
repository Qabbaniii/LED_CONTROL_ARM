#include<stdint.h>
#include"DIO_interface.h"
#include"GPT_interface.h"


 int main(void){
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
	 
	 
/* configer timer*/
   SET_BIT(SYSCTL_RCGCTIMER,Dio_Channel0);
	 /*before do any changes ensure the timer is diable*/
	 CLR_BIT(TIMER0_CTL,Dio_Channel0);
	 /*write the configuration register with the value 0x00000000*/
	 TIMER0_CFG=0x00000000;
	 /*configer the TnMR field in GPTMTAMR rigister*/
	 SET_BIT(TIMER0_TAMR,Dio_Channel1);
	 /*configer the TnDIR field in GPTMTAMR rigister | count up mode*/
	 CLR_BIT(TIMER0_TAMR,Dio_Channel4);
	 /*load the start value */
	 TIMER0_TAILR=0X00F42400; /*16,000,000 */
	 /*Enable the timer and start counting*/
	 SET_BIT(TIMER0_CTL,Dio_Channel0);
	 
	 while(1){
	 
		 if(GET_BIT(TIMER0_RIS,Dio_Channel0)==0x1){
		 SET_BIT(TIMER0_ICR,Dio_Channel0);
		TOG_BIT(GPIO_PORTF_DATA,Dio_Channel2);
		 
		 }
		 
		 
	 return 0;
 }}
 