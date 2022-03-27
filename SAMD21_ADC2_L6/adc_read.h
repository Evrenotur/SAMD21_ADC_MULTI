/*
 * adc_read.h
 *
 * Created: 27.03.2022 12:10:07
 *  Author: SOFTWARE
 */ 


typedef struct
{
    uint8_t buffer[4];
	int PA06_ADC_Value;
    int PA07_ADC_Value;
	
}ADC_ReadTypeDef_t;

int  ADC_Read(ADC_ReadTypeDef_t * ADC_ReadTypeDef);

void adc_enable();
