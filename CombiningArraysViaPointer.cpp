#include <stdlib.h>
#include <stdio.h>

int main(){
	int A[100],B[100];
	int *ptr1,*ptr2;
	int n,m,i;
	printf("The size of the first array(max 50): \n");
	scanf("%d",&n);
	for(ptr1=A;ptr1<A+n;ptr1++){
		printf("The %d element: ",ptr1-A);
		scanf("%d",ptr1);
	}
	printf("The size of second array: \n");
	scanf("%d",&m);
	for(ptr2=B;ptr2<B+m;ptr2++){
		printf("The %d element: ",ptr2-B);
		scanf("%d",ptr2);
	}
	printf("First array: \n");
	for(i=0;i<n;i++){
		printf("%d\n",*(A+i));
	}
	printf("Second array: \n");
	for(i=0;i<m;i++){
		printf("%d\n",*(B+i));
	}
	for(ptr1=A+n,ptr2=B;ptr2<B+m;ptr1++,ptr2++){
		*ptr1=*ptr2;
	}
	printf("After combining: \n");
	for(i=0;i<n+m;i++){
		printf("%d\n",*(A+i));
	}
	return 0;
}
