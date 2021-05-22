#include<stdio.h>
int main(){
	char grade ='c';
	switch (grade){
		case 'A':
			printf("excellant!/n");
			break;
			case 'B':
				case 'C':
					printf("well done \n");
					break;
					case 'D':
						printf ("you are passed\n");
						break;
						case 'E':
							printf("try to pass\n");
							break;
							default:
								printf("bad grade\n");
	}
	printf("your grade is %c\n",grade);
	return 0;
}
