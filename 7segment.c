#include<lpc21xx.h>
int main()
{
	int i;
	PINSEL1=0x00000000;
	IO0DIR=0xF0FF0000;
	while(1)
	{

		IO0CLR=0xF0FF0000;
		IO0SET=0x10000000;
		IO0SET=0x003F0000;
		
		for(i=0;i<2200000;i++)
		{
		}
    IO0CLR=0xF0FF0000;
		IO0SET=0x10000000;
		IO0SET=0x00060000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x10000000;
		IO0SET=0x005B0000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x10000000;
		IO0SET=0x004F0000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x10000000;
		IO0SET=0x00660000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x10000000;
		IO0SET=0x006D0000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x10000000;
		IO0SET=0x007D0000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x10000000;
		IO0SET=0x00070000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x10000000;
		IO0SET=0x007F0000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x10000000;
		IO0SET=0x006F0000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x10000000;
		IO0SET=0x00770000;
		
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x10000000;
		IO0SET=0x007C0000;
		
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x10000000;
		IO0SET=0x00390000;
		
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x10000000;
		IO0SET=0x005E0000;
		
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x10000000;
		IO0SET=0x00790000;
		
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x10000000;
		IO0SET=0x00710000;
		
		for(i=0;i<2200000;i++)
		{
		}
		
			
			
			
			
			
			
			
		IO0CLR=0xF0FF0000;
		IO0SET=0x20000000;
		IO0SET=0x00710000;
		
		for(i=0;i<2200000;i++)
		{
		}
    IO0CLR=0xF0FF0000;
		IO0SET=0x20000000;
		IO0SET=0x00790000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x20000000;
		IO0SET=0x005E0000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x20000000;
		IO0SET=0x00390000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x20000000;
		IO0SET=0x007C0000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x20000000;
		IO0SET=0x00770000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x20000000;
		IO0SET=0x006F0000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x20000000;
		IO0SET=0x0007F000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x20000000;
		IO0SET=0x00070000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x20000000;
		IO0SET=0x007D0000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x20000000;
		IO0SET=0x006D0000;
		
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x20000000;
		IO0SET=0x00660000;
		
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x20000000;
		IO0SET=0x004F0000;
		
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x20000000;
		IO0SET=0x005B0000;
		
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x20000000;
		IO0SET=0x00060000;
		
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x20000000;
		IO0SET=0x003F0000;
		
		for(i=0;i<2200000;i++)
		{
		}
		
		
		
		
		
		IO0CLR=0xF0FF0000;
		IO0SET=0x40000000;
		IO0SET=0x80000000;
		IO0SET=0x003F0000;
		
		for(i=0;i<2200000;i++)
		{
		}
    IO0CLR=0xF0FF0000;
		IO0SET=0x40000000;
		IO0SET=0x80000000;
		IO0SET=0x00060000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x40000000;
		IO0SET=0x80000000;
		IO0SET=0x005B0000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x40000000;
		IO0SET=0x80000000;
		IO0SET=0x004F0000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x40000000;
		IO0SET=0x80000000;
		IO0SET=0x00660000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x40000000;
		IO0SET=0x80000000;
		IO0SET=0x006D0000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x40000000;
		IO0SET=0x80000000;
		IO0SET=0x007D0000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x40000000;
		IO0SET=0x80000000;
		IO0SET=0x00070000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x40000000;
		IO0SET=0x80000000;
		IO0SET=0x007F0000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x40000000;
		IO0SET=0x80000000;
		IO0SET=0x006F0000;
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x40000000;
		IO0SET=0x80000000;
		IO0SET=0x00770000;
		
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x40000000;
		IO0SET=0x80000000;
		IO0SET=0x007C0000;
		
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x40000000;
		IO0SET=0x80000000;
		IO0SET=0x00390000;
		
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x40000000;
		IO0SET=0x80000000;
		IO0SET=0x005E0000;
		
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x40000000;
		IO0SET=0x80000000;
		IO0SET=0x00790000;
		
		for(i=0;i<2200000;i++)
		{
		}
		IO0CLR=0xF0FF0000;
		IO0SET=0x40000000;
		IO0SET=0x80000000;
		IO0SET=0x00710000;
		
		for(i=0;i<2200000;i++)
		{
		}
	}
}
		
		
