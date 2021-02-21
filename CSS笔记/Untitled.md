# CSS选择器

## 一、基本规则

## 1.1.规则结构

每个规则有两个基本部分：选择器(selector)和声明块(declaration block)。每个声明是一个属性-值对

![截屏2021-02-16 下午5.18.02](https://gitee.com/xinwuyun/myimage/raw/master/img/截屏2021-02-16 下午5.18.02.png)

如规则左边所示，选择器定义了将影响文档中的哪些部分。选择h1元素。如果选择器是p，则会选择所有p元素。

## 1.2.元素选择器

文档的元素就是最基本的选择器，甚至可以是html本身

```css
html {color: black;}
h1 {color: gray;}
h2 {color: silver;}
```



![截屏2021-02-16 下午5.49.17](https://gitee.com/xinwuyun/myimage/raw/master/img/截屏2021-02-16 下午5.49.17.png)

## 1.3.声明和关键字

声明块包含一个或多个声明

