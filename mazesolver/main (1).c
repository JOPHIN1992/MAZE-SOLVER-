#include<reg52.h>
#include<stdio.h>
#define st 0x0a;
#define lt 0x06;
#define rt 0x09;
#define stop 0x00;
unsigned int a,i,j;
void delay(unsigned int t)
{
for (i=0;i<t;i++)
	{
	for(j=0;j<1275;j++);
	}
}

void main()
{
	while(1)
	{
a=P1&0x07;
if(a==0x03)
{
  
	P2=lt;
	delay(25);
}
else if ((a==0x05)||(a==0x01))
{
  P2=st;

}
else if (( a==0x02)||((a==0x06))||((a==0x04))||((a==0x07)))
{
  delay(20);
	P2=rt;
	
}
else 
{
	delay (30);
	P2=stop;
}
}
	}