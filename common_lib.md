目录
=====
[1 stdio.h](#1-stdioh)<br/>
[2 stdlib.h](#2-stdlibh)<br/>
[3 errno.h](#3-errnoh)<br/>
[4 string.h](#4-stringh)<br/>
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
4 string.h
=====
the functions related string
### strcpy
copy source string to destin string<br/>
char *strcpy(char *destin, char *source);
### strncpy
copy the n chars of source string to destin string<br/>
char *strncpy(char *dest, char *src,size_tn);
### strcat
A string concatenation to another string<br/>
char *strcat(char *destin, char *source);
### strchr
find the char of first index in string<br/>
char *strchr(char *str, char c);
### strcmp
compare string by ascii<br/>
int strcmp(char *str1, char *str2);
### stricmp
compare string without Case sensitive<br/>
int stricmp(char *str1, char *str2);
### strnicmp
compare the part of a string and another string without Case sensitive<br/>
int strnicmp(char *str1, char *str2, unsigned maxlen);
### strlen
get the length of string<br/>
size_t strlen(const char *s);
### strcspn
get one string of first index in another string<br/>
int strcspn(char *str1, char *str2);
### strdup
duplicate then string to new one<br/>
char *strdup(char *str);
### strerror
get error message related errno<br/>
char *strerror(int errnum);
### strnset
set the front n char of string to char<br/>
char *strnset(char *str, char ch, unsigned n);
### strupr
4 netdb.h
=====
for linux and unix, the net of the struct、macro、function。
5 sys/types.h
=====
The basic data type,ex. clock_t fd_set dev_t fpos_t pid_t size_t uid_t。
6 netinet/in.h
=====
internat address family
7 sys/socket.h
=====
internat protocal family
