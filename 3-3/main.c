#include <REGX52.H>
#include <INTRINS.H>
void Delay(unsigned int xms)	//@11.0592MHz
{
	unsigned char data i, j;

	
	_nop_();
	while(xms--){
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
	
	}
}

void main() {
	unsigned char value = 0;
	while(1){
		if(P3_1==0){
			Delay(20);
			while(P3_1==0)
			Delay(20);
			value++;
			P2=~value;
			
		}
	}
}