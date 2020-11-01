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
	int x=10,y=20,z=30;
	if((++x>y++<z--)+1)
	{
		printf("The condition is true\n");
	}
	else
	{
		printf("The condition is false\n");
	}
	
	
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