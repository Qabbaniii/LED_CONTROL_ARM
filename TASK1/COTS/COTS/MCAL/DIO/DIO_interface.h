#include"Std_Types.h"
#include"Bit_Math.h"
#include"DIO_register.h"

#ifndef DIO_DIO_INTERFACE_H_
#define DIO_DIO_INTERFACE_H_


/* Dio_Channel_Type*/


#define Dio_Channel0   0
#define Dio_Channel1   1
#define Dio_Channel2   2
#define Dio_Channel3   3
#define Dio_Channel4   4
#define Dio_Channel5   5
#define Dio_Channel6   6
#define Dio_Channel7   7


/* Dio_Port_Type*/

#define Dio_PortA   0
#define Dio_PortB   1
#define Dio_PortC   2
#define Dio_PortD   3
#define Dio_PortE   4
#define Dio_PortF   5

/*Dio_Level_Type*/

#define Dio_Level_High     1
#define Dio_Level_Low      0

#define DIO_Level_Output   1
#define DIO_Level_Input    0

/*Dio_Port_Level_Type*/


	
/*****************************************************************************/
             /*typedef*/
/*****************************************************************************/
typedef uint8 Dio_ChannelType ;
typedef uint8 Dio_PortType ;
typedef uint8 Dio_LevelType ;
typedef uint8 Dio_PortLevelType ;
	
	
/*****************************************************************************/
             /*function proto type*/
/*****************************************************************************/
Dio_ChannelType Dio_ReadChannel(Dio_PortType portid,Dio_ChannelType channelid);
void Dio_WriteChannel(Dio_PortType portid,Dio_ChannelType channelid,Dio_LevelType level);
Dio_PortLevelType Dio_ReadPort(Dio_PortType Portid);
void Dio_WritePort(Dio_PortType Portid,Dio_PortLevelType copy_uint8Value);
Dio_LevelType Dio_FlipChannel(Dio_PortType portid,Dio_ChannelType channelid);

#endif /* DIO_DIO_INTERFACE_H_ */

