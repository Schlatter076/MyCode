#include <stdio.h>
//#define NDEBUG
//#include <assert.h>

#define TRUE 1
#define FALSE 0

/*
 * ��������value�Ƿ������source��,�����ڷ���FALSE
 * ������ڣ��򷵻�TRUE
 * count�����ַ�������
 */
int find_char_1(char **strings, char value, int count)
{
  char *tem;
  int num = 0;
  while((tem = *strings++) != NULL)
  {
      num++;  //���Ƴ���ѭ������
      while(*tem != '\0')
      {
          if(*tem++ == value)
          {
            return TRUE;
          }
      }
      if(num >= count)  //��֪��ΪʲôֻҪ���������ҵ�ֵ�����������ͣ����
        break;
  }
  return FALSE;
  //*/
}
char * strchr_1( const  char *str,  int ch)
{

   while (*str && *str != (char)ch)

        str++;

   if (*str == (char)ch)

        return((char *)str);

   return(NULL);

}
/*
 * ��������chars�Ƿ������source��,�����ڷ���NULL
 * ������ڣ��򷵻����һ�γ��ֵ�λ��
 */
char *find_char(char *source, char *chars)
{
  if(source == NULL || chars == NULL)
  {
    return NULL;
  }
  int index = 0;
  char *str = source;
  while(str++ != NULL)
  {
    if(*str == *chars)
    {
      while(chars++ != NULL)
      {
        if(*str ==*chars)
        {
          //find_char(str, chars);
          return str;
        }
      } //*/
      //return str;
    }
  }
  return NULL;
}
/*
 * ���str�����substr����ɾ��substr��һ�γ�����str�е����ַ���������TRUE
 * ���򷵻�FALSE
 */
int del_subStr(char *str, char *substr)
{
  char *ptr = find_char(str, substr);

}

int sum(int a, int b)
{
    return a + b;
}
int test(int a, int b, int (*fuc)())
{
    return (*fuc)(a, b);
}
int main(void)
{
  /*
  const char *dajiba = "123456789lkjh";
  int num = 'k';
  char * xiao = strchr_1(dajiba, num);
  if(xiao == NULL)
    printf("%d\n", 20);
  else
    printf("%s\n", xiao);
  //*/
  /*
  int (*func)() = sum; //funcΪָ����sum��ָ��
  int integer = test(10, 20, func); //�Ժ�����Ϊ��������
  printf("%d", integer);
  printf("\n===========================================\n");
  //*/
  //printf("%d\n", NULL);
  char *str_1[] = {"abcdefgh", "klmnopq789", "QWERTY", "123456"};
  char **tptr = str_1;
  //str_1 = &array;
  //char *tptr = "abcdefgh";
  char value = 'i';
  //printf("%d\n", sizeof(*tptr));
  int temp = find_char_1(tptr, value, 4);
  printf("����ֵ��%d\n", temp);
  //*/
  /*
  char *sou = "what is can i do for you ?";
  char *ch = "for you";
  char *s = "how can";
  char *str = find_char(sou, s);
  if(str != NULL)
  {
    printf("found '%s' in %d at '%s'\n", s, (str - sou + 1), sou); //��ӡ��һ�γ��ֵ�λ��
  }
  else
    printf("can not found %s in %s!\n", ch, sou);
  //*/

}
