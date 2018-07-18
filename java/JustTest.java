import java.io.*;
/**
 * 测试程序
 * @author Jeffrey
 * coding: utf-8
 */
public class JustTest {
	public static byte[] readStream(InputStream inStream) throws Exception {
    ByteArrayOutputStream outSteam = new ByteArrayOutputStream();
    byte[] buffer = new byte[1024];
    int len = -1;
    while ((len = inStream.read(buffer)) != -1) {
      outSteam.write(buffer, 0, len);
    }
    outSteam.close();
    inStream.close();
    return outSteam.toByteArray();
}
	public static void main(String[] args) {
		try {
      File file = new File("D:\\ceshi.txt");
      FileInputStream fin = new FileInputStream(file);
      byte[] filebt = readStream(fin);
      System.out.println(filebt.length);
    }
		catch (Exception e) {
      e.printStackTrace();
    }
		/*
		int[] a = new int[2];
		try {
      System.out.println("Access element three :" + a[3]);
    }
		catch(ArrayIndexOutOfBoundsException e) {
        System.out.println("Exception thrown  :" + e);
    }
		finally {
      	a[0] = 6;
        System.out.println("First element value: " +a[0]);
        System.out.println("The finally statement is executed");
    }
		*/
		/**
		*用枚举法来算出在1000内的整数，符合以下公式：
		*i + j + t =1000; i^2 + j^2 = t^2
		*/
		/*
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
		*/
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
