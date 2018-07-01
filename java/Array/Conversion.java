/**
 * 整数的十进制转16进制
 * @version 1.0 2018-07-01
 * @author Jeffrey
 * -*- coding: utf-8 -*-
 */
public class Conversion {
  public static void main(String[] args) {
    toHex(60);
    toHex_1(60);
  }
  public static void toHex(int num) {
    System.out.printf("求%d的16进制形式：\n", num);
    //内存中int类型占32bit，即4个字节
    //每次取整数低四位，32 / 4 = 8
    for(int i = 0; i < 8; i++) {
      //取num低四位
      int x = num & 15;
      if(x > 9)
        System.out.print((char) (x - 10 + 'A'));
      else
        System.out.print(x);
      num = num >>> 4;
    }
    System.out.println();
  }
  //查表法
  public static void toHex_1(int num) {
    System.out.printf("求%d的16进制形式(查表法)：\n", num);
    if(num == 0) {
      System.out.println(num);
      return;
    }
    char[] hex = {'0', '1', '2', '3',
                  '4', '5', '6', '7',
                  '8', '9', 'A', 'B',
                  'C', 'D', 'E', 'F'};
    char[] arr = new char[8];//最多有8个数
    int point = arr.length;
    while(num != 0) {
      int temp = num & 15;
      //建一个表arr，从尾部存运算后的数值
      arr[--point] = hex[temp];
      num = num >>> 4;
    }
    for(int i = point; i < arr.length; i++)
      System.out.print((char)(arr[i]));
    System.out.println();
  }
}
