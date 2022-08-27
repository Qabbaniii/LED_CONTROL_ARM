#ifndef BIT_MATH_H_INCLUDED
#define BIT_MATH_H_INCLUDED

#define SET_BIT(Reg,BitNo)  (  (Reg) |=  (1<<BitNo) )

#define CLR_BIT(Reg,BitNo)  (  (Reg) &= ~(1<<BitNo) )

#define TOG_BIT(Reg,BitNo)  (  (Reg) ^=  (1<<BitNo) )

#define GET_BIT(Reg,BitNo)  ( ((Reg)>> BitNo) & 0x01)


#endif  /* BIT_MATH_H_INCLUDED */
