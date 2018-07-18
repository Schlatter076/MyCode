import java.io.*;
/**
 * 我的账户(取钱)
 * @author Jeffrey
 * coding: utf-8
 */
public class MyAccount {
  //定义余额和卡号
  private double balance;
  private int number;
  //构造函数，读取卡号
  public MyAccount(int number) {
    this.number = number;
  }
  //存钱
  public void saveMoney(double money) {
    balance += money;
  }
  //取钱
  public void withDrawMoney(double money) throws NotEnoughMoneyException {
    if(money <= balance)
      balance -= money;
    else {
      double needs = money - balance;
      throw new NotEnoughMoneyException(needs);
    }
  }
  //返回余额
  public double getBalance() {
    return balance;
  }
  //取出卡片
  public int getNumber() {
    return number;
  }
}
