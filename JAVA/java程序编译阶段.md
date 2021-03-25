# java程序编译阶段

.java源文件编译为.class

### 编译阶段的过程

创建一个`.java`扩展名的文件，该文件是`Java`源文件，源文件当中编写的是`Java`源代码/源程序。这个程序必须符合语法规则

使用`javac.exe`进行编译，生成`.class`

### 加载和执行阶段

+ `java`安装之后，除了`javac.exe`还有一个`java.exe`文件，主要负责运行阶段
+ 怎么用呢
  + 例如硬盘上有一个`A.class`，则`#java A`（不能写`java A.class`）

### 运行阶段的过程：

1. DOS窗口
2. 输入：`java A java B`
3. `java.exe`命令会启动`JVM`，`JVM`会启动类加载器`classLoader`
4. `ClassLoader`会去硬盘上搜索`A.class`文件
5. 找到该文件则将字节码文件装载到`JVM`中
6. `JVM`将字节码解释成二进制0100100101数据
7. 操作系统执行二进制和底层硬件平台进行交互

