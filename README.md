# C语言笔记

## GCC常用命令

编译为可执行文件

 `gcc -o hello hello.c`

生成汇编代码

 `gcc -S file_name`

仅执行编译操作，不进行连接操作

 `gcc -c file_name`

## 第一个C程序

``` c
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    printf("Hello, Linux.\n");
    exit(0);
}
```

``` c
#include<stdio.h>
int main()
{
    printf("Hello World!");
    getchar();
    return 0;
}
```

程序分析：

* `#include`是C语言的预处理指令，用来引入`<stdio.h>`等系统头文件。`stdio.h`中包含了很多和输入输出相关的系统函数，如果在程序中调用`printf`函数，就必须引入该头文件。

* `main`是函数名称，表示主函数。一个C语言程序无论多么简单或多么复杂，都必须有一个程序执行入口，这个入口就是主函数`main()`。`main`函数前面的`int`表示主函数执行完毕，会返回`int`（整型）类型数据。

* `{`表示函数开始

* `printf`是C语言库函数，`printf`函数会将双引号中的字符串输出。

* `getchar`是C语言库函数，直到用户输入回车键才结束在此之前它会一直等待。

* `return 0`表示`main`函数执行到此处时结束，并返回整数0

* `}`表示函数结束

* 程序代码是由指令和数据组成

* 每个C语言程序都必须有一个主函数，函数体使用`{}`包裹。主函数由系统进行调用，当执行一段C程序时，必须找到该程序的主函数，从主函数开始执行。

## 数据类型和变量

c语言程序中，包含字面量和变量。

### 字面量

字面量指的是数值固定的量。

#### 1. 整型（整数类型）

``` c
#include <stdio.h>

int main()
{
    printf("%d\n", 200);
    printf("%d\n", -100);
    getchar();
    return 0;
}
```

这里的 `%d` 跟python中是一样的。

#### 2. 浮点型

``` c
#include <stdio.h>

int main()
{
    printf("%f\n", 3.14);
    printf("%f\n", -12.2);
    getchar();
    return 0;
}
```

默认情况下，输出的浮点型保留小数点后6位数字。

#### 3. 字符型

在程序中，使用英文单引号括起来的字符被称为字符型。

``` c
#include <stdio.h>

int main()
{
    printf("%c\n", 'A');
    printf("%c\n", '#');
    printf("%c\n", '1');
    printf("%c\n", '=');
    printf("%c\n", '?');
    getchar();
    return 0;
}
```

**注意：字符型只能是单个字符**

#### 4. 字符串

在程序中，使用英文引号将若干个字符括起来的都是字符串。

``` c
#include <stdio.h>

int main()
{
    printf("123\n");
    printf("www.example.com");
    getchar();
    return 0;
}
```

**注意：字符串只能用双引号包裹**

### 变量

在c语言中，一个合法的变量由3部分组成：变量类型、变量名、变量值。

变量类型：用来规定变量对应内存空间的大小和能盛放的东西。

变量名：用来标记变量对应的内存空间。

变量值：变量值是变量名标记内存空间中的数据。

### 标识符与关键字

#### 标识符

在c语言中，用来对变量，函数，数组等命名的字符序列被称为标识符。

标识符命名规范：

1. 只能由英文字母、数字或下划线组成。
2. 第一个字符只能是字母或下划线。
3. 区分大小写。
4. 不能是关键字

#### 关键字

c语言中具有特殊用途的单词被称为关键字。

### 基本数据类型

定义变量并赋初值的语法：变量类型 变量名=变量值；

#### 1. 整数类型

int可以定义整数类型。int类型数据在printf函数中一般采用 `%d` 格式进行输出， `%d` 表示“十进制整数”

``` c
#include <stdio.h>

int main()
{
    int a = 200;
    printf("%d\n", a);
    getchar();
    return 0;
}
```

#### 2. 浮点数类型

浮点型有两种：

单精度浮点型（float）

双精度浮点型（double）

**注意：给float赋值字面量的时候需要以f结尾**

``` c
#include <stdio.h>

int main()
{
    float f = 3.14f;
    double d = 3.14;
    printf("%f\n", f);
    printf("%lf\n", d);
    getchar();
    return 0;
}
```

#### 3. 字符型

char类型

``` c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char c = 'A';
    printf("%c\n", c);
    exit(0);
}
```

#### 4. 转义字符

在c语言中，有一类特殊字符，该字符是以字符 `\` 开头的字符序列。由于这类字符无法用一般形式表示，只能采用这种特殊的形式表示，这类字符被称为转义字符。

1. `\n`回车换行

``` c
   #include <stdio.h>
   #include <stdlib.h>
   
   int main(int argc, char **argv)
   {
       printf("www.example.com\n");
       printf("http://www.example.\ncom\n");
       exit(0);
   }
```

2. `\"` 代表双引号字符（“）

``` c
   #include <stdio.h>
   #include <stdlib.h>
   
   int main(int argc, char **argv)
   {
       printf("www.example.\"com\n");
       exit(0);
   }
```

3. `\\` 表示单斜线`\`

``` c
   #include <stdio.h>
   #include <stdlib.h>
   
   int main(int argc, char **argv)
   {
       printf("%c\n", '\\');
       printf("www.\\example.com\n");
       exit(0);
   }
```

#### 5. printf与数据类型

| 占位符 | 类型   | 说明                         |
| ------ | ------ | ---------------------------- |
| `%d` | int    | 以十进制输出                 |
| `f` | float  | 指定精度， `%.2f` 保留两位小数 |
| `lf` | double |                              |
| `%c` | char   | 也可以用 `%d` 来输出ASCII码    |
| `%s` | 字符串 |                              |

### 注释

单行注释： `//`

多行注释（块注释）： `/* */`

### 变量

#### 定义变量

在c语言中，变量只有被定义，才能使用，定义变量有两种形式：

1.  第一种，先定义后赋值：

   

``` text
   变量类型 变量名；
   变量名 = 数据；
```

2. 第二种，定义并赋值

   

``` text
   变量类型 变量名 =  数据；
```

#### 引用变量

变量就是一个数据的名字，可以在代码中通过引用变量使用变量。

1. 给变量进行赋值。
2. 读取变量中保存的数据。

#### 定义多个变量

c语言中，定义变量有两种形式：

1. 第一种，在一行语句中定义多个变量

   

``` text
   变量类型 变量名1, 变量名2,...;
```

2. 第二种，多行语句定义多个变量

   

``` text
   变量类型 变量名1；
   变量类型 变量名2；
```

``` c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 100, b = 200;
    int c = 300;
    int d = 400;
    int e, f;
    e = 500;
    f = 600;
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("c=%d\n", c);
    printf("d=%d\n", d);
    printf("e=%d\n", e);
    printf("f=%d\n", f);
    exit(0);
}
```

#### 语句与语句块

在c语言中，程序执行的最小单位为语句，一条合法的语句必须在末尾有一个分号。

c语言中的常用语句：

1. 赋值语句
2. 函数调用语句
3. 空语句
4. 复合语句
5. 控制语句

##### 赋值语句

赋值语句是c语言中最基本的语句，需要使用到赋值符号=，该符号的作用是将一个数据赋值给一个变量

 `a = 100;`

##### 函数调用语句

函数调用语句是c程序中，比较常用的语句，由函数调用与分号构成。

 `printf("www.baidu.com");`

##### 空语句

该语句只有一个分号

 `;`

##### 复合语句

复合语句又被称为语句块，在程序中使用 `{}` 将多行语句扩起来就可以成为复合语句。

``` C
{
    int a = 3;
    printf("a = %d\n", a);
}
```

#### 顺序结构

顺序结构是c程序中最简单的程序结构。顺序结构的程序从第一行语句开始，按照代码的排列顺序，从上到下依次逐句执行，上一条语句执行结束下一条语句才能执行，直到最后一条语句结束。

``` C
#include<stdio.h>
int main()
{
    int a = 10;
    printf("a=%d\n", a);
    a = 20;
    printf("a=%d\n", a);
    a = 30;
    printf("a=%d\n", a);
    getchar();
    return 0;
}
```

#### 变量需要注意的问题

1. 变量必须定义后才能使用

2. 所有变量要声明在方法的最开始

3. 变量名不能重复

``` C
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int a = 100;
    char a = 'A';
    printf("a=%c\n", a);
    exit(0);
}
```

报错信息

``` text
temp.c: In function ‘main’:
temp.c:7:10: error: conflicting types for ‘a’
    7 |     char a = 'A';
      |          ^
temp.c:6:9: note: previous definition of ‘a’ was here
    6 |     int a = 100;
      |   
```

### 局部变量