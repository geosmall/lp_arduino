#include "openpilot.h"
#include <uavobjectsinit.h>
#include <systemmod.h>


/* Global Variables */

/* Local Variables */


/**
 * OpenPilot Main function:
 *
 * Initialize PiOS<BR>
 * Create the "System" task (SystemModInitializein Modules/System/systemmod.c) <BR>
 * Start FreeRTOS Scheduler (vTaskStartScheduler)<BR>
 * If something goes wrong, blink LED1 and LED2 every 100ms
 *
 */
int main()
{
    /* NOTE: Do NOT modify the following start-up sequence */
    /* Any new initialization functions should be added in OpenPilotInit() */
    vPortInitialiseBlocks();

    /* Brings up System using CMSIS functions, enables the LEDs. */
    PIOS_SYS_Init();

    SystemModStart();

    /* Start the FreeRTOS scheduler */
    // vTaskStartScheduler();

    /* If all is well we will never reach here as the scheduler will now be running. */
    /* Do some PIOS_LED_HEARTBEAT to user that something bad just happened */
    // PIOS_LED_Off(PIOS_LED_HEARTBEAT); \
    // for (;;) { \
    //     PIOS_LED_Toggle(PIOS_LED_HEARTBEAT); \
    //     PIOS_DELAY_WaitmS(100); \
    // }
    // ;

    return 0;
}