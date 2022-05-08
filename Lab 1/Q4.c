#include <stdio.h>
#define n 5

int main(){
	
	char set[n][20];
	int age[n][1];
	float deg[n][1];
	int i;
	printf("\nEnter name of 5 people:\n");
	for( i = 0 ; i< n; i++){
		scanf("%s", &set[i]);
	}
		printf("\nEnter age of 5 people:\n");
	for( i = 0 ; i< n; i++){
		scanf("%d", &age[i]);
	}
	
	for( i = 0; i < n; i++){
		if(age[i][0] <= 20){
			deg[i][0] = 1;
		}
		else if(age[i][0] <= 30){
			deg[i][0] = (30 - age[i][0])/10.0;
		}
		else{
			deg[i][0] = 0;
		}
	}
	
	//Question no a
	printf("\t(a):\n");
	printf("{ ");
	for( i = 0; i< n; i++){
		if(i != n - 1){
			printf("(%s, %.2f), ", set[i], deg[i][0]);
		}
		else{
			printf("(%s, %.2f)", set[i], deg[i][0]);
		}		
	}
	printf(" }");
	
	
	for( i = 0; i < n; i++){
		if(age[i][0] <= 15){
			deg[i][0] = 1;
		}
		else if(age[i][0] <= 35){
			deg[i][0] = (35 - age[i][0])/20.0;
		}
		else{
			deg[i][0] = 0;
	}
			
	}
	
	//Question number b
	printf("\n\t(b): \n");
	printf("{ ");
	for(i = 0; i< n; i++){
		if(i != n - 1){
			printf("(%s, %.2f), ", set[i], deg[i][0]);
		}
		else{
			printf("(%s, %.2f) ", set[i], deg[i][0]);
		}
		
	}
	printf("} ");

	
	
	return 0;
}
