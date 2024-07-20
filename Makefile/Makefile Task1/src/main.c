#include <stdlib.h>
#include <stdio.h>
#include "../include/check.h"
int main()
{
	int num;
	char need;
	int again=1;


while(again==1)
{

	printf("Guess The Number:");
	scanf("%d", &num);
	if(check_Num(num))
	{
		printf("oh, you 're in my head! \n");
		again=0;
	}
	else
	{
		printf("you still don't have it,try one more time?! [y/n]");
		scanf(" %c", &need);
		if(need == 'y')
		{
			printf("let's Go \n");
			again=1;
		}
		else if(need == 'n')
		{
			printf("Bye Bye");
			again=0;
		}
		else
	       	{
			printf("not correct choies \n so, we have to say Bye Bye\n ");
			again =0;
		}

	}

}

	return 0;
}



