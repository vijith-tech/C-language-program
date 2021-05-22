 #include<stdio.h>
 int main(void){
 	printf("vi\n");
 	int a,b,c, choice;
 	switch(choice)
 	{
 		printf ("\n 1. press 1 for addition");
 		printf ("\n 2. press 2 for subtrqction");
 		printf ("\n enter your choice");
 		scanf("%d, &choice");
 		switch(choice)
 		{
		 case1:
 			printf("enter the numbers");
 			scanf("%d%d", &a, &b);
 			c=a+b;
 			printf("%d",c);
 			break;
 		case2:
 			printf("enter the numbers");
 			scanf("%d%d", &a, &b);
 			c=a-b;
 			printf("%d",c);
 			break;
 		default:
 			printf("you have passed a wrong key");
 			printf("\n press any key to continue");
		}
	}
	 
	 return 0;
 }
