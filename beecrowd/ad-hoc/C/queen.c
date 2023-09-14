	#include <stdio.h>
	#include <stdbool.h>
	#include <stdlib.h>
	int main(){
		int X1, X2,Y1,Y2;
		while(true){
			scanf("%d %d %d %d", &X1,&Y1,&X2, &Y2);
			if(X1 == 0 && Y1 == 0 && X2 == 0 && Y2 == 0) break;
		
			if(X1 == X2  && Y1 == Y2) printf("0\n");
			else if(abs(X2-X1) == abs(Y2-Y1)) printf("1\n");
			else if(X1 == X2 || Y1 == Y2) printf("1\n");
			else printf("2\n");
		}
		return 0;
	}
