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

1.代码执行完后i的值是多少
``` C++
for (int i=0;i<=10;i++);  //10
```

2.代码执行完后输出什么？
``` C++
for( ; ; )  //死循环
	{
		printf("Computer Programming"); 
	}
```

3.代码执行完后`counter`的值是多少？
``` C++
int counter = 100;
	for( ; ; )
	{
		if(counter-- == 95)  //94
			break;
	}
```
4.代码执行完后`v`的值是多少？
``` C++
int v=1;
	while(v<=10)
	{
		if(v>8)
		{
			break;
			printf("%d\n",v);
		}
		else
		{
			printf("%d\n",v+1);
			continue;
		}
		v++;  // v=1, else中的continue导致 v++这句不被执行
	}
```

5.代码执行完后`i`的值是多少？
``` C++
int i;
for(i=10; 0 ; i--)
	{
		i--;  //i=10,  for 第二项为0（false）不执行。
	}
```

6.代码执行完后`i，j`的值是多少？
``` C++
for(i=0;i<=6;i++) //7
	{
		for(j=i+1;j>=0;j--) //-1
		{
			printf("$");
		}
	}
```

7.如果x的值为`98`，代码执行完后`r`的值是多少？
``` C++
while(x!=0)

	{
		r=x%10;   //9
		x=x/10;
	}
```

8.要想输出如下的内容，则横线应怎么填？

	P
	P Q
	P Q R
	P Q R S

``` C++
char v;
	for(i=0; i<=_____; i++)
	{
	v='P';
	for(j=___;j>=___;____)
	{
		printf("%c",v);
		v=v+1;
	}
	printf("\n");
	}
```
	(a) i<=4 and j=0;j<=4;j++
	(b) i<=3 and j=0;j>=i-1;j--
	(c) i<=3 and j=1;j<=i+1;j++    //right answer
	(d) i<=3 and j=0;j<=i+2;j++


9.写代码输出如下内容？

	A
	A B A
	A B C B A
	A B C D C B A

``` C++
int i,j;
for(i=0; i<=3; i++)
{
	char v='A';
	for(j=1;j<=i+1;j++)
	{
		printf("%c",v);
		v=v+1;
	}
	for(j=i-1;j>=0;j--)
	{
		v=v-1;
		printf("%c",v-1);
	}
	printf("\n");
}
```

10.写代码输出1,2,3的所有组合，允许重复，
[Example,  1 1 1 (第一行), 1 1 2 (第二行), 1 1 3 (第三行)… 3 3 3 (最后一行)]

``` C++
int i,j;
for(i=0; i<=3; i++)
{
	int i, j, k;
	for (i = 1; i <= 3; i++)
		for (j = 1; j <= 3; j++)
			for (k = 1; k <= 3; k++)
				//if (i != j && j != k && k != i)  //不允许重复
				printf("%d %d %d \n", i,j,k);
}
```

11.写代码输出如下内容？

	1
	2 2
	3 3 3
	4 4 4 4

``` C++
int i,j;
	for(i=1; i<=4; i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
```

12.以下`void`代码会被打印几次？

``` C++
	I=50;
	do
	{
		printf("void");  //先执行，后判断，1次
	}
	while(I<50);
```

13.写段代码，接收一个整数，逆序输出，如输入1234，输出4321？

``` C++
int x;
	int r;
	cin>>x;
	while (x!= 0)
	{
		r = x%10;
		x = x/10;
		cout<<r;
	}
```

## :fire: 练习题4
1.横线处填写什么以便输出数组a的所有元素
``` C++
int a[] ={10,15,20,45,32};
	for(int i=0; _____;i++)  //i<=4
	{
		printf("%d\n",a[i]);
	}
```

2.新建一个数组 int a[] ={10,15,20,45,32};printf()将输出什么
	
``` C++
int a[] ={10,15,20,45,32};
printf("%d",a);  //13630280 每次不一样，返回的是a的首地址的int值
//a	0x0000000000bbf7f8	int [5]
```

3.思考以下两个初始化的正确性

``` C++
int a[] ={10,15,20,45,32};
printf("%d",a);  //13630280 每次不一样，返回的是a的首地址的int值
//a	0x0000000000bbf7f8	int [5]
```

4. 下列初始化字符串的方式是否正确？

``` C++
char a[]={'h','a','t'}; // '\0'
char a[]= "hat"; // 可以不指定元素个数，printf(“%s”, a) 输出整个字符串
```


5. 填空，使得数组降序输出？
``` C++
int a[5] ={10,15,20,45,32};
for(_____;_____;_____)  //int i = 0;i<5-1;i++
{
	for(_____;_____;_____) //int j=0;j<5-1-i;j++  已经排好不需要再排
	{
		if(a[j+1]>a[j]) //两两交换，冒泡排序，改成 < 就是升序
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
}
```
6. 如果M是r阶方阵，填空使得代码输出M的转置？
``` C++
for(i=0;_____;i++)
	{
		for(j=0;_____;j++)
		{
			cout<<a[i][j];
		}
	}
```

7. 4.  以下的函数调用func1(9076,0)将得到:
``` C++
void func1(int n,int total)
	{
		int p=0,j=0;
		if(n==0) return;
		p=n%10;
		j=n/10;
		total=total+p;
		func1(j,total);
		printf("%d ",p);   // 9 0 7 6
	}
```

	(a) 9 0 7 6 22
	(b) 9 0 7 6 
	(c) 6 7 0 9 22
	(d) 6 7 0 9 



## :fire: 改错题4

1.
``` C++
	#include<stdio.h>
	void f1(int i) //f1 函数需要有返回值，否则i一直是局部
	{
		i++;
	} 
	void main()
	{
		int i;  // i需要放在main()函数外面，全局作用
		for(i=0;i<10; f1(i))   //死循环
		{
			printf("Computer programming\n");
		}
	}
```

2.
``` C++
#include<stdio.h>
	void main()
	{
		printf("start of main function\n");
		display();
		printf("End of main function\n");
	} 
	void display()   //放main 前面 先定义 再调用
	{
		printf("Inside the display function\n");
	}
```

3.
``` C++
#include<stdio.h>
	void add(int,int)   //加上;   woid 改为 int
	void main()
	{
		int result;
		result= add(10,20)+ add(50,60);
		printf("Result of addition is %d\n",result);
	} 
	void add(int p,int q)  // int
	{
		int result;
		result=p+q; //return result;
	}
```


4.
``` C++
#include<stdio.h>
void main() //void main(int p)
	{
		main(10); //main改为 my_main
	} 
	void main(int p) //main函数不能重载，main改为 my_main
	{
		printf("Inside a user-defined main function\n");
		p++;
		printf(" The value of variable p is %d\n",p);
	}
```

5.
``` C++
#include<stdio.h>
	int i=0;
	int init_fn();
	int condition_fn();
	int change_fn();
	void main()
	{
		for(init_fn();condition_fn();change_fn())
		{
			printf("Computer programming\n");
		}
	}
	int init_fn()
	{
		i=1;  //error,缺返回值
	}
	int condition_fn() 
	{
		return i<=10;
	}
	int change_fn() 
	{
		return ++i;
	}

```

## :fire: 练习题5
1.以下语句的作用是什么？
``` C++
	int a=10;
	int *p=&a;
	
	*p=*p+1;   //解引用，值+1
```
2.以下语句的作用是什么？
``` C++
#include< stdio.h>
	void f1(int);
	void main()
	{
		int x=10;
		f1(x);
		printf("%d",x);//仍然输出10，f1内的x是局部，不会影响main中的x
	}
	void f1(int x);  //想干嘛，多了个分号
	{
		x=x+10;
	}
```

3.`*p++`的值是多少？
``` C++
int *P, i[3];

	i[0]=3; i[1]=1; i[2]=2;
	P=&i[1];
```

	//结果为2，++的优先级高于*

4.代码输出什么？
``` C++
	char a[20];
	char *p="string";
	int len=strlen(p); /*strlen(p) gives length of string p*/
	for(i=0;i<len;i++)
		a[i]=p[len-i]; //p 的最末是'\0',改为p[len-i-1],最后添上'\0'
		printf("%s",a);  //什么也不输出，
```

5.代码输出什么？
``` C++
	int a[]={10,20,30,40};
	int *p;
	p=a;
	printf("%d",*(p+5)); //-858993460  数组越界  p+3将输出40
```

6.假设a的内存地址是1000，代码输出什么？
``` C++
	int a=10;
	int *p;
	p=&a;

	printf("%d\n", (*p)++); //10, 解引用，并把a的值改为11
	printf("%d\n",*p++); //11，先指针本身向后移动，地址为 1004，然后解引用a
	printf("%d\n",p--);//1004，返回指针地址1004，然后指针向前移动到1000
	printf("%d\n",p++); //1000，返回指针地址1000，然后向后移动到1004
	printf("%d\n",*p++); //-858993460，再移动指针到1008，解引用，
```

6.假设a的内存地址是1000，b的地址是2000，代码输出什么？
``` C++
	int a=50,b=75;
	int *p,*q;
	p=&a;
	q=&b;
	printf("%d\n",*p+10);  //60
	printf("%d\n",p+b); //1000+300 =1300
	printf("%d\n",(*p) +a); //100
	printf("%d\n",*p +*p); //100
	printf("%d\n",a+p+b); //1000+125*4=1500 
	printf("%d\n",q+p+b);  //error，两个指针不能相加
```

7.定义以下的结构体，则结果提Abc的大小是？
``` C++
	struct Abc
	{
		int a;  //2 16位编辑器
		char b; //1
		float c; //4
	};
```
8.union DATA 的大小是？
``` C++
	union DATA
	{
		int a[100]; //200 16位编辑器 DATA 是一个 union, 变量公用空间.
		char b;
		float c;
	};
```

9.以下结构体定义有没有问题？
``` C++
	struct Employee
	{
		int id;
		char name[100];
		Employee e[100]; //编译错误，不能嵌套，可以定义为指针，也就是链表了
	};
```

10.假设有个类class叫 X ，下面哪个是类x的构造函数
``` C++
(a) 
	void X()
	{
		/*initialization statements*/
	}
(b) 
	X()
	{
		int o1;
		/*initialization statements*/
		return o1;
	}
(c) 
	X()
	{
		/*initialization statements*/
	}
	
(d) 
	以上都是.
```



## :fire: 改错题5


