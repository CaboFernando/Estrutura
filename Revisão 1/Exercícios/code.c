#include <stdio.h>
int fat(int n);
int main(){    
    printf("%d",fat(4));
}

int fat(int n){
    int r,i;
	r=1;	
	for(i=n; i>1; i--){
		r = r*i;
	}
	return r;	
}