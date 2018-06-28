import java.util.*;
/**
* 选择排序
* 冒泡排序
* 自带sort排序
*/
/**
* @author Jeffrey Schlatter
* -*- -coding: utf-8 -*-
*/
public class BubbleSelectSort {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int[] select = new int[8];
		for(int i = 0; i < 8; i++) {
			int r = (int)(Math.random() * 100);
			select[i] = r;
		}
		System.out.println("----这是一个排序的Java程序----");
		PrintArr(select);
		PrintMethodSelect();
		System.out.print("请选择一种排序方法:");
		int choose = in.nextInt();
		System.out.println("\n" + "----开始排序----");
		switch(choose) {
			case 1: SelectSort(select); break;
			case 2: BubbleSort(select); break;
			case 3: Arrays.sort(select); break;
			default: System.out.println("选择错误，将打印原数据并退出!");
		}
		//BubbleSort(select);
		//SelectSort(select);
		PrintArr(select);
	}
	//打印选择排序函数
	public static void PrintMethodSelect() {
		System.out.println("\n" + "1:选择排序");
		System.out.println("2:冒泡排序");
		System.out.println("3:sort排序");
	}
	//打印数组函数
	public static void PrintArr(int[] arr) {
		for(int element : arr) {
			System.out.print(element + "\t");
		}
	}
	//交换比较的元素
	public static void SwapArr(int i, int j) {
		int temp = i;
		i = j;
		j = temp;
	}
	//选择排序函数
	public static void SelectSort(int[] arr) {
		for(int i = 0; i < arr.length - 1; i++)
			for(int j = i + 1; j < arr.length; j++)
				if(arr[i] > arr[j]) {
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
	}
	//冒泡排序函数
	public static void BubbleSort(int[] arr) {
		for(int i = 0; i < arr.length - 1; i++)
			for(int j = 0; j < arr.length - 1 - i; j++)
				if(arr[j] > arr[j+1]) {
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
	}
}








