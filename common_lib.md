目录
=====
[stdio.h](#1-stdioh)<br/>
[stdlib.h](#2-stdlibh)<br/>
[errno.h](#3-errnoh)<br/>
1 stdio.h
======
standard input & output<br/>
文件访问
-----
fopen freopen fflush fclose
二进制输入/输出
-----
fread fwrite
非格式化输入/输出
-----
fgetc/getc fputc/putc ungetc fgets fputs
格式化输入/输出
-----
scanf/fscanf/sscanf printf/fprintf/sprintf perror
文件定位
-----
ftell fseek fgetpos fsetpos rewind
错误处理
-----
feof ferror
文件操作
-----
remove rename tmpfile
2 stdlib.h
=====
standard library
内存操作
-----
calloc malloc free realloc 
随机数
-----
rand srand
系统相关
-----
exit abort system 
环境变量
-----
getenv putenv
类型转化
-----
labs atof atoi atol ecvt fcvt
3 errno.h
=====
define the const of error
