# 5.1
就是只有一个分号的语句。在没有想好这个地方些什么的时候可以用来占位。
#

# 5.2
{}花括号括起来的就是块。块应该是在循环体、判断等部分需要多条语句的时候使用，也可以单独用一个块把变量变为更小的局部变量而在语句块结束的时候提前将其销毁，而不需要等到整个代码结束。
#

# 5.3
sum += val, ++val;  
个人感觉可读性降低了。
#

# 5.4
(a)重复声明和定义string::iterator，导致程序将一直在循环内出不来。  
(b)变量status将在while循环之后被系统收回，在if中就没有status可以使用。
#

# 5.5
见代码。
#

# 5.6
见代码。
#

# 5.7
(a)少分号。  
(b)少花括号。  
(c)ival在第二次if时已经被返还给系统，无法访问。  
(d)== 而不是 = 。
#

# 5.8
悬垂else是因为这个else前面有多个if从而导致C++语义上可能有歧义，而C++的做法是匹配最近的if。
#

# 5.9
见代码。
#

# 5.10
见代码。
#

# 5.11
见代码。
#

# 5.12
见代码。
#

# 5.13
(a)case缺break。  
(b)default中的ix未声明变量。  
(c)case连起来写不是用逗号，应该用冒号；且%10的余数不可能为10，应改为0。  
(d)case标签必须为常量。
#

# 5.14
见代码。
#

# 5.15
(a)if中的ix未声明。  
(b)ix没有初始值。  
(c)循环不会终止。
#

# 5.16
开放题，while。
#

# 5.17
见代码。
#

# 5.18
(a)while中的cin会把输入流中的数使用掉。  
(b)这个ival在while这个语句结束的时候会被系统回收。  
(c)这个ival的作用于仅在do的作用域中，执行到while时ival会未声明。
#

# 5.19
见代码。
#

# 5.20
见代码。
#

# 5.21
见代码。
#

# 5.22
int sz = get_size();  
while(sz <= 0)  
{  
    sz = get_size();  
}
#

# 5.23
见代码。
#

# 5.24
见代码。
#

# 5.25
见代码。
#
