/*************************************************************************
 ******* File Name: device.c
 ******* Author: bb.cui
 ******* Mail: bb.cui@foxmail.com 
 ******* Created Time: Mon 16 Mar 2020 12:31:27 AM CST
 ************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

//volatile int g_ready = 0;
int g_ready = 0;

void* init_device(void* args)
{
	sleep(5);
	g_ready = 1;

	printf("init_device() - g_ready = %d\n", g_ready);
}

void launch_device(void)
{
	pthread_t tid = 0;

	pthread_create(&tid, NULL, init_device, NULL);

}

