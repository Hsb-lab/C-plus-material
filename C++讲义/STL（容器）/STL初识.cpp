//STL初识
//STL的诞生
//1.长久以来，软件界一直希望建立一种可重复利用的东西
//2.C++面向对象和泛型编程思想，目的就是复用性的提升
//3.大多数情况下，数据结构和算法都未有一套标准，导致被迫从事大量重复工作
//4.为了建立数据结构和算法的一套标准，诞生了STL

//STL基本概念
//1.STL（Standard Template Libary标准模板库）
//2.STL从广义上分为：容器（container）算法（algorithm）迭代器（iterator）
//3.容器和算法之间通过迭代器进行无缝连接
//4.STL几乎所有的代码都采用了模板或者函数模板

//STL六大组件
//STL大体分为六大组件，分别是：容器、算法、迭代器、适配器（配接器）、仿函数、空间配置器
//1.容器：各种数据结构，如：vector、list、deque、set、map等，用来存放数据
//2.算法：各种常用的算法，如：sort（排序）、find（查找）、copy（复制）、for_each（遍历）等
//3.迭代器：扮演了容器与算法之间的胶合剂
//4.仿函数：行为类似函数，可作为算法的某种策略
//5.适配器：一种用来修饰容器或者仿函数或迭代器接口的东西
//6.空间配置器：负责空间的配置与管理

//STL中容器、算法、迭代器
//容器：置物之器也
//STL容器就是将运用最广泛的一些数据结构实现出来
//常用的数据结构：数组、链表、树、栈、队列、集合、映射等
//这些容器分为序列式容器和关联器容器两种：
//序列式容器：强调值的排序，序列式容器中的每个元素均有固定的位置
//关联式容器：二叉树结构，个元素之间没有严格物理上的顺序结构

//算法：问题之解也
//有限步骤解决逻辑或数学上的问题，这一门学科我们叫做算法（algorithm）
//算法分为：质变算法和非质变算法
//质变算法：是指运算过程中会更改区间内的元素内容，例如拷贝、替换、删除等
//非质变算法：是指运算过程中不会更改区间内的元素内容，例如查找、计算、遍历、寻找极值等

//迭代器：容器和算法之间的粘合剂
//提供一种方法，使之能够依序寻访某个容器所含的各个元素，
//而又无需暴露该容器的内部表示方式
//1.每个容器都有自己专属的迭代器
//2.迭代器使用非常类似于指针，初学阶段我们可以理解迭代器为指针
//迭代器种类：
//输入迭代器（对数据的只读访问，支持++、==、！=）
//输出迭代器（对数据的只写访问，支持++）
//前向迭代器（读写操作，并能向前推进迭代器，支持++、==、！=）
//双向迭代器（读写操作，并能向前和向后操作，读写支持++、--）
//随机访问迭代器（读写操作，可以以跳跃的方式访问任意数据，功能最强的迭代器，读写，支持++、--、[n]、-n、<、
//<=、>、>=）
//常用的迭代器种类为双向迭代器和随机访问迭代器