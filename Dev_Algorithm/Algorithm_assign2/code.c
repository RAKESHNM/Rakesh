#include <stdio.h>

int main(void) {
        int n=4;
        m=2*n;
	int X[n]={1,3,5,7};
	int Y[n]={2,4,5,10};
	int Z[m],i=0,j=0,k=0;
	while(i<n)
	{
     
     if(X[i]==Y[j])
        {
        Z[k++]=X[i];
        j++;
        i++;
        m--;
        }
        if(X[i]<Y[j])
       {
        Z[k++]=X[i];
        i++;
       }
        else
        {
            Z[k++]=Y[j];
            j++;
        }
    
        
	}
	while(i<n)
        Z[m]=X[i++];
        while(j<4);
        Z[m]=Y[j++];
	      for(i=0;i<m;i++)
	      printf("%d\t",Z[i]);

	return 0;
}

