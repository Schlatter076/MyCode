/**
 * 整数的十进制转16进制
 * @version 1.0 2018-07-01
 * @author Jeffrey
 * -*- coding: utf-8 -*-
 */
public class Conversion {
  public static void main(String[] args) {
    toHex(60);
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
  }
}
