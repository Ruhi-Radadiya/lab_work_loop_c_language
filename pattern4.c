#include<stdio.h>
void main()
{
	int i,j,r=1;
	char c='A';
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i%2==0){
				printf("%c ",c++);
			}else{
				printf("%d ",r++);
			}
					}
		printf("\n");
	}
}