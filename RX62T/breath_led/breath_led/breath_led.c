/***********************************************************************/
/*                                                                     */
/*  FILE        :breath_led.c                                          */
/*  DATE        :Thu, Mar 08, 2018                                     */
/*  DESCRIPTION :Main Program                                          */
/*  CPU TYPE    :RX62T                                                 */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.51).    */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/*                                                                     */
/***********************************************************************/
                  


//#include "typedefine.h"
#ifdef __cplusplus
//#include <ios>                        // Remove the comment when you use ios
//_SINT ios_base::Init::init_cnt;       // Remove the comment when you use ios
#endif

void main(void);
#ifdef __cplusplus
extern "C" {
void abort(void);
}
#endif
int i=0,j=0,x[100]={8300,8821,9340,9855,10364,10864,11355,11833,12298,12747,13178,13590,13981,14350,14695,15014,15307,15573,15810,16017,16193,16339,16452,16534,16583,16600,16583,16534,16452,16339,16193,16017,15810,15573,15307,15014,14695,14350,13981,13590,13178,12747,12298,11833,11355,10864,10364,9855,9340,8821,8300,7778,7259,6744,6235,5735,5244,4766,4301,3852,3421,3009,2618,2249,1904,1585,1292,1026,789,582,406,260,147,65,16,0,16,65,147,260,406,582,789,1026,1292,1585,1904,2249,2618,3009,3421,3852,4301,4766,5244,5735,6235,6744,7259,7778}; // SIN�I�l�O
int flag=0;s[4]={14,13,11,7};  // �R�E�O
int y[100]={0},n=0;
void main(void)
{
	R_PG_Clock_Set();
	R_PG_IO_PORT_Set_P3();
	for(i=0;i<100;i++)
	{
		y[i]=n;
		if(i<=49)n+=100;
		if(i>49) n-=100;
	}
	while(1)
	{
		/*while(i!=16600)  // �I�l�O
		{
			if(i<=x[j])		 	
				R_PG_IO_PORT_Write_P30(0x0);
			else
				R_PG_IO_PORT_Write_P30(0x1);
			i++;
		}
		j++;
		i=0;
		if(j==100)j=0;*/
		
		for(j=0;j<99;j++)  
		{
			for(i=0;i<5000;i++)
			{
				if(i<=y[j])		 	
					R_PG_IO_PORT_Write_P30(0x0);
				else
					R_PG_IO_PORT_Write_P30(0x1);
										
					
				if(i<=y[(j+25)%100])		 	
					R_PG_IO_PORT_Write_P31(0x0);
				else
					R_PG_IO_PORT_Write_P31(0x1);
					
					
				if(i<=y[(j+50)%100])		 	
					R_PG_IO_PORT_Write_P32(0x0);
				else
					R_PG_IO_PORT_Write_P32(0x1);
					
					
				if(i<=y[(j+75)%100])		 	
					R_PG_IO_PORT_Write_P33(0x0);
				else
					R_PG_IO_PORT_Write_P33(0x1);
					
					
			}		
		}

		
		/* R_PG_IO_PORT_Write_P3(s[i]);  // �R�E�O
		 
		 for(j=0;j<0xFFFFF;j++);
		 
		 if(i==3)  flag=1;
		 else if(i==0)  flag=0;
		
		 if(!flag)i++;
		 else i--;*/
	}
	
}

#ifdef __cplusplus
void abort(void)
{

}
#endif
