import java.util.*;
/**
 * 查表法练习--查找星期
 * @version 1.0 2018-07-01
 * @author Jeffrey
 * -*- coding: utf-8 -*-
 */
public class checkList {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.printf("\n1--中文|2---English：");
    int temp = in.nextInt();
    if(temp == 1) {
      System.out.print("输入要查找的星期:");
      int week = in.nextInt();
      String x = getWeeks_zh(week);
      System.out.println(x);
    }
    else if(temp == 2) {
      System.out.print("Enter a number to start:");
      int week = in.nextInt();
      String y = getWeeks_en(week);
      System.out.println(y);
    }
    else
      System.out.println("Error!!!");
  }
  public static String getWeeks_zh(int num) {
    if(num < 1 || num > 7)
      System.out.println("错误!");
    String[] weeks = {"", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六", "星期天"};
    return weeks[num];
  }
  public static String getWeeks_en(int num) {
    if(num < 1 || num > 7)
      System.out.println("Error!");
    String[] weeks = {"", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    return weeks[num];
  }
}
