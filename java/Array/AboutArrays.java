import java.util.*;
/**
* 从n个数中抽取k个数，随机抽取，并排序
* @version 1.0 2018-06-26
* @author Jeffrey Schlatter
* -*- coding: utf-8 -*- 
*/
public class AboutArrays {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.print("how many numbers do you want to draw?");
		int k = in.nextInt();
		System.out.print("what's the highest number you can draw?");
		int n = in.nextInt();
		//用一个数组numbers存放1~n
		int[] numbers = new int[n];
		for(int i = 0; i < numbers.length; i++)
			numbers[i] = i + 1;
		//抽取k个数存放在result数组中
		int[] result = new int[k];
		for(int i = 0; i < result.length; i++) {
			//Math.random()方法可以随机生成一个0~1之间的浮点数
			int r = (int)(Math.random() * n);
			//从已有数组中随机抽取数组元素给result
			result[i] = numbers[r];
			//抽取的数字不能重复，把numbes数组最后一个元素放到随机数里
			numbers[r] = numbers[n - 1];
			n--;	
		}
		//打印排好序的数组:Arrays.sort()方法自动排序
		Arrays.sort(result);
		for(int element : result)
			System.out.println(element);
	}
}