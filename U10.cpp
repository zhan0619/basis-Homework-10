#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
  char S[5000];
  while(scanf("%s",S)==1) 
      {
         int a,N=strlen(S);
         for(a=N-1;a>=0;a--)
             if(S[a]>='a')  
               printf("%c",S[a]-'a'+'A'); 
             else 
               printf("%c",S[a]-'A'+'a');
          puts(""); 
      } 
 system ("pause");
 return 0;   
}
