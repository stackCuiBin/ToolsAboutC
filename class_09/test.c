/*************************************************************************
 ******* File Name: test.c
 ******* Author: bb.cui
 ******* Mail: bb.cui@foxmail.com 
 ******* Created Time: Thu 12 Mar 2020 10:05:47 PM CST
 ************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
	int result = 0;
	int input = 1;

	asm volatile(
		"movl %1, %0\n"
		: "=r"(result)
		: "r"(input)
		);

	printf("result = %d\n", result);
	printf("input = %d\n", input);

	int a = 1;
	int b = 2;

	asm volatile(
		"movl %%eax, %%ecx\n"
		"movl %%ebx, %%eax\n"
		"movl %%ecx, %%ebx\n"
		: "=a"(a), "=b"(b)
		: "a"(a), "b"(b)
		);

	printf("a = %d\n", a);
	printf("b = %d\n", b);

    return 0;
}

