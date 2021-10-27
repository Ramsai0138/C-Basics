#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short Int:\nsigned:%hd to %hd\n", SHRT_MIN,SHRT_MAX);
	printf("unsigned:%d to %hu\n",0, USHRT_MAX);
	
	printf("Int:\nsigned:%d to %d\n", INT_MIN,INT_MAX);
	printf("unsigned:%d to %ud\n",0, UINT_MAX);
	
	printf("LongInt:\nsigned:%ld to %ld\n", LONG_MIN,LONG_MAX);
	printf("unsigned:%d to %lu\n",0, ULONG_MAX);

	printf("Long Long Int:\nsigned:%lld to %lld\n", LONG_LONG_MIN,LONG_LONG_MAX);
	printf("unsigned:%d to %llu",0, ULONG_LONG_MAX);	
	}



	

