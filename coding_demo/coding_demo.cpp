#include "coding_demo.h"
#include <stdio.h>


//---------------------------------------func---------------------------------------
// () x++  --y / % +   & |  &&  ||  ?:  ,
// printf getchar() 需要 #include<stdio.h>
// cout<<bitset<8>(63)<<endl; 00111111
// cout<<std::dec<<00000010<<endl;  8



//---------------------------------------func---------------------------------------

void func()
{
	int a=10,b=20;
	printf("Value of a is %d\n",a);
	printf("Value of b is %d\n",b);
	a=+b;
	b=*a;
	printf("Value of a is %d\n",a);
	printf("Value of b is %d\n",b);
	
	
}


//---------------------------------------func---------------------------------------

void coding_demo()
{
	func();
	getchar();
}



//---------------------------------------helper---------------------------------------
//#include<cstring>
//#include<bitset> //for 二进制
//#include<iostream>
//#include<vector>
//#include<stdio.h>
//using namespace std;


// () x++  --y / % + >  & |  &&  ||  ?:  ,
// cout<<bitset<8>(63)<<endl; 00111111
// cout<<std::dec<<00000010<<endl;  8