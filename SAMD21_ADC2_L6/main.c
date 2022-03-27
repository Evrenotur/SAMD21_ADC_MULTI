#include <atmel_start.h>
#include "adc_read.h"
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	adc_enable();
int ret;
	
	while (1)
	{
		
		
		ADC_ReadTypeDef_t  adc_read;
		ret=ADC_Read(&adc_read);
		
		if(ret==0){
			//printf("PA06=%03d\r\n",adc_read.PA06_ADC_Value);
		   printf("PA06=%03d\r       PA07=%03d\r",adc_read.PA06_ADC_Value,adc_read.PA07_ADC_Value);
		 
			delay_ms(500);
			
		}
		else
		{
			printf("Okuma Basarisiz");
		}
		delay_ms(250);
	}
		

	

}
