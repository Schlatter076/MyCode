/**
 * 类与对象初探
 * @author Jeffrey
 * coding: utf-8
 */
//定义一个类：汽车(包括属性和行为)
class car {
  int num;
  String color;
  void run() {
    System.out.println(num + "--" +color);
  }
}
public class WhatIsObject {
  public static void main(String[] args) {
    car i = new car();
    i.num = 4;
    i.color = "red";
    i.run();
    //未初始化时，整型默认为0，字符串默认为null
    car c = new car();
    c.run();
    //匿名对象
    new car().run();
    //定义一个方法
    show(new car());
    ///////////////////
    car c1 = new car();
    c1.num = 5;
    c1.color = "yellow";
    c1.run();
  }
  public static void show(car x) {
    x.num = 3;
    x.color = "blue";
    x.run();
  }
}
