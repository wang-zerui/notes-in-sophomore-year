# 流畅的Python

# 2.1.内置序列类型概览

### 容器序列和扁平序列

还挺形象的

```
容器序列：list、tuple、collections.deque这些序列能存放不同类型的数据
扁平序列：str、btyes、bytearray、memoryview、array.array只能容纳一种类型
```

***容器序列***存放的是他们所包含的对象的引用，***扁平序列***里只能存放值，而不是引用。

### 可变和不可变序列

```
可变序列：list、bytearray、array.array、collections.deque和memoryview
不可变序列：tuple、str和bytes
```

## 2.2.列表推导和生成器表达式

构建`list`的快捷方式，而**生成器表达式**可以用来创建任何形式的序列

> 列表推导（list comperhension）简称 listcomps ，
>
> 生成器表达式（generator expression） 简称为 genexps

## 2.3.列表推导与可读性

