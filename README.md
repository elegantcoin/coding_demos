# coding_demos
C++ coding demos

<p align="center">
    <a href="https://github.com/elegantcoin/coding_demos"><img src="https://img.shields.io/badge/status-updating-brightgreen.svg"></a>
    <a href="https://github.com/topics/cplusplus"><img src="https://img.shields.io/github/languages/top/elegantcoin/coding_demos.svg"></a>
    <a href="https://github.com/elegantcoin/coding_demos"><img src="https://img.shields.io/badge/platform-Windows%7CLinux%7CmacOS-660066.svg"></a>
    <a href="https://opensource.org/licenses/mit-license.php"><img src="https://badges.frapsoft.com/os/mit/mit.svg"></a>
    <a href="https://github.com/elegantcoin/coding_demos/stargazers"><img src="https://img.shields.io/github/stars/elegantcoin/coding_demos.svg?logo=github"></a>
    <a href="https://github.com/elegantcoin/coding_demos/network/members"><img src="https://img.shields.io/github/forks/elegantcoin/coding_demos.svg?color=blue&logo=github"></a>

</p>
<br />




## :fire: 优先级顺序表  
``` C++
// () x++  --y / % +   & |  &&  ||  ?:  ,
// printf getchar() 需要 #include<stdio.h>
// cout<<bitset<8>(63)<<endl; 00111111
// cout<<std::dec<<00000010<<endl;  8
```
## :fire: 练习题1
1. 以下代码输出什么？

``` C++
#include<stdio.h>
	void main()
	{
		int k=3, l=4, m;
		m=++k + l--;
		printf("Value of m %d\n",m);  
		//8 ++k 先自增，再赋值 =4; l-- 先赋值  =4  m=4+4=8，后自减l=3
		m=k++ + -- l;
		printf("Value of m %d\n", m);  //6
		//k++ 先赋值，再自增 =4; --l,先自减,由于之前还自减， = 3-1=2; m=4+2=6
	}
```

2. 以下代码c的结果是什么？
``` C++
	int a = 29, b = 10; 
	float c;
	c = (float)(a/b);  //先int截断为2，然后强制转换为float
```
	MS2010 中 c= 2.0000000


3. 下面代码的输出是什么？
``` C++
int a =12;
	printf("Result is %f", a+2/3-1/2);
```
	%f需要的是64位的double，现在只提供了低32位，高32位只能依赖栈里原有的数据。double类型最高12位小于1003，对应的十进制数就肯定小于0.000001，所以很容易就会输出0.000000

4.以下程序的输出是什么？
``` C++
#include<stdio.h>
	void main()
	{
		int b = 3, a = 2, ab = 4;
		int in = '2' * '2';
		char ch = 'c' ;
		printf("%c %c",ch,(++ch));  //自增再赋值，"d","d"
		printf("\n");
		printf("%d %d %d",a,a,(++a)); //自增再赋值,int值 3 3 3
		printf("\n");
		printf("%d %d %d",b,b,(++b)); // 自增再赋值,int值 4 4 4
		printf("\n");
		printf("%d %d %d",ab,ab,(++ab)); //5 5 5
		printf("\n");
		printf("%d %d",a,!!a);   // 3 1  !(!a), !a=0, !(!a)=1
		printf("\n %d %d",in , ch); //	50*50; 100
	}
``` 

5.以下程序输出什么？
``` C++
#include<stdio.h>
	void main( )
		{
			int a = 3;
			printf("%d %d %d %d\n",a,a++,++a,(--a)--); //3 2 3 2 ？？？？？
		}
``` 

6.以下程序输出什么？
``` C++
#include<stdio.h>
	void main()
	{
		int a, b, c;
		a = 2 ; b = 5 ; c = 10 ;
		printf("First Value = %d\n", (a + b *- c));  //2+5*(-10) =-48
		printf("Second Value = %d\n", (-- c/b * c- a)); //  9/5*9-2    9/5=1   9-2=7
		printf("Third Value = %d\n", (-- a + ++b%a)); // (--a) + (++b)%a  =   1 +6%2 =1
	}
```
7.下列代码有错的话，请改错。
``` C++
int x = 4, y = 9,z=55,r=22,p,q,t,v,w;
char a ='a',b='B',c,d;
int e =10,f=3,g=2;
c=a+b+'\n';
d=b--;
p=(x+y++-z--)*(z++ -y )/x*2+(x-y);
q = p*x+y%(z++ - x--);
t = x | y|z--|y++& d;
v =x && y ||z | p;
w=e^f^g;
```
没有错误。


## :fire: 改错题1
1.
``` C++
#include<stdio.h>
	void main()
	{
		int a=10,b;
		b=++a++;   // (++a)++    b=11
		printf("Value of b is %d\n",b);
	}
```

2.
``` C++
#include<stdio.h>
	void main()
	{
		int a=10,b=10,c;
		c=++a>=---b++;   //error, c=++a>=-(--b)++     c=1
		printf("Value of c is %d\n",c);
	}
```

3.
``` C++
#include<stdio.h>
	void main()
	{
		int y=10,z;
		z=::y;  //error,y 不是全局namespace 的成员 z=y;
		printf("Value of z is %d\n",z);
	}

```

4. 
``` C++
#include<stdio.h>
	void main()
	{
		int a=10,b=20;
		printf("Value of a is %d\n",a);
		printf("Value of b is %d\n",b);
		a=+b;
		b=*a; //error,干嘛, a 不是指针,b= a
		printf("Value of a is %d\n",a);
		printf("Value of b is %d\n",b);
	}
``` 
  
5. 
``` C++
#include<stdio.h>
	void main()
	{
		float p=100.365 ,q=200.98 ,r;
		r=sizeof(sizeof(sizeof(p+q)));
		printf("Value of r is %f\n",r); //8.0000000
	}
``` 
  
6. 
``` C++
#include<stdio.h>
	void main()
	{
		int a=75,b=90,c;
		c=++a>>b++<<--b;
		printf("Value of c is %d\n",c); // c = 76>>89<<89 =0
	}
``` 


## :fire: 练习题2

1.  以下代码的输出是什么
``` C++
	#include<stdio.h>
	void main()
	{
		if(NULL)
		{
			printf("Inside the if block \n");
		}
		printf("Outside the if block\n"):   //error 编译错误，冒号改为分号
	}
``` 
2.  那么以下代码的输出又是什么
``` C++
#include<stdio.h>
		void main()
	{
		int x=10,y=20,z=30;
		if(++(++x>y++<z--))   //error,(++x>y++<z--)+1 true
		{
			printf("The condition is true\n");
		}
		else
		{
			printf("The condition is false\n");
		}
	}
```
3.  那么以下代码的输出又是什么
``` C++
#include<stdio.h>
	void main()
	{
		int a=55,b=90,c=81,d=22,r;
		r =a>b&&c>d?a>c?c<d?a:b:c:d; // a>b&&c>d,a>c,c<d are  False,False，False
		printf("Result is %d\n",r);  //22
	}

```


## :fire: 改错题2

1.
``` C++
#include<stdio.h>
void main()
{
	int a=NULL;
	if(printf("Value of a is %d\n",a))  //printed
	{
		printf("Inside the if block\n"); //printed
	}
	else
	{
		printf("Inside the else block\n");
	}
	printf("End of the code\n"); //printed
}
```

2.
``` C++
#include<stdio.h>
	void main()
	{
		if("A">> "B") // error,干嘛, 想说"A"> "B"
		{
			printf("A is greater than B\n");
		}

		else
		{
			printf("A is not greater than \n"); // "A"> "B"
		}
	}
```

3.
``` C++
#include<stdio.h>
		void main()
	{
		int a,b,c;
		printf("Enter the values of a b\n");
		scanf("%d %d",&a,&b);
		if(c=a>b>NULL?NULL:-1:-2);  //error, 多了冒号,去掉分号
		{
			printf("Condition is true\n");
		};    //error 也要去掉分号
		else
		{
			printf("Condition is false \n");
		};  // 这个影响不大
	}
```

4.
``` C++
#include<stdio.h>
	void main()
{
	int x=10,y=20,z=30;
	if(x<y>z>10>20<30)  //true
	{
		printf("The condition is true\n");
	}
	else
	{
		printf("The condition is false\n");
	}
}
```

5.
``` C++
#include<stdio.h>
	void main()
	{
		int a,b,c;
		printf("Enter the values of a b\n");
		scanf("%d %d",&a,&b);
        if(a=b==b)  //true
        {
            printf("TRUE\n");
        }
        else
        {
            printf("FALSE\n");
        }
	}
```


## :fire: 练习题3




