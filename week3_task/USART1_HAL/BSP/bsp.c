#include "bsp.h"

// Hardware Initialization
// Parameter:None
void BSP_Init(void)
{
	USART1_UART_Init();

}

// Loop Run Function
// Parameter:None
void BSP_Loop(void)
{
	HAL_Delay(200); // ms
	HAL_GPIO_TogglePin(GPIOG,GPIO_PIN_14);
	//LL_GPIO_TogglePin(GPIOG,LL_GPIO_PIN_14);
	//HAL_GPIO_WritePin(GPIOG,GPIO_PIN_14,GPIO_PIN_SET);

}
