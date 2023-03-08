#include <bits/stdc++.h>
using namespace std;


// C.T = process complete execution
// T.A.T = C.T-Arrival time
// W.T = T.A.T-Burst time
// for arrival time = same (0) T.A.T=C.T

struct Process{
  int pid;
  int bt;
  int pr;
};

bool comp(Process a, Process b){
    return (a.pr>b.pr);
}

int main()
{
 
    Process p[] = {{1,10,20},{2,5,0},{3,8,1}};
    int n = sizeof p/sizeof p[0];
    int wts=0,tats=0;
    int wt[n]={0},tat[n]={0};
    
     
    sort(p,p+n,comp);
    wt[0]=0;
    for(int i=0;i<n;i++){
        wt[i]=p[i-1].bt+wt[i-1];

    }
    for(int i=0;i<n;i++){
        tat[i] = p[i].bt + wt[i];
    }
    
    for(int i=0;i<n;i++){
        wts+=wt[i];
        tats+=tat[i];
    }

    cout<<"avg wt : "<<wts/3<<endl;;
    cout<<"avg tat : "<<tats/3;
    
   return 0; 
}


