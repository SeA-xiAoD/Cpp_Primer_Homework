# 11.1
map是键值对，按照的是第一个参数的键去做索引，而vector是顺序存储的。
#

# 11.2
list：经常对中间进行插入删除。  
vector：顺序存储，经常随机访问，但是常在头尾进行插入删除。  
deque：只能在头尾进行插入删除。  
map：按照键去查找值。  
set：适合查找值是否存在。
#

# 11.3
见代码。
#

# 11.4
见代码。
#

# 11.5
需要键值对的时候选择map，只有单一值的时候选择set。
#

# 11.6
set中没有重复的值，按照字典序排序；而list可以重复，且按照插入顺序排列。
#

# 11.7
见代码。
#

# 11.8
见代码，set不需要手动判断是否重复。
#

# 11.9
std::map<std::string, std::list<std::size_t> > m;。
#

# 11.10
可以定义 vector<int>::iterator 到 int 的map，但是不能定义 list<int>::iterator 到 int 的map。因为map的键必须实现 < 操作，list 的迭代器不支持比较运算。
#

# 11.11
using compareIsbnLess = bool (*)(Sales_data const&, Sales_data const&);  
std::multiset<Sales_data, compareIsbnLess> bookstore(compareIsbn);
#

# 11.12
见代码。
#

# 11.13
见代码。
#

# 11.14
见代码。
#

# 11.15
mapped_type: vector<int>  
key_type: const int  
value_type: pair<const int, <vector int> >
#

# 11.16
std::map<int, string>::iterator it = m.begin();  
it->second = "hello";
#

# 11.17
第二个调用不合法，因为 multiset 没有 push_back 方法。其他调用都合法。
#

# 11.18
map<string, size_t>::const_iterator
#

# 11.19
using compareType = bool (*)(const Sales_data &lhs, const Sales_data &rhs);  
std::multiset<Sales_data, compareType> bookstore(compareIsbn);  
std::multiset<Sales_data, compareType>::iterator c_it = bookstore.begin();
#

# 11.20
见代码。
#

# 11.21
给word的计数值加1。
#

# 11.22
参数类型{word, vector<int>}，返回值类型pair<pair<string, vector<int>>::iterator, bool>。
#

# 11.23
见代码。
#

# 11.24
先声明一个<int, int>的map类型m，然后创建一个关键字为0的pair，赋值为0，最后将这个pair赋值为1。
#

# 11.25
在第二行v[0] = 1的时候直接将v[0]的位置赋值为1。
#

# 11.26
可以用关键词的类型来进行下标操作，返回的类型是这个关键字对应值的左值；map<string, int>就可以用string类型的关键字使用下标操作，然后返回int型的左值。
#

# 11.27
要计算数量的时候用count，只需要看有没有的时候用find。
#

# 11.28
map<string, vector<int>>::iterator it;
#

# 11.29
各种尾后迭代器。
#

# 11.30
pos.first是一个迭代器，second是这个迭代器指的一个pair的第二部分。
#

# 11.31
见代码。
#

# 11.32
不合法，因为参数的求值顺序是未指定的。
#

# 11.33
见代码。
#

# 11.34
如果换成下标运算符，则后面的程序需要修改，因为已经是一个字符串，所以没有second部分。
#

# 11.35
保留新添加的部分。
#

# 11.36
略。
#

# 11.37
无序容器读取速度快，不需要维护顺序的时间，有序容器是有序的，很多时候算法会用到排序，而有序容器可以帮我们排好序。
#

# 11.38
见代码。
#