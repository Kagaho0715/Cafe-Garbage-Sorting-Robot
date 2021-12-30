#include "rm_hal_lib.h"
#include "cmsis_os.h"
#include "uart_device.h"

void uart_transmit(const void*argu){
	if(rc.sw1==1 || rc.sw1==0){
		write_uart(USER_UART3,"a\n",2); //auto mode
	} else {
		//ң����ͨ���źŷŴ�4����Ӱ��������˶��ٶ�
		write_uart(USER_UART3,"m\n",2); // manual mode
	}
	osDelay(100);
}
