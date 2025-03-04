#include <REGX52.H>
#include <INTRINS.H>
void Delay500ms(void)	//@11.0592MHz
{
	unsigned char data i, j, k;

	_nop_();
	i = 4;
	j = 129;
	k = 119;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}
void Delay350ms(void)	//@11.0592MHz
{
	unsigned char data i, j, k;

	_nop_();
	i = 3;
	j = 116;
	k = 133;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}



void main(){
	int array[8]={0xFE,0xFD,0xFB,0xF7,0xEF,0xDF,0xBF,0x7F};
	int i=0;
	

	while(1){
		for(i=0;i<7;i++){
		P2=array[i];
		Delay500ms();
	}
		P2=array[7];
		Delay350ms();
	
		for(i=6;i>0;i--){
		P2=array[i];
		Delay500ms();
	}
		P2=array[0];
		
	}

}