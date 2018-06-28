public class JustTest {
	public static void main(String[] args) {
		/**
		*用枚举法来算出在1000内的整数，符合以下公式：
		*i + j + t =1000; i^2 + j^2 = t^2
		*/
		for(int i = 1; i <=1000; i++) {
			for(int j = 1; j <=1000; j++) {
				for(int t = 1; t <=1000; t++) {
					if((i + j + t == 1000) && (i*i + j*j == t*t)) {
						System.out.printf("i=%d\t", i);
						System.out.printf("j=%d\t", j);
						System.out.printf("t=%d\n", t);
					}
				}
			}
		}
		System.out.println("Finished");
		/* 
		if (args.length == 0 || args[0].equals("-h"))
			System.out.print("hello,");
		else if (args[0].equals("-g"))
			System.out.print("goodbye,");
		for (int i = 1; i < args.length; i++)
			System.out.print(" " + args[i]);
		System.out.println("!"); 
		*/
		/*
		int i = 1;
		int count = 0;
		while(i <= 100) {
			if(i % 6 == 0)
				count++;
			i++;
		}
		System.out.println("count="+count);
		*/
	}
}
