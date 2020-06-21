#include "stm32f4xx.h"                  // Device header
#include "DHT12.h"
#include "Systick.h"
uint8_t temp=0,temp1=0,hum=0,hum1=0;
int main()
{
    
    
		Systick_Configuration();
    I2C_Config();
		//uint8_t buffer[5];
    while (1)
    {
        I2C_Read(I2Cxx,SLAVE_ADDRESS,0x00,&hum,1);
        SystickDelay_ms(3);
        I2C_Read(I2Cxx,SLAVE_ADDRESS,0x01,&hum1,1);
        SystickDelay_ms(3);
        I2C_Read(I2Cxx,SLAVE_ADDRESS,0x02,&temp,1);
        SystickDelay_ms(3);
        I2C_Read(I2Cxx,SLAVE_ADDRESS,0x03,&temp1,1);
        SystickDelay_ms(3); 
    }
}