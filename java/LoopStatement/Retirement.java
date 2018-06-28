import java.util.*;
public class Retirement
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		// System.out.println(System.getProperty("file.encoding"));
		// System.out.println("How much money do you need to retire?");
		System.out.println("你准备要多少钱退休?");
		double goal = in.nextDouble();
		System.out.println("每年存多少?");
		// System.out.println("How much money will you contribute every year?");
		double payment = in.nextDouble();
		System.out.println("利率是多少？");
		// System.out.println("Interest Rate in %:");
		double interestRate = in.nextDouble();
		double balance = 0;
		int years = 0;
		/**
		while(balance < goal)
		{
			balance += payment;
			double interest = balance * interestRate / 100;
			balance += interest;
			years++;
		}
		System.out.println("你可以在" + years + "年后退休！");
		// System.out.println("you can retire in " + years + "years");
		*/
		String input;
		do
		{
			balance += payment;
			double interest = balance * interestRate / 100;
			balance += interest;
			years++;
			if(balance >= goal)  break;
			//System.out.printf("");
			System.out.printf("第%d年后,预备退休金有%,.2f\n", years, balance);
			//System.out.printf("After year %d, your balance is %,.2f%n", years, balance);
			System.out.print("准备退休吗? (Y/N) ");
			input = in.next();
		}
		while(input.equals("N"));
		System.out.printf("\n存够钱退休啦！！！\n退休金有%,.2f\n", balance);
	}
}