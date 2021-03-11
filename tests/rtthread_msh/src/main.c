#include "nuclei_sdk_soc.h"
#include <rtthread.h>

void nsdk(int argc, char* argv[])
{
    rt_kprintf("Hello Nuclei SDK!\n");
}
MSH_CMD_EXPORT(nsdk, msh nuclei sdk demo)


int main(void)
{
    rt_kprintf("Hello RT-Thread!\n");
    while (1) {
        rt_thread_mdelay(1000);
    }
}
