#include <stdio.h>

#define uchar unsigned char
#define uint unsigned int

void ByteToHexStr(const uchar* source, char* dest, int sourceLen);
int main()
{
  char ch = 'A';
  int i = 26;
  double d = 3.14;
  char *p1 = &ch;
  int *p2 = &i;
  double *p3 = &d;
  printf("%d\n%d\n%d\n", sizeof(p1), sizeof(p2), sizeof(p3));
  /**
  printf("%d\n", sizeof(int));  //4
  printf("%d\n", sizeof(char));  //1
  printf("%d\n", sizeof(short));  //2
  printf("%d\n", sizeof(long));  //4
  printf("%d\n", sizeof(float));  //4
  printf("%d\n", sizeof(double)); //8
  printf("%d\n", sizeof(unsigned char));
  printf("%d\n", sizeof(unsigned int));
  */
 /*
  uchar start[] = {0x60, 0x83, 0x0A, 0x53, 0x00, 0x76};
  uchar n;
  for(n = 0; n < sizeof(start); n++)
  {
    printf("%4d", start[n]);
  }
  putchar('\n');
  const uchar* s = start;
  char* dest = " ";
  int len = 6;
  ByteToHexStr(s, dest, len);
  printf("%s\n", &dest);
  //*/
}
void ByteToHexStr(const uchar* source, char* dest, int sourceLen)
{
  short i;
  uchar highByte, lowByte;
  for(i = 0; i < sourceLen; i++)
  {
    highByte = source[i] >> 4;
    lowByte = source[i] & 0x0f;
    highByte += 0x30;

    if(highByte > 0x39)
      dest[i*2] = highByte + 0x07;
    else
      dest[i*2] = highByte;

    lowByte += 0x30;
    if(lowByte > 0x39)
      dest[i*2+1] = lowByte + 0x07;
    else
      dest[i*2+1] = lowByte;
  }
  return;
}
