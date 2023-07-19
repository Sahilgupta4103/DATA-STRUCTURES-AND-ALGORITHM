#include <stdio.h>


// C.T = process complete execution
// T.A.T = C.T-Arrival time
// W.T = T.A.T-Burst time
// for arrival time = same (0) T.A.T=C.T

int main()
{
    printf("enther numer of processes \n");
    int n;
    scanf("%d",&n);
    int bt[n];
    for(int i=0;i<n;i++){
        printf("enter the burst time of %d process\n",i+1);
        scanf("%d",&bt[i]);
    }
    int wt[n];
    wt[0]=0;
    for(int i=1;i<n;i++){
        wt[i] = bt[i-1] + wt[i-1];
    }
    for(int i=0;i<n;i++){
        printf(" waiting time of %d process is: %d \n",i+1,wt[i]);
    }
    for(int i=0;i<n;i++){
        printf(" burst time of %d process is:%d\n",i,bt[i]);
    }
    int tat[n];
    int tatsum=0;
    for(int i=0;i<n;i++){
        tat[i]=bt[i]+wt[i];
    }
    
    int wtsum=0,btsum=0;
    for(int i=0;i<n;i++){
        wtsum += wt[i];
        btsum += bt[i];
        tatsum += tat[i];
    }
    printf("average waiting time :%d\n" , wtsum/n );
    printf("average turn around time :%d\n" , tatsum/n );
    
}


