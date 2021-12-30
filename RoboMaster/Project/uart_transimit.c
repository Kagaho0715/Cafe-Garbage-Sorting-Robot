#include "rm_hal_lib.h"
#include "cmsis_os.h"
#include "uart_device.h"

void uart_transmit(const void*argu){
if(rc.sw1==1 || rc.sw1==0){
			speed_x = spd[0]*4/4;
			speed_y = spd[1]*4/4;
			speed_turn = spd[2]*4/4;
			write_uart(USER_UART3,"a\n",2); //auto mode
		} else {
			//ң����ͨ���źŷŴ�4����Ӱ��������˶��ٶ�
			speed_x = rc.ch2*4/4;
			speed_y = rc.ch1*4/4;
			speed_turn = rc.ch3*4/4;
			write_uart(USER_UART3,"m\n",2); // manual mode
		}