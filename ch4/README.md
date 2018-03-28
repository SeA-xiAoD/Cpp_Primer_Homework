# 4.1
105
#

# 4.2
(a) *(vec.begin())  
(b) (*(vec.begin())) + 1
#

# 4.3
可以接受哇，我大C++再慢也很快了，哈哈哈！
#

# 4.4
((((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2))
#

# 4.5
(a) -86  
(b) -18  
(c) 42  
(d) -2
#

# 4.6
cout << ((n % 2 == 0) ? "Is a even number!" : "Is a odd number!") << endl;
#

# 4.7
溢出就是超出这个数所能表达的上界或者下界。  
int n = 0x7fffffff; n += 1;  
int n = 0x80000000; n -= 1;  
unsigned int n = 0xffffffff; n += 1;
#

# 4.8
相等 > 与 > 或
#

# 4.9
if ( ((cp) &&) (*cp))
#

# 4.10
while(cin >> n && n != 42)
#

# 4.11
if (a > b && b > c && c >d)
#

# 4.12
j < k先进行比较，得到一个bool值，然后比较i是否与这个bool值相等。
#

# 4.13
(a)d = 3, i = 3  
(b)i = 3, d = 3.5
#

# 4.14
(a)编译出错。  
(b)把42赋值给i，且表达式判断对true。
#

# 4.15
pi是指针，且pi并没有被分配内存，应该改为：  
double dval; int ival; int *pi = new int;  
dval = ival = *pi = 0;
#

# 4.16
(a)p会变成一个bool值，应改为：if((p = getPtr()) != 0)
(b)i的值会变为1024，应改为：if(i == 1024)
#

# 4.17
前置会在变量被调用之前改变它的值，后置会在变量被调用之后改变它的值。
#

# 4.18
会少输出第一个数。
#

# 4.19
(a)先判断指针是否为空，如果不为空判断其指向的值是否为0，然后指针向后移动一个单元。  
(b)判断ival与ival是否相等，显然是相等的，然后ival加一。  
(c)判断vec[ival]是否小于等于vec[ival]，显然是相等的，然后ival加一。
#

# 4.20
(a)合法，迭代器先加一，然后取出string。  
(b)不合法，string不能++。  
(c)不合法，应该改为(*iter).empty()。  
(d)合法，判断迭代器指的是否为空。  
(e)不合法，string不能++。  
(f)合法，判断迭代器指的是否为空，并把迭代器加一。
#

# 4.21
见代码。
#

# 4.22
见代码。第一种虽然代码段，但是我还是觉得第二种比较直观，可读性高。
#

# 4.23
加号运算符的优先级高于等于运算符，就导致了一个string去和一个char进行比较，编译失败。
#

# 4.24
会在比较完grade < 60之后就直接赋值，不会判断 grade > 90。
#

# 4.25
这道题按照@huangmingchuan大神的说法是7232，但是我不是太同意，我知道char会被提升为int，但是存储'q'的始终是个char，提升完移位完以后还是char，也就是说最终输出的时候还是按照char去输出，起码我尝试完以后是这样的，所以应该是二进制010000000对应的字符。
#

# 4.26
7232。
#

# 4.27
(a)3  
(b)7  
(c)true  
(d)true
#

# 4.28
见代码。
#

# 4.29
这个应该要看具体系统是多少位，如果是64位的系统，那指针应该占8个字节。第一个输出应该是10，第二个在64位PC上输出应该是2。
#

# 4.30
(a)sizeof(x + y)  
(b)sizeof(p->mem[i])  
(c)sizeof(a < b)  
(d)sizeof(f())
#

# 4.31
这里用前置还是后置其实无所谓，执行结果都一样，但是最好的方式是用前置，不是必须的情况的话不使用后置。
#

# 4.32
控制ix从0到4，并且控制指针ptr指向从ia[0]到ia[4]。
#

# 4.33
如果someValue不等于零，则x、y递增，否则递减。
#

# 4.34
(a)根据fval是否为零转为bool类型。  
(b)ival提升为float与fval相加，然后提升为double。  
(c)char提升为int与ival相乘，然后提升为double与dval相加。
#

# 4.35
(a)'a'先转为int，与3相加，再强制转为char。  
(b)ival转为double与1.0相乘，然后unsigned int转为double与ui转为double相减。  
(c)ui转为float，与fval相乘。  
(d)ival提升为float与fval相加，然后提升为double与dval相加。
#

# 4.36
见代码。
#

# 4.37
(a)pv = const_cast<void*>(ps)  
(b)i = const_cast<int>(*pc)  
(c)pv = static_cast<double*>(&d)  
(d)pc = static_cast<char*>(pv)
#

# 4.38
将j / i的值强制转换为double类型并赋值给slope。
#