import java.io.*;
/**
 * 测试取钱时发生的异常
 * @author Jeffrey
 * coding: utf-8
 */
public class WithDrawMoney {
  public static void main(String[] args) {
    //建立账户
    MyAccount me = new MyAccount(8219);
    System.out.println("往账户里存了500块钱");
    me.saveMoney(500);
    try {
      System.out.println("取100块钱出来");
      me.withDrawMoney(100);
      System.out.println("再取800块钱");
      me.withDrawMoney(800);
    }
    catch(NotEnoughMoneyException e) {
      System.out.println("钱不够啦！还差" + e.getAmount() + "元");
      e.printStackTrace();
    }
    finally {
      System.out.println("所剩余额为：" + me.getBalance());
      System.out.println("请取出您的卡片：" + me.getNumber());
    }
  }
}
