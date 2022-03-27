/*
 * adc_read.c
 *
 * Created: 27.03.2022 12:11:59
 *  Author: SOFTWARE
 */ 


#include <atmel_start.h>
#include "adc_read.h"

void adc_enable()
{
	
	adc_sync_enable_channel(&ADC_0,0);
}

int ADC_Read(ADC_ReadTypeDef_t * ADC_ReadTypeDef)
{
	
	int ret=adc_sync_read_channel(&ADC_0,0,ADC_ReadTypeDef->buffer,4);
	if(ret<=0)
	{
		
		return -1;
	}
	ADC_ReadTypeDef->PA06_ADC_Value = (ADC_ReadTypeDef->buffer[1] << 8) + ADC_ReadTypeDef->buffer[0];
	ADC_ReadTypeDef->PA07_ADC_Value =(ADC_ReadTypeDef->buffer[3]<<8)+ADC_ReadTypeDef->buffer[2];
	
	return 0;
}