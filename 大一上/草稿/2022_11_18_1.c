#include <stdio.h>

int main()
{
   char str1[500],str2[500];
   int i=0,j=0;
   printf("�������һ���ַ���:");
   scanf("%s",&str1);  
   printf("\n������ڶ����ַ���:");
   scanf("%s",&str2);
   for(i=0;str1[i]!='\0';)
		i++;
   for(;str2[j]!='\0';i++,j++)   
   {
      str1[i]=str2[j];  
     
   }
  str1[i]='\0';
  printf("\n�����ַ������Ӻ�%s \n",str1);
  return 0;
}
