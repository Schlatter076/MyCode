import java.io.*;
/**
 * 余额不足异常类
 * @author Jeffrey
 * coding: utf-8
 */
public class NotEnoughMoneyException extends Exception {
  //出现异常时所缺少的钱
  private double amount;
  public NotEnoughMoneyException(double amount) {
    this.amount = amount;
  }
  public double getAmount() {
    return amount;
  }
}
