#include "init.h"
#include "scheduler.h"

/*----------------------------------------------------------
 + 实现功能：主函数
----------------------------------------------------------*/
int main(void)
{
    /* 飞控初始化 */
    Light_Init();

    /* 主循环 */
    while(1)
	{
		Main_Loop();
	}
}
