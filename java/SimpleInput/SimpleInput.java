import java.util.*;
// Scanner 类定义在java.util 包中
public class SimpleInput{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		System.out.println("What's your name? ");
		String name=in.nextLine();
		System.out.println("How old are you? ");
		int age = in.nextInt();
		/* 显示结果 */
		System.out.println("Hello, " + name + ". Next year,you'll be " + (age + 1) + "!");
		System.out.printf("Hello, %s .Next year,you'll be %d!\n",name,(age+1));
	}
}