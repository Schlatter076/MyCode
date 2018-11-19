#include <stdio.h>
#include <string.h>

/**
 * 连接两个字符串
 * @param  str 字符串1
 * @param  ch  字符串2
 */
void str_cat(char *str, char *ch)
{
  char *tem = str; //取第一个字符串的首地址
  while (*tem != '\0') {
    *tem++;
  }
  while (*ch != '\0') {
    *tem++ = *ch++;
  }
  //return str;
}
void test_strcat(void) {
  char s1[] = "what is your name ?";
  char s2[] = "\r\nmy name is Loyer!";  //加换行符是为了打印好看一点儿^_^
  str_cat(s1, s2);
  printf("%s\n", s1);
}
char *reverse(char *str) {
  char *start = str;
  char *end;
  char *mid;
  while (*start != '\0') {
    *start++;
  }
  start -= 1; //指针回到字符串末尾
  end = start; //end指向字符串末尾
  mid = end;  //用mid记录end指针位置
  while(*start != *str) {
    *end++ = *start--;
  }
  *--start = '\0';
  *end = *++start;  //取字符串首位
  *++end = '\0';
  return mid;
}
void test_reverse(void)  {
  //char s[] = "I am superman!";
  char s[] = "qwertyuiopas";
  printf("%s\n", s);
  char *s1 = reverse(s);
  //printf("%s\n", s1);

  while(*s1 != '\0') {
    printf("%c", *s1);
    *s1++;
  }//*/
}
int main(void) {
  //test_strcat();
  test_reverse();
}
