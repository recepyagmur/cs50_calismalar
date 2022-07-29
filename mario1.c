#include <stdio.h>

int main(){
	int i=0,n,j,a,c;
	
	do{
		printf("len: ");
		scanf("%d",&n);
		if(n>=1 && n<=8){
			break;
			
		}
		else{
			continue;
		}
	}while(i==0);
	
	a =1;
	c=n;
	for(i;i<n;i++){
		
		for(j=c;j>1;j--){
			printf(" ");	
		}
		
		for(j=0;j<a;j++){
			printf("#");
		}
		a++;
		c--;
		printf("\n");
		
	}
	return 0;
}
