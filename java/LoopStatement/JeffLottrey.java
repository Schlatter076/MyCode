import java.math.*;
import java.util.*;
/**
*��50�����г�����������������
*1~50���6��������ʽΪ��n*(n-1)*(n-2)*..*(n-k+1)/1*2*3*..*k
*��forѭ��Ϊ��
*/
public class JeffLottrey{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		System.out.print("��Ҫ�鼸������");
		int k = in.nextInt();
		System.out.print("�Ӷ��ٸ�������飿");
		int n = in.nextInt();
		//��ͨ����
		/* int JeffOdds = 1;
		for(int i = 1; i < k; i++)
			
			JeffOdds = JeffOdds * (n - i + 1) / i;
		System.out.println("����н�������1/" + JeffOdds); */
		//����ֵ����
		BigInteger JeffOdds = BigInteger.valueOf(1);
		for(int i = 1; i <= k; i++)
			JeffOdds = JeffOdds.multiply(BigInteger.valueOf(n - i + 1)).divide(BigInteger.valueOf(i));
		System.out.println("����н�������1/" + JeffOdds);
	}
}