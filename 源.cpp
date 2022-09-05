#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

		数	据	的	类	型
  1. 内置类型
 int short long short float double
 
 整 型 家族:

  char 
  unsigned char  |  signed char	无符号数 与 有符号数

  short
	unsigned short [int] | signed short [int]

  int 
  unsigned int | signed int

	long
  unsigned long [int] | signed long [int]

	浮 点 型 家族

  float - 单精度浮点型
  double - 双精度浮点型

	构 造 类型(自定义类型)

	数组类型 - char[10] != int[5]
  结构体类型 struct
  枚举类型 enum
  联合类型 union

  指 针 类 型
int* pi;	// 大小均 4/8 字节
char* pc;
float* pf;
void* pv;

   空类型
 void  1.函数返回类型 2.函数的传参 3.指针类型
 2. void Add(void)

   计算机中整型有符号数三种表示方法 - 原反补
				 无符号数 - 原反补相同	有符号数里 正数 - 原反补相同

int main()
{
	int a = 20;
	0000000000000000000000000000010100 原
	0000000000000000000000000000010100 反
	0000 0000 000000000000000000 0001 0100 补
 4个2进制转化成1个16进制			1     4
 则0x 0 0 0 0 0 0 1 4		- 0x 代表16进制
	int b = -10;
	1000000000000000000000000000001010原
	1111111111111111111111111111110101 反
	1111 1111 1111 1111 1111 1111 1111 0110 补
	F     F	F	F		F	F	F	6 - 0xFFFFFFF6
	  &b 可以看到16进制	所以内存存整数，存二进制补码
	return 0;
}

  大端（存储）模式 - 大端.......... -  数据的低位保存在内存的高地址中，数据的高位保存在内存的低地址中
  小端（存储）模式  - 小端字节序存储模式 - 刚好相反
  int a=0x11223344 &a  很明显