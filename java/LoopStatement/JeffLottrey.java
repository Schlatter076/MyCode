import java.math.*;
import java.util.*;
/**
*从50个数中抽出六个数，测算概率
*1~50抽出6个数，公式为：n*(n-1)*(n-2)*..*(n-k+1)/1*2*3*..*k
*以for循环为例
*/
public class JeffLottrey{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		System.out.print("你要抽几个数？");
		int k = in.nextInt();
		System.out.print("从多少个数里面抽？");
		int n = in.nextInt();
		//普通方法
		/* int JeffOdds = 1;
		for(int i = 1; i < k; i++)
			
			JeffOdds = JeffOdds * (n - i + 1) / i;
		System.out.println("你的中奖几率是1/" + JeffOdds); */
		//大数值方法
		BigInteger JeffOdds = BigInteger.valueOf(1);
		for(int i = 1; i <= k; i++)
			JeffOdds = JeffOdds.multiply(BigInteger.valueOf(n - i + 1)).divide(BigInteger.valueOf(i));
		System.out.println("你的中奖几率是1/" + JeffOdds);
	}
}