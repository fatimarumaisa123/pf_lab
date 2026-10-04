#include <stdio.h>
int main() 
{
    char arr[50];
    int i=0,p,vow=0,con=0;
   printf("input a string: ");
   scanf("%49[^\n]",&arr);
   printf("the string you entered: %s",arr);
    while(arr[i]!='\0')
    {
       i++; 
    }
    printf("\nnumber of characters entered: %d\n",i);
    printf("reverse: ");
    for (int j=i;j>=0;j-- )
    {
        printf("%c",arr[j]);
    }
    for(int k=0; k<i/2 ; k++)
    {
        if(arr[k]!=arr[i-1-k])
        {
           p=0;
        }
        else
        p=1;
      
    }
  if(p==1)
  printf("\nit is a palindorme");
  else
  printf("\nnot a palindorme");
  for (int k=0; k<i; k++)
  {
   if (arr[k]==' ')
   {
    con=con;
    vow=vow;
   }
   else if (arr[k]=='a'||arr[k]=='e'||arr[k]=='i'||arr[k]=='o'||arr[k]=='u'||arr[k]=='A'||arr[k]=='E'||arr[k]=='I'||arr[k]=='O'||arr[k]=='U')
   vow++;
   else
   con++;

  }
  printf("\nvowels= %d \nconsonants= %d",vow,con);
return 0;
}