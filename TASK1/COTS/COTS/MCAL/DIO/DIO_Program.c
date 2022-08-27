
#include"Std_Types.h"
#include"DIO_interface.h"
#include"Bit_Math.h"
#include"DIO_register.h"

Dio_ChannelType Dio_ReadChannel(Dio_PortType portid,Dio_ChannelType channelid){
	uint8 LOC_uint8Value = 0;
	switch (portid){
	default :break;
	case Dio_PortA: LOC_uint8Value = GET_BIT(GPIO_PORTA_DATA, channelid);break;
	case Dio_PortB: LOC_uint8Value = GET_BIT(GPIO_PORTB_DATA, channelid);break;
	case Dio_PortC: LOC_uint8Value = GET_BIT(GPIO_PORTC_DATA, channelid);break;
	case Dio_PortD: LOC_uint8Value = GET_BIT(GPIO_PORTD_DATA, channelid);break;
	case Dio_PortE: LOC_uint8Value = GET_BIT(GPIO_PORTE_DATA, channelid);break;
	case Dio_PortF: LOC_uint8Value = GET_BIT(GPIO_PORTF_DATA, channelid);break;

	}
	return LOC_uint8Value;
}
	
void Dio_WriteChannel(Dio_PortType portid,Dio_ChannelType channelid,Dio_LevelType level){
switch (level){
	default : break;

	case Dio_Level_High:{
		switch (portid){
		default :break;
		case Dio_PortA: SET_BIT(GPIO_PORTA_DATA, channelid);	break;
		case Dio_PortB: SET_BIT(GPIO_PORTB_DATA, channelid);	break;
		case Dio_PortC: SET_BIT(GPIO_PORTC_DATA, channelid);	break;
		case Dio_PortD: SET_BIT(GPIO_PORTD_DATA, channelid);	break;
		case Dio_PortE: SET_BIT(GPIO_PORTE_DATA, channelid);	break;
		case Dio_PortF: SET_BIT(GPIO_PORTF_DATA, channelid);	break;
		
		}
	}break;


	case Dio_Level_Low:{
		switch (portid){
		default :break;
		case Dio_PortA: CLR_BIT(GPIO_PORTA_DATA, channelid);	break;
		case Dio_PortB: CLR_BIT(GPIO_PORTB_DATA, channelid);	break;
		case Dio_PortC: CLR_BIT(GPIO_PORTC_DATA, channelid);	break;
		case Dio_PortD: CLR_BIT(GPIO_PORTD_DATA, channelid);	break;
		case Dio_PortE: CLR_BIT(GPIO_PORTE_DATA, channelid);	break;
		case Dio_PortF: CLR_BIT(GPIO_PORTF_DATA, channelid);	break;
		
		}
	}break;
	}
}
Dio_PortLevelType Dio_ReadPort(Dio_PortType Portid){
	uint8 LOC_uint8Value = 0;
	switch(Portid){
				default:break;
				case Dio_PortA: LOC_uint8Value = GPIO_PORTA_DATA; break;
				case Dio_PortB: LOC_uint8Value = GPIO_PORTB_DATA; break;
				case Dio_PortC: LOC_uint8Value = GPIO_PORTC_DATA; break;
				case Dio_PortD: LOC_uint8Value = GPIO_PORTD_DATA; break;
				case Dio_PortE: LOC_uint8Value = GPIO_PORTE_DATA; break;
				case Dio_PortF: LOC_uint8Value = GPIO_PORTF_DATA; break;
				
				return LOC_uint8Value;
}}
void Dio_WritePort(Dio_PortType Portid,Dio_PortLevelType copy_uint8Value){
switch(Portid){
			default:break;
			case Dio_PortA: GPIO_PORTA_DATA = copy_uint8Value; break;
			case Dio_PortB: GPIO_PORTB_DATA = copy_uint8Value; break;
			case Dio_PortC: GPIO_PORTC_DATA = copy_uint8Value; break;
			case Dio_PortD: GPIO_PORTD_DATA = copy_uint8Value; break;
			case Dio_PortE: GPIO_PORTE_DATA = copy_uint8Value; break;
			case Dio_PortF: GPIO_PORTF_DATA = copy_uint8Value; break;

	}}

Dio_LevelType Dio_FlipChannel(Dio_PortType portid,Dio_ChannelType channelid){
	
		switch (portid){
		default :break;
		case Dio_PortA: TOG_BIT(GPIO_PORTA_DATA, channelid);	break;
		case Dio_PortB: TOG_BIT(GPIO_PORTB_DATA, channelid);	break;
		case Dio_PortC: TOG_BIT(GPIO_PORTC_DATA, channelid);	break;
		case Dio_PortD: TOG_BIT(GPIO_PORTD_DATA, channelid);	break;
		case Dio_PortE: TOG_BIT(GPIO_PORTE_DATA, channelid);	break;
		case Dio_PortF: TOG_BIT(GPIO_PORTF_DATA, channelid);	break;
		}
}


