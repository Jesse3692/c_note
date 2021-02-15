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

```c
#include <stdio.h>

int main()
{
    printf("%d\n", 200);
    printf("%d\n", -100);
    getchar();
    return 0;
}
```

这里的 `%d`跟python中是一样的。

#### 2. 浮点型

```c
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

```c
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

```c
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

int可以定义整数类型。int类型数据在printf函数中一般采用`%d`格式进行输出，`%d`表示“十进制整数”

```c
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

```c
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

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char c = 'A';
    printf("%c\n", c);
    exit(0);
}
```

