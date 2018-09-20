#include <stdio.h>
//#define NDEBUG
//#include <assert.h>

#define TRUE 1
#define FALSE 0

/*
 * 用来查找value是否存在于source中,不存在返回FALSE
 * 如果存在，则返回TRUE
 * count代表字符串个数
 */
int find_char_1(char **strings, char value, int count)
{
  char *tem;
  int num = 0;
  while((tem = *strings++) != NULL)
  {
      num++;  //控制程序循环次数
      while(*tem != '\0')
      {
          if(*tem++ == value)
          {
            return TRUE;
          }
      }
      if(num >= count)  //不知道为什么只要不包含查找的值，就引起程序停不了
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
 * 用来查找chars是否存在于source中,不存在返回NULL
 * 如果存在，则返回其第一次出现的位置
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
 * 如果str里包含substr，则删除substr第一次出现在str中的子字符串，返回TRUE
 * 否则返回FALSE
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
  int (*func)() = sum; //func为指向函数sum的指针
  int integer = test(10, 20, func); //以函数作为函数参数
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
  printf("返回值是%d\n", temp);
  //*/
  /*
  char *sou = "what is can i do for you ?";
  char *ch = "for you";
  char *s = "how can";
  char *str = find_char(sou, s);
  if(str != NULL)
  {
    printf("found '%s' in %d at '%s'\n", s, (str - sou + 1), sou); //打印第一次出现的位置
  }
  else
    printf("can not found %s in %s!\n", ch, sou);
  //*/

}
