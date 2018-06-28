/**
*求1234567^(987654321)的个位数
*乘方后的个位数只和被乘方数的个位有关
*7^(0)=1;7^(1)=7;7^(2)=49;7^(3)=343;7^(4)=2381......
*可见个位是1/7/9/3的循环，只需求987654321%4的值
*/
// -encoding gb2312
public class ForOdd {
	public static void main(String[] args) {
		System.out.println("求1234567^(987654321)的个位数");
		int i = 987654321;
		int j = i % 4;
		switch(j) {
			case 0: System.out.println("所求为1");break;
			case 1: System.out.println("所求为7");break;
			case 2: System.out.println("所求为9");break;
			case 3: System.out.println("所求为3");break;
		}
	}
}