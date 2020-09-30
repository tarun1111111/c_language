#include<stdio.h>
int main()
{ 
char v;
     	printf("ENTER THE CHARACTER:");
		scanf("%c",&v);
		if(v=='e'||v=='o'||v=='u'||v=='a'||v=='i'||v=='A'||v=='E'||v=='I'||v=='O'||v=='U')
		{
			printf(" %c: IT IS A VOWEL:",v);	
	    }
	    else
	    {
	    	printf("%c:IT IS A CONSTANT:",v);
		}
return 0;
}

