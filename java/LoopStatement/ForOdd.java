/**
*��1234567^(987654321)�ĸ�λ��
*�˷���ĸ�λ��ֻ�ͱ��˷����ĸ�λ�й�
*7^(0)=1;7^(1)=7;7^(2)=49;7^(3)=343;7^(4)=2381......
*�ɼ���λ��1/7/9/3��ѭ����ֻ����987654321%4��ֵ
*/
// -encoding gb2312
public class ForOdd {
	public static void main(String[] args) {
		System.out.println("��1234567^(987654321)�ĸ�λ��");
		int i = 987654321;
		int j = i % 4;
		switch(j) {
			case 0: System.out.println("����Ϊ1");break;
			case 1: System.out.println("����Ϊ7");break;
			case 2: System.out.println("����Ϊ9");break;
			case 3: System.out.println("����Ϊ3");break;
		}
	}
}