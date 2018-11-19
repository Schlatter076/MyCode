#include <stdio.h>
#include <string.h>

/**
 * ���������ַ���
 * @param  str �ַ���1
 * @param  ch  �ַ���2
 */
void str_cat(char *str, char *ch)
{
  char *tem = str; //ȡ��һ���ַ������׵�ַ
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
  char s2[] = "\r\nmy name is Loyer!";  //�ӻ��з���Ϊ�˴�ӡ�ÿ�һ���^_^
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
  start -= 1; //ָ��ص��ַ���ĩβ
  end = start; //endָ���ַ���ĩβ
  mid = end;  //��mid��¼endָ��λ��
  while(*start != *str) {
    *end++ = *start--;
  }
  *--start = '\0';
  *end = *++start;  //ȡ�ַ�����λ
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
