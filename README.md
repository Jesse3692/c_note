# C语言笔记

## GCC常用命令

编译为可执行文件

`gcc -o file_name`

生成汇编代码

`gcc -S file_name`


## 第一个C程序

```c
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    printf("Hello, Linux.\n");
    exit(0);
}
```

```c
#include<stdio.h>
int main()
{
    printf("Hello World!");
    getchar();
    return 0;
}
```

程序分析：

- `#include`是C语言的预处理指令，用来引入`<stdio.h>`等系统头文件。`stdio.h`中包含了很多和输入输出相关的系统函数，如果在程序中调用`printf`函数，就必须引入该头文件。

- `main`是函数名称，表示主函数。一个C语言程序无论多么简单或多么复杂，都必须有一个程序执行入口，这个入口就是主函数`main()`。`main`函数前面的`int`表示主函数执行完毕，会返回`int`（整型）类型数据。

- `{`表示函数开始

- `printf`是C语言库函数，`printf`函数会将双引号中的字符串输出。

- `getchar`是C语言库函数，直到用户输入回车键才结束在此之前它会一直等待。

- `return 0`表示`main`函数执行到此处时结束，并返回整数0

- `}`表示函数结束

- 程序代码是由指令和数据组成

- 每个C语言程序都必须有一个主函数，函数体使用`{}`包裹。主函数由系统进行调用，当执行一段C程序时，必须找到该程序的主函数，从主函数开始执行。

