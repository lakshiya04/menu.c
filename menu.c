#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	switch(x)
		{
			case 1:
				printf("Food Item:Idly");
				printf("\nPrice:Rs 239");
				break;
			case 2:
				printf("Food Item:Augratin");
				printf("\nPrice:Rs 129");
				break;
			case 3:
				printf("Food Item:Pulao");
				printf("\nPrice:Rs 179");
				break;
			case 4:
				printf("Food Item:Pani Puri");
				printf("\nPrice:Rs 99");
				break;
			case 5:
				printf("Food Item:Chicken Tikka");
				printf("\nPrice:Rs 149");
				break;
			default:
				printf("Invalid Choice!!");
				
		}
		return 0;
}
