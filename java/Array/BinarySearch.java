/**
* 二分查找法
* @version 1.0 2018.06.30
* @author Jeffrey
* -*- coding: utf-8 -*-
*/
public class BinarySearch {
  public static void main(String[] args) {
    int[] a = {1, 4, 34, 78, 98};
    System.out.println("打印数组a的值：");
    for(int i = 0; i < a.length; i++)
      System.out.printf("a[%d] = %d\t", i, a[i]);
    System.out.println();
    searchPrint(a, 50);
    searchPrint(a, 34);
  }
  public static int halfSearch(int[] arr, int num) {
    int min, max, mid;
    min = 0;
    max = arr.length - 1;
    mid = (min + max) / 2;
    while(arr[mid] != num) {
      if(num > arr[mid])
        min = mid + 1;
      else if(num < arr[mid])
        max = mid - 1;
      if(max < min)
        return -1;
      mid = (min + max) / 2;
    }
    return mid;
  }
  public static void searchPrint(int[] arr, int num) {
    System.out.printf("从数组a中查找%d\n", num);
    int index = halfSearch(arr, num);
    if(index == -1)
      System.out.println("未找到");
    else
      System.out.printf("是a[%d]\n", index);
  }
}
