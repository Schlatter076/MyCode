import java.time.*;
/**
 * 打印当月日历
 * @author Jeffrey
 * coding: utf-8
 */
public class CalendarTest {
  public static void main(String[] args) {
    //从LocalDete类创建date对象
    LocalDate date = LocalDate.now();
    //获取当前月份
    int month = date.getMonthValue();
    //获取当前日期
    int today = date.getDayOfMonth();
    //设置起始日期
    date = date.minusDays(today - 1);
    DayOfWeek weekDay = date.getDayOfWeek();
    int value = weekDay.getValue();//1 = Monday...7 = Sunday
    //打印日历头
    System.out.println("Mon Tue Wed Thu Fri Sat Sun");
    for(int i = 1; i < value; i++)
      System.out.print("    ");
    while(date.getMonthValue() == month) {
      System.out.printf("%3d", date.getDayOfMonth());
      if(date.getDayOfMonth() == today)
        System.out.print("*");
      else
        System.out.print(" ");
      date = date.plusDays(1);
      if(date.getDayOfWeek().getValue() == 1)
        System.out.println();
    }
    if(date.getDayOfWeek().getValue() != 1)
      System.out.println();
  }
}
