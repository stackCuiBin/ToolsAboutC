/*************************************************************************
 ******* File Name: main.c
 ******* Author: bb.cui
 ******* Mail: bb.cui@foxmail.com 
 ******* Created Time: Mon 16 Mar 2020 12:27:32 AM CST
 ************************************************************************/

#include <stdio.h>
#include <unistd.h>

//extern const volatile int g_ready;
extern const int g_ready;
extern void launch_device(void);

int main(int argc, char* argv[])
{
	launch_device();

	while( g_ready == 0)
	{
		sleep(1);

		printf("main() - launch device : g_ready = %d\n", g_ready);
	}

	printf("main() - launch device finished : g_ready = %d\n", g_ready);


    return 0;
}

