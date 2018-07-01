/**
 * 常用进制转换
 * @version 1.0 2018-07-01
 * @author Jeffrey
 * -*- coding: utf-8 -*-
 */

public class ConversionPlus {
  public static void main(String[] args) {
    toBinary(60);
    toOctal(60);
    toHex(60);
    System.out.println("用Java自带转换方法：");
    System.out.println(Integer.toBinaryString(60));
    System.out.println(Integer.toOctalString(60));
    System.out.println(Integer.toHexString(60));
  }
  public static void toBinary(int num) {
    System.out.printf("%d的二进制形式：", num);
    trans(num, 1, 1);
  }
  public static void toOctal(int num) {
    System.out.printf("%d的八进制形式：", num);
    trans(num, 7, 3);
  }
  public static void toHex(int num) {
    System.out.printf("%d的二进制形式：", num);
    trans(num, 15, 4);
  }
  public static void trans(int num, int base, int offset) {
    if(num == 0) {
      System.out.println(num);
    }
    //二进制最多有32位
    char[] conversionList = {'0', '1', '2', '3',
                             '4', '5', '6', '7',
                             '8', '9', 'A', 'B',
                             'C', 'D', 'E', 'F'};
    char[] arr = new char[32];
    int point = arr.length;
    while(num != 0) {
      int temp = num & base;
      //从数组最后一位开始存起
      arr[--point] = conversionList[temp];
      num = num >>> offset;
    }
    for(int i = point; i < arr.length; i++) {
      System.out.print(arr[i]);
    }
    System.out.println();
  }
}
