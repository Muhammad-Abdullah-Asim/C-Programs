#include<stdio.h>
#include<math.h>
int main()
{
	int x1;
	int x2;
	int y1;
	int y2;
	int distance;
	printf("this is useed to calculate the distance between two points\n");
	printf("enter x1:");
	scanf("%d",&x1);
	printf("enter x2:");
	scanf("%d",&x2);
	printf("enter y1:");
	scanf("%d",&y1);
	printf("enter y2:");
	scanf("%d",&y2);
	distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("the distance is: %d",distance);
    return 0;
}
