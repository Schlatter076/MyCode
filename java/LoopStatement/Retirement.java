import java.util.*;
public class Retirement
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		// System.out.println(System.getProperty("file.encoding"));
		// System.out.println("How much money do you need to retire?");
		System.out.println("��׼��Ҫ����Ǯ����?");
		double goal = in.nextDouble();
		System.out.println("ÿ������?");
		// System.out.println("How much money will you contribute every year?");
		double payment = in.nextDouble();
		System.out.println("�����Ƕ��٣�");
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
		System.out.println("�������" + years + "������ݣ�");
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
			System.out.printf("��%d���,Ԥ�����ݽ���%,.2f\n", years, balance);
			//System.out.printf("After year %d, your balance is %,.2f%n", years, balance);
			System.out.print("׼��������? (Y/N) ");
			input = in.next();
		}
		while(input.equals("N"));
		System.out.printf("\n�湻Ǯ������������\n���ݽ���%,.2f\n", balance);
	}
}