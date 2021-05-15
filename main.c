/*
 * Nombre: Mario Soto
 * Carnet: 18351
 * Laboratorio 7
 * Catedratico: Pablo Mazariegos
 * Seccion 20
 */

//Agregamos las librerias necesarias

#include <stdint.h>
#include <stdbool.h>
#include "inc/tm4c123gh6pm.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "inc/hw_ints.h"
#include "driverlib/sysctl.h"
#include "driverlib/interrupt.h"
#include "driverlib/gpio.h"
#include "driverlib/timer.h"

/**
 * main.c
 */
int main(void)
{
    SysCtlClockSet ( SYSCTL_SYSDIV_5 | SYSCTL_USE_PLL | SYSCTL_OSC_MAIN | SYSCTL_XTAL_16MHZ ) ;//Hacemos la cofig del clck
    SysCtlPeripheralEnable ( SYSCTL_PERIPH_GPIOF ) ;//Activamos el uso de periferios para el puerto F
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3);//Configuramos los leds rojo, verde y azul como salidas
}
