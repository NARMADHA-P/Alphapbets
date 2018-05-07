#include<stdio.h>
main()
{
char a;
if ((a>=97&&a<=122)||(a>=65&&a<=90))
{
  if(a=='a'||a=='A"||a=='e'||a=='E'||a=='i'||a=='I"||a=='o'||a=='O'||a=='u'||a=='U')
     printf("Vowel");
  else printf("Consonant");
}
else printf("Invalid input");
}
