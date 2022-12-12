#include <bits/stdc++.h>
using namespace std;


// C.T = process complete execution
// T.A.T = C.T-Arrival time
// W.T = T.A.T-Burst time
// for arrival time = same (0) T.A.T=C.T

int main()
{
    int n;
    cout<<"enter number of processes"<<endl;
    cin>>n;
    vector<int> at(n);
    for(int i=0;i<n;i++){
        cout<<"enter the arrival time of process"<<i+1<<endl;
        cin>>at[i];
    }
    vector<int> bt(n);
    for(int i=0;i<n;i++){
        cout<<"enter the burst time of process"<<i+1<<endl;
        cin>>bt[i];
    }
    vector<int> wt(n);
    wt[0]=0;
    vector<int> tat(n);
    vector<int> servicetime(n);
    servicetime[0] = at[0];
    for(int i=1;i<n;i++){
        
    servicetime[i]=servicetime[i-1]+bt[i-1];
        wt[i] = servicetime[i]-at[i];
    }
    for(int i=0;i<n;i++){
        tat[i] = bt[i] + wt[i];
    }
    int tatsum=0,wtsum=0;
    for(int i=0;i<n;i++){
        tatsum+=tat[i];
        wtsum+=wt[i];
    }
    cout<<"average waiting time "<<(wtsum/n)<<endl;
    cout<<"averafe turn arount time "<<(tatsum/n)<<endl;
    
}


