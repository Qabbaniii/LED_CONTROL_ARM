#ifndef DIO_DIO_REGISTER_H_
#define DIO_DIO_REGISTER_H_

#include"Std_Types.h"

#define CORTEXM4_PERI_BASE_ADDRESS 	            0xE000E000


/* RunMode Clock Gating Control */

/*****************************************************************************/

#define SYSCTL_RCGCGPIO       (*((volatile uint32 *)0x400FE608))
	
/*****************************************************************************/


/* GPIO registers (PORTA)*/

/*****************************************************************************/
  /*data control*/
#define GPIO_PORTA_DATA_BITS   ((volatile uint32 *)0x40004000)
#define GPIO_PORTA_DATA        (*((volatile uint32 *)0x400043FC))
#define GPIO_PORTA_DIR         (*((volatile uint32 *)0x40004400))
	/* mode control */
#define GPIO_PORTA_AFSEL       (*((volatile uint32 *)0x40004420))
#define GPIO_PORTA_ADCCTL      (*((volatile uint32 *)0x40004530))
#define GPIO_PORTA_DMACTL      (*((volatile uint32 *)0x40004534))
		/* port control*/
#define GPIO_PORTA_PCTL        (*((volatile uint32 *)0x4000452C))
  /* Pad Control */
#define GPIO_PORTA_DR2R        (*((volatile uint32 *)0x40004500))
#define GPIO_PORTA_DR4R        (*((volatile uint32 *)0x40004504))
#define GPIO_PORTA_DR8R        (*((volatile uint32 *)0x40004508))
#define GPIO_PORTA_ODR         (*((volatile uint32 *)0x4000450C))
#define GPIO_PORTA_PUR         (*((volatile uint32 *)0x40004510))
#define GPIO_PORTA_PDR         (*((volatile uint32 *)0x40004514))
#define GPIO_PORTA_SLR         (*((volatile uint32 *)0x40004518))
#define GPIO_PORTA_DEN         (*((volatile uint32 *)0x4000451C))
#define GPIO_PORTA_LOCK        (*((volatile uint32 *)0x40004520))
#define GPIO_PORTA_CR          (*((volatile uint32 *)0x40004524))
#define GPIO_PORTA_AMSEL       (*((volatile uint32 *)0x40004528))
	  /* interrupt control */
#define GPIO_PORTA_IS          (*((volatile uint32 *)0x40004404))
#define GPIO_PORTA_IBE         (*((volatile uint32 *)0x40004408))
#define GPIO_PORTA_IEV         (*((volatile uint32 *)0x4000440C))
#define GPIO_PORTA_IM          (*((volatile uint32 *)0x40004410))
#define GPIO_PORTA_RIS         (*((volatile uint32 *)0x40004414))
#define GPIO_PORTA_MIS         (*((volatile uint32 *)0x40004418))
#define GPIO_PORTA_ICR         (*((volatile uint32 *)0x4000441C))

/*****************************************************************************/

/* GPIO registers (PORTB)*/

/*****************************************************************************/
#define GPIO_PORTB_DATA_BITS   ((volatile uint32 *)0x40005000)
#define GPIO_PORTB_DATA        (*((volatile uint32 *)0x400053FC))
#define GPIO_PORTB_DIR         (*((volatile uint32 *)0x40005400))
#define GPIO_PORTB_IS          (*((volatile uint32 *)0x40005404))
#define GPIO_PORTB_IBE         (*((volatile uint32 *)0x40005408))
#define GPIO_PORTB_IEV         (*((volatile uint32 *)0x4000540C))
#define GPIO_PORTB_IM          (*((volatile uint32 *)0x40005410))
#define GPIO_PORTB_RIS         (*((volatile uint32 *)0x40005414))
#define GPIO_PORTB_MIS         (*((volatile uint32 *)0x40005418))
#define GPIO_PORTB_ICR         (*((volatile uint32 *)0x4000541C))
#define GPIO_PORTB_AFSEL       (*((volatile uint32 *)0x40005420))
#define GPIO_PORTB_DR2R        (*((volatile uint32 *)0x40005500))
#define GPIO_PORTB_DR4R        (*((volatile uint32 *)0x40005504))
#define GPIO_PORTB_DR8R        (*((volatile uint32 *)0x40005508))
#define GPIO_PORTB_ODR         (*((volatile uint32 *)0x4000550C))
#define GPIO_PORTB_PUR         (*((volatile uint32 *)0x40005510))
#define GPIO_PORTB_PDR         (*((volatile uint32 *)0x40005514))
#define GPIO_PORTB_SLR         (*((volatile uint32 *)0x40005518))
#define GPIO_PORTB_DEN         (*((volatile uint32 *)0x4000551C))
#define GPIO_PORTB_LOCK        (*((volatile uint32 *)0x40005520))
#define GPIO_PORTB_CR          (*((volatile uint32 *)0x40005524))
#define GPIO_PORTB_AMSEL       (*((volatile uint32 *)0x40005528))
#define GPIO_PORTB_PCTL        (*((volatile uint32 *)0x4000552C))
#define GPIO_PORTB_ADCCTL      (*((volatile uint32 *)0x40005530))
#define GPIO_PORTB_DMACTL      (*((volatile uint32 *)0x40005534))

/*****************************************************************************/

 /*GPIO registers (PORTC)*/

/*****************************************************************************/
#define GPIO_PORTC_DATA_BITS   ((volatile uint32 *)0x40006000)
#define GPIO_PORTC_DATA        (*((volatile uint32 *)0x400063FC))
#define GPIO_PORTC_DIR         (*((volatile uint32 *)0x40006400))
#define GPIO_PORTC_IS          (*((volatile uint32 *)0x40006404))
#define GPIO_PORTC_IBE         (*((volatile uint32 *)0x40006408))
#define GPIO_PORTC_IEV         (*((volatile uint32 *)0x4000640C))
#define GPIO_PORTC_IM          (*((volatile uint32 *)0x40006410))
#define GPIO_PORTC_RIS         (*((volatile uint32 *)0x40006414))
#define GPIO_PORTC_MIS         (*((volatile uint32 *)0x40006418))
#define GPIO_PORTC_ICR         (*((volatile uint32 *)0x4000641C))
#define GPIO_PORTC_AFSEL       (*((volatile uint32 *)0x40006420))
#define GPIO_PORTC_DR2R        (*((volatile uint32 *)0x40006500))
#define GPIO_PORTC_DR4R        (*((volatile uint32 *)0x40006504))
#define GPIO_PORTC_DR8R        (*((volatile uint32 *)0x40006508))
#define GPIO_PORTC_ODR         (*((volatile uint32 *)0x4000650C))
#define GPIO_PORTC_PUR         (*((volatile uint32 *)0x40006510))
#define GPIO_PORTC_PDR         (*((volatile uint32 *)0x40006514))
#define GPIO_PORTC_SLR         (*((volatile uint32 *)0x40006518))
#define GPIO_PORTC_DEN         (*((volatile uint32 *)0x4000651C))
#define GPIO_PORTC_LOCK        (*((volatile uint32 *)0x40006520))
#define GPIO_PORTC_CR          (*((volatile uint32 *)0x40006524))
#define GPIO_PORTC_AMSEL       (*((volatile uint32 *)0x40006528))
#define GPIO_PORTC_PCTL        (*((volatile uint32 *)0x4000652C))
#define GPIO_PORTC_ADCCTL      (*((volatile uint32 *)0x40006530))
#define GPIO_PORTC_DMACTL      (*((volatile uint32 *)0x40006534))

/*****************************************************************************/

/* GPIO registers (PORTD)*/

/*****************************************************************************/
#define GPIO_PORTD_DATA_BITS   ((volatile uint32 *)0x40007000)
#define GPIO_PORTD_DATA        (*((volatile uint32 *)0x400073FC))
#define GPIO_PORTD_DIR         (*((volatile uint32 *)0x40007400))
#define GPIO_PORTD_IS          (*((volatile uint32 *)0x40007404))
#define GPIO_PORTD_IBE         (*((volatile uint32 *)0x40007408))
#define GPIO_PORTD_IEV         (*((volatile uint32 *)0x4000740C))
#define GPIO_PORTD_IM          (*((volatile uint32 *)0x40007410))
#define GPIO_PORTD_RIS         (*((volatile uint32 *)0x40007414))
#define GPIO_PORTD_MIS         (*((volatile uint32 *)0x40007418))
#define GPIO_PORTD_ICR         (*((volatile uint32 *)0x4000741C))
#define GPIO_PORTD_AFSEL       (*((volatile uint32 *)0x40007420))
#define GPIO_PORTD_DR2R        (*((volatile uint32 *)0x40007500))
#define GPIO_PORTD_DR4R        (*((volatile uint32 *)0x40007504))
#define GPIO_PORTD_DR8R        (*((volatile uint32 *)0x40007508))
#define GPIO_PORTD_ODR         (*((volatile uint32 *)0x4000750C))
#define GPIO_PORTD_PUR         (*((volatile uint32 *)0x40007510))
#define GPIO_PORTD_PDR         (*((volatile uint32 *)0x40007514))
#define GPIO_PORTD_SLR         (*((volatile uint32 *)0x40007518))
#define GPIO_PORTD_DEN         (*((volatile uint32 *)0x4000751C))
#define GPIO_PORTD_LOCK        (*((volatile uint32 *)0x40007520))
#define GPIO_PORTD_CR          (*((volatile uint32 *)0x40007524))
#define GPIO_PORTD_AMSEL       (*((volatile uint32 *)0x40007528))
#define GPIO_PORTD_PCTL        (*((volatile uint32 *)0x4000752C))
#define GPIO_PORTD_ADCCTL      (*((volatile uint32 *)0x40007530))
#define GPIO_PORTD_DMACTL      (*((volatile uint32 *)0x40007534))


/*****************************************************************************/

/* GPIO registers (PORTE)*/

/*****************************************************************************/
#define GPIO_PORTE_DATA_BITS   ((volatile uint32 *)0x40024000)
#define GPIO_PORTE_DATA        (*((volatile uint32 *)0x400243FC))
#define GPIO_PORTE_DIR         (*((volatile uint32 *)0x40024400))
#define GPIO_PORTE_IS          (*((volatile uint32 *)0x40024404))
#define GPIO_PORTE_IBE         (*((volatile uint32 *)0x40024408))
#define GPIO_PORTE_IEV         (*((volatile uint32 *)0x4002440C))
#define GPIO_PORTE_IM          (*((volatile uint32 *)0x40024410))
#define GPIO_PORTE_RIS         (*((volatile uint32 *)0x40024414))
#define GPIO_PORTE_MIS         (*((volatile uint32 *)0x40024418))
#define GPIO_PORTE_ICR         (*((volatile uint32 *)0x4002441C))
#define GPIO_PORTE_AFSEL       (*((volatile uint32 *)0x40024420))
#define GPIO_PORTE_DR2R        (*((volatile uint32 *)0x40024500))
#define GPIO_PORTE_DR4R        (*((volatile uint32 *)0x40024504))
#define GPIO_PORTE_DR8R        (*((volatile uint32 *)0x40024508))
#define GPIO_PORTE_ODR         (*((volatile uint32 *)0x4002450C))
#define GPIO_PORTE_PUR         (*((volatile uint32 *)0x40024510))
#define GPIO_PORTE_PDR         (*((volatile uint32 *)0x40024514))
#define GPIO_PORTE_SLR         (*((volatile uint32 *)0x40024518))
#define GPIO_PORTE_DEN         (*((volatile uint32 *)0x4002451C))
#define GPIO_PORTE_LOCK        (*((volatile uint32 *)0x40024520))
#define GPIO_PORTE_CR          (*((volatile uint32 *)0x40024524))
#define GPIO_PORTE_AMSEL       (*((volatile uint32 *)0x40024528))
#define GPIO_PORTE_PCTL        (*((volatile uint32 *)0x4002452C))
#define GPIO_PORTE_ADCCTL      (*((volatile uint32 *)0x40024530))
#define GPIO_PORTE_DMACTL      (*((volatile uint32 *)0x40024534))


/*****************************************************************************/

/* GPIO registers (PORTF)*/

/*****************************************************************************/
#define GPIO_PORTF_DATA_BITS   ((volatile uint32 *)0x40025000)
#define GPIO_PORTF_DATA        (*((volatile uint32 *)0x400253FC))
#define GPIO_PORTF_DIR         (*((volatile uint32 *)0x40025400))
#define GPIO_PORTF_IS          (*((volatile uint32 *)0x40025404))
#define GPIO_PORTF_IBE         (*((volatile uint32 *)0x40025408))
#define GPIO_PORTF_IEV         (*((volatile uint32 *)0x4002540C))
#define GPIO_PORTF_IM          (*((volatile uint32 *)0x40025410))
#define GPIO_PORTF_RIS         (*((volatile uint32 *)0x40025414))
#define GPIO_PORTF_MIS         (*((volatile uint32 *)0x40025418))
#define GPIO_PORTF_ICR         (*((volatile uint32 *)0x4002541C))
#define GPIO_PORTF_AFSEL       (*((volatile uint32 *)0x40025420))
#define GPIO_PORTF_DR2R        (*((volatile uint32 *)0x40025500))
#define GPIO_PORTF_DR4R        (*((volatile uint32 *)0x40025504))
#define GPIO_PORTF_DR8R        (*((volatile uint32 *)0x40025508))
#define GPIO_PORTF_ODR         (*((volatile uint32 *)0x4002550C))
#define GPIO_PORTF_PUR         (*((volatile uint32 *)0x40025510))
#define GPIO_PORTF_PDR         (*((volatile uint32 *)0x40025514))
#define GPIO_PORTF_SLR         (*((volatile uint32 *)0x40025518))
#define GPIO_PORTF_DEN         (*((volatile uint32 *)0x4002551C))
#define GPIO_PORTF_LOCK        (*((volatile uint32 *)0x40025520))
#define GPIO_PORTF_CR          (*((volatile uint32 *)0x40025524))
#define GPIO_PORTF_AMSEL       (*((volatile uint32 *)0x40025528))
#define GPIO_PORTF_PCTL        (*((volatile uint32 *)0x4002552C))
#define GPIO_PORTF_ADCCTL      (*((volatile uint32 *)0x40025530))
#define GPIO_PORTF_DMACTL      (*((volatile uint32 *)0x40025534))

/****************************************************************************/


#endif /* DIO_DIO_REGISTER_H_ */
