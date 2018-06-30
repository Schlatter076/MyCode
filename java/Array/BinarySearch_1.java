/**
 * 二分查找优化
 * @version 1.1 2018.06.30
 * @author Jeffrey
 * -*- coding: utf-8 -*-
 */
public class BinarySearch_1 {
  public static void main(String[] args) {
    int[] a = {2, 23, 45, 67, 80};
    System.out.println("打印数组a:");
    for(int element: a)
      System.out.print(element + "\t");
    System.out.println();
    searchPrint(a, 0);
    searchPrint(a, 45);
    searchPrint(a, 90);
  }
  public static int halfSearch(int[] arr, int num) {
    int min, mid, max;
    min = 0;
    max = arr.length - 1;
    mid = (min + max) >> 1;
    while(min <= max) {
      mid = (min + max) >> 1;
      if(num > arr[mid])
        min = mid + 1;
      else if(num < arr[mid])
        max = mid - 1;
      else
        return mid;
    }
    //若数组内不存在所查找数，则返回应插入点的负数再减1
    return -min - 1;
  }
  public static void searchPrint(int[] arr, int num) {
    System.out.printf("从数组a中查找%d:\n", num);
    int index = halfSearch(arr, num);
    if(index < 0)
      System.out.println(index);
    else
      System.out.printf("是a[%d]\n", index);
  }
}
