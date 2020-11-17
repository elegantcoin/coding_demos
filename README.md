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




## :fire: ���ȼ�˳���  
``` C++
// () x++  --y / % +   & |  &&  ||  ?:  ,
// printf getchar() ��Ҫ #include<stdio.h>
// cout<<bitset<8>(63)<<endl; 00111111
// cout<<std::dec<<00000010<<endl;  8
```
## :fire: ��ϰ��1
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


## :fire: �Ĵ���1
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
		z=::y;  //error,y ����ȫ��namespace �ĳ�Ա z=y;
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
		b=*a; //error,����, a ����ָ��,b= a
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


## :fire: ��ϰ��2

1.  ���´���������ʲô
``` C++
	#include<stdio.h>
	void main()
	{
		if(NULL)
		{
			printf("Inside the if block \n");
		}
		printf("Outside the if block\n"):   //error �������ð�Ÿ�Ϊ�ֺ�
	}
``` 
2.  ��ô���´�����������ʲô
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
3.  ��ô���´�����������ʲô
``` C++
#include<stdio.h>
	void main()
	{
		int a=55,b=90,c=81,d=22,r;
		r =a>b&&c>d?a>c?c<d?a:b:c:d; // a>b&&c>d,a>c,c<d are  False,False��False
		printf("Result is %d\n",r);  //22
	}

```


## :fire: �Ĵ���2

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
		if("A">> "B") // error,����, ��˵"A"> "B"
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
		if(c=a>b>NULL?NULL:-1:-2);  //error, ����ð��,ȥ���ֺ�
		{
			printf("Condition is true\n");
		};    //error ҲҪȥ���ֺ�
		else
		{
			printf("Condition is false \n");
		};  // ���Ӱ�첻��
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


## :fire: ��ϰ��3

1.����ִ�����i��ֵ�Ƕ���
``` C++
for (int i=0;i<=10;i++);  //10
```

2.����ִ��������ʲô��
``` C++
for( ; ; )  //��ѭ��
	{
		printf("Computer Programming"); 
	}
```

3.����ִ�����`counter`��ֵ�Ƕ��٣�
``` C++
int counter = 100;
	for( ; ; )
	{
		if(counter-- == 95)  //94
			break;
	}
```
4.����ִ�����`v`��ֵ�Ƕ��٣�
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
		v++;  // v=1, else�е�continue���� v++��䲻��ִ��
	}
```

5.����ִ�����`i`��ֵ�Ƕ��٣�
``` C++
int i;
for(i=10; 0 ; i--)
	{
		i--;  //i=10,  for �ڶ���Ϊ0��false����ִ�С�
	}
```

6.����ִ�����`i��j`��ֵ�Ƕ��٣�
``` C++
for(i=0;i<=6;i++) //7
	{
		for(j=i+1;j>=0;j--) //-1
		{
			printf("$");
		}
	}
```

7.���x��ֵΪ`98`������ִ�����`r`��ֵ�Ƕ��٣�
``` C++
while(x!=0)

	{
		r=x%10;   //9
		x=x/10;
	}
```

8.Ҫ��������µ����ݣ������Ӧ��ô�

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


9.д��������������ݣ�

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

10.д�������1,2,3��������ϣ������ظ���
[Example,  1 1 1 (��һ��), 1 1 2 (�ڶ���), 1 1 3 (������)�� 3 3 3 (���һ��)]

``` C++
int i,j;
for(i=0; i<=3; i++)
{
	int i, j, k;
	for (i = 1; i <= 3; i++)
		for (j = 1; j <= 3; j++)
			for (k = 1; k <= 3; k++)
				//if (i != j && j != k && k != i)  //�������ظ�
				printf("%d %d %d \n", i,j,k);
}
```

11.д��������������ݣ�

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

12.����`void`����ᱻ��ӡ���Σ�

``` C++
	I=50;
	do
	{
		printf("void");  //��ִ�У����жϣ�1��
	}
	while(I<50);
```

13.д�δ��룬����һ�����������������������1234�����4321��

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

## :fire: ��ϰ��4
1.���ߴ���дʲô�Ա��������a������Ԫ��
``` C++
int a[] ={10,15,20,45,32};
	for(int i=0; _____;i++)  //i<=4
	{
		printf("%d\n",a[i]);
	}
```

2.�½�һ������ int a[] ={10,15,20,45,32};printf()�����ʲô
	
``` C++
int a[] ={10,15,20,45,32};
printf("%d",a);  //13630280 ÿ�β�һ�������ص���a���׵�ַ��intֵ
//a	0x0000000000bbf7f8	int [5]
```

3.˼������������ʼ������ȷ��

``` C++
int a[] ={10,15,20,45,32};
printf("%d",a);  //13630280 ÿ�β�һ�������ص���a���׵�ַ��intֵ
//a	0x0000000000bbf7f8	int [5]
```

4. ���г�ʼ���ַ����ķ�ʽ�Ƿ���ȷ��

``` C++
char a[]={'h','a','t'}; // '\0'
char a[]= "hat"; // ���Բ�ָ��Ԫ�ظ�����printf(��%s��, a) ��������ַ���
```


5. ��գ�ʹ�����齵�������
``` C++
int a[5] ={10,15,20,45,32};
for(_____;_____;_____)  //int i = 0;i<5-1;i++
{
	for(_____;_____;_____) //int j=0;j<5-1-i;j++  �Ѿ��źò���Ҫ����
	{
		if(a[j+1]>a[j]) //����������ð�����򣬸ĳ� < ��������
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
}
```
6. ���M��r�׷������ʹ�ô������M��ת�ã�
``` C++
for(i=0;_____;i++)
	{
		for(j=0;_____;j++)
		{
			cout<<a[i][j];
		}
	}
```

7. 4.  ���µĺ�������func1(9076,0)���õ�:
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



## :fire: �Ĵ���4

1.
``` C++
	#include<stdio.h>
		void f1(int i)
	{
		i++;
	} 
	void main()
	{
		int i;
		for(i=0;i<10; f1(i))   //��ѭ��
		{
			printf("Computer programming\n");
		}
	}
```

2.
``` C++
	#include<stdio.h>
		void f1(int i)
	{
		i++;
	} 
	void main()
	{
		int i;
		for(i=0;i<10; f1(i))   //��ѭ��
		{
			printf("Computer programming\n");
		}
	}
```






















