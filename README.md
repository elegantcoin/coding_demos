# coding_demos
C++ coding demos

<p align="center">
    <a href="https://github.com/elegantcoin/coding_demos"><img src="https://img.shields.io/badge/status-updating-brightgreen.svg"></a>
    <a href="https://github.com/python/cpython"><img src="https://img.shields.io/badge/Python-3.7-FF1493.svg"></a>
    <a href="https://github.com/elegantcoin/coding_demos"><img src="https://img.shields.io/badge/platform-Windows%7CLinux%7CmacOS-660066.svg"></a>
    <a href="https://opensource.org/licenses/mit-license.php"><img src="https://badges.frapsoft.com/os/mit/mit.svg"></a>
    <a href="https://github.com/elegantcoin/coding_demos/stargazers"><img src="https://img.shields.io/github/stars/elegantcoin/coding_demos.svg?logo=github"></a>
    <a href="https://github.com/elegantcoin/coding_demos/network/members"><img src="https://img.shields.io/github/forks/elegantcoin/coding_demos.svg?color=blue&logo=github"></a>
    <a href="https://www.python.org/"><img src="https://upload.wikimedia.org/wikipedia/commons/c/c3/Python-logo-notext.svg" align="right" height="48" width="48" ></a>
</p>
<br />




���ȼ�˳���  
``` C++
// () x++  --y / % +   & |  &&  ||  ?:  ,
// printf getchar() ��Ҫ #include<stdio.h>
// cout<<bitset<8>(63)<<endl; 00111111
// cout<<std::dec<<00000010<<endl;  8
```
# ��ϰ��
1. ���´������ʲô��

``` C++
#include<stdio.h>
	void main()
	{
		int k=3, l=4, m;
		m=++k + l--;
		printf("Value of m %d\n",m);  
		//8 ++k ���������ٸ�ֵ =4; l-- �ȸ�ֵ  =4  m=4+4=8�����Լ�l=3
		m=k++ + -- l;
		printf("Value of m %d\n", m);  //6
		//k++ �ȸ�ֵ�������� =4; --l,���Լ�,����֮ǰ���Լ��� = 3-1=2; m=4+2=6
	}
```

2. ���´���c�Ľ����ʲô��
``` C++
	int a = 29, b = 10; 
	float c;
	c = (float)(a/b);  //��int�ض�Ϊ2��Ȼ��ǿ��ת��Ϊfloat
```
	MS2010 �� c= 2.0000000


3. �������������ʲô��
``` C++
int a =12;
	printf("Result is %f", a+2/3-1/2);
```
	%f��Ҫ����64λ��double������ֻ�ṩ�˵�32λ����32λֻ������ջ��ԭ�е����ݡ�double�������12λС��1003����Ӧ��ʮ�������Ϳ϶�С��0.000001�����Ժ����׾ͻ����0.000000

4.���³���������ʲô��
``` C++
#include<stdio.h>
	void main()
	{
		int b = 3, a = 2, ab = 4;
		int in = '2' * '2';
		char ch = 'c' ;
		printf("%c %c",ch,(++ch));  //�����ٸ�ֵ��"d","d"
		printf("\n");
		printf("%d %d %d",a,a,(++a)); //�����ٸ�ֵ,intֵ 3 3 3
		printf("\n");
		printf("%d %d %d",b,b,(++b)); // �����ٸ�ֵ,intֵ 4 4 4
		printf("\n");
		printf("%d %d %d",ab,ab,(++ab)); //5 5 5
		printf("\n");
		printf("%d %d",a,!!a);   // 3 1  !(!a), !a=0, !(!a)=1
		printf("\n %d %d",in , ch); //	50*50; 100
	}
``` 

5.���³������ʲô��
``` C++
#include<stdio.h>
	void main( )
		{
			int a = 3;
			printf("%d %d %d %d\n",a,a++,++a,(--a)--); //3 2 3 2 ����������
		}
``` 

6.���³������ʲô��
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
7.���д����д�Ļ�����Ĵ�
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
û�д���


# �Ĵ���
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
		c=++a>=---b++;
		printf("Value of c is %d\n",c);
	}
```


  

















