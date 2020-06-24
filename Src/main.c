#include "stm32f4xx.h"                  // Device header
#include "DHT12.h"
#include "Systick.h"
uint8_t temp=0,temp1=0,hum=0,hum1=0;
uint8_t count=0;
uint8_t buffer[4];
int main()
{
    
    
		Systick_Configuration();
    I2C_Config();
		
    while (1)
    {
        I2C_Read(I2Cxx,SLAVE_ADDRESS,0x00,buffer,4);
				SystickDelay_ms(1000);
        // hum=I2C_Read(I2Cxx,SLAVE_ADDRESS,0x00,buffer,1);
        // SystickDelay_ms(5);
        // hum1=I2C_Read(I2Cxx,SLAVE_ADDRESS,0x01,buffer,1);
        // SystickDelay_ms(5);
        // temp=I2C_Read(I2Cxx,SLAVE_ADDRESS,0x02,buffer,1);
        // SystickDelay_ms(5);
        // temp1=I2C_Read(I2Cxx,SLAVE_ADDRESS,0x03,buffer,1);
        // SystickDelay_ms(5); 
				count++;
    }
}