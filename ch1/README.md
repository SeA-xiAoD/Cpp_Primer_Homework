# 1.1
见代码。
#

# 1.2
说实话用命令行编译出来没有看到太多的区别，因为都没有输出。经过@huangmingchuan大佬的提点，发现要在执行后加上<code>echo %errorlevel%</code>，然而我在Mac上执行没有效果，直接输出了errorlevel，百度之后发现，这个是Windows才有的。然后我又查Mac下是用<code>%?</code>来作为同样的作用，然而我发现无论return的是0还是其他的数，用<code>%?</code>输出的都是0，然后我随便瞎在shell里输入个<code>cd 12345</code>，结果输出的<code>echo %?</code>输出的是1，看来对Linux理解还不到位。
#

# 1.3
见代码。
#

# 1.4
见代码。
#

# 1.5
见代码。
#

# 1.6
不合法，因为第一行的;已经把cout隔断了，后面会出现编译错误，因为<<找不到左值对象。
#

# 1.7
输出<code>error: expected expression</code>。
#

# 1.8
编译无法通过，但是我分析1、2句是可以执行的，输出正常，但是后两句会由于第3句后面的"找不到匹配而报错。
#

# 1.9
见代码。
#

# 1.10
见代码。
#

# 1.11
见代码。
#

# 1.12
完成了从-100加到100这样一个工作，结果应该为0.
#

# 1.13
见代码。
#

# 1.14
个人感觉for循环的好处的可以将初始化和控制循环的变量的变换写在for中，更直观，更符合人的理解。while更灵活，可以有比for循环更丰富的处理方式，毕竟所有的for循环都能够改为while循环来执行。
#

# 1.15
略。
#

# 1.16
见代码。
#

# 1.17
有重复就一直叠加，没有重复则一直输出。
#

# 1.18
略。
#

# 1.19
见1.11代码。
#

# 1.20
见代码。
#

# 1.21
见代码。
#

# 1.22
见代码。
#

# 1.23
见代码。
#

# 1.24
略。
#

# 1.25
略。
#