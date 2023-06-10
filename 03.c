
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("Test v8.3: OK.\n");
	srand(time(0));

	int i,j,max,min,a[4][4],b[4];
	
	printf("Your matrix:\n");
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++) {
			a[i][j]=rand()%99+11;
			if(j==3){printf("%d\n",a[i][j]);}
			else{printf("%d, ",a[i][j]);}
		}
	}
	
	//Matrix analysis
	for(i=0;i<4;i++) {
		max=0;min=100;
		for(j=0;j<4;j++) {
			if(i%2==0) {
				if(a[j][i]>max){max=a[j][i];b[i]=max;}
			} else {
				if(a[j][i]<min){min=a[j][i];b[i]=min;}
			}
		}
	}
	
	printf("\nYour array:\n");
	for(i=0;i<4;i++) {
		if(i==3) {
			printf("%d\n",b[i]);
		} else {
			printf("%d, ",b[i]);
		}
	}
	
	return 0;
}
