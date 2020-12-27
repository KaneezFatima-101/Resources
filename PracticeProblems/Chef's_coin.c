#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	long int i,n;
	scanf("%d",&t);
	int ap[100000], result=0;
	ap[1] = 1;
    for(i=2;i<100000;i++){
        ap[i] = ap[i-1]+i;
    }

	while(t>0){
	    scanf("%ld",&n);
	    int lb, ub, mid;
	    lb=0;
	    ub=n-1;
	    mid=(lb+ub)/2;
	    while(lb<=ub){
	       if(n==ap[mid]){
	           result = mid;
	           break;
	        }
	        else if(n<ap[mid]){
	           ub=mid-1;
	           result = mid-1;
	           mid=(lb+ub)/2;
	        }
	        else if(n>ap[mid]){
	           lb=mid+1;
	           result = mid;
	           mid=(lb+ub)/2;
	       }
       }
       printf("%d\n",result);
	   t--;
	}
	return 0;
}
