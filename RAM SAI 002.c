#include<stdio.h>
void main()
{   
     short int  a;
     
     a = -32767;
     
     printf("Short signed int        :%hd\n",a);
     
     short unsigned int  b;
     
    b  =  65535;     
    
    printf("Short unsigned int      :%hu\n",b); 
     
     int  c;
     
     c = -2147483647;
     
     printf("int signed              :%d\n",c); 
     
     
      unsigned int  d;
     
     d = 4294967295;
     
     printf("int unsigned            :%u\n",d); 
     
     
          
     long int  e;
     
     e = -2147483647 ;
     
     printf("long signed int         :%ld\n",e); 
     
     
     long unsigned int  f;
     
     f = 4294967295;
     
     printf("long unsigned int       :%lu\n",f); 
     
     
     
          
    long long int  g;
     
     g = -922337203685477580 ;
     
     printf("long long signed int    :%lld\n",g); 
     
     
    long long  unsigned int  h;
     
     h = 18446744073704551615;
     
     printf("long long unsigned int  :%llu\n",h); 
	
	
}
