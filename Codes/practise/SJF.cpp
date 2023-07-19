#include <bits/stdc++.h>
using namespace std;


// C.T = process complete execution
// T.A.T = C.T-Arrival time
// W.T = T.A.T-Burst time
// for arrival time = same (0) T.A.T=C.T

int main()
{
 
    int a[100][4];
    int i,j,n,total=0,index,temp;
    float avgwt,avgtat;
    cout<<"p no?"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"p"<<i+1;
        cin>>a[i][1];
        a[i][0]=i+1;
    }
    
    for(int i=0;i<n;i++){
        index=i;
        for(j=i+1;j<n;j++){
            if(a[j][1]<a[index][i]){
                index=j;
            }
            temp=a[i][1];
            a[i][1]=a[index][1];
            a[index][1]=temp;
        }
        temp=a[i][0];
        a[i][0]=a[index][0];
        a[index][0]=temp;
    }
    
    a[0][2] = 0;
    
    //calculating waiting time
    
    for(int i=1;i<n;i++){
        a[i][2]=0;
        for(int j=0;j<i;j++){
            a[i][2]+=a[j][1];
        }
        total+=a[i][2];
    }
    avgwt = (float)total/n;
    total=0;
    
    //calculating turn arounmd time.
    
    for(int i=0;i<n;i++){
        a[i][3] = a[i][1]+a[i][2];
        total+=a[i][3];
        
        cout<<"process      "<<a[i][0]<<"       "<<a[i][1]<<"       "<<a[i]
[2]<<"      "<<a[i][3]<<endl;    }
avgtat = total/n;
cout<<"average waiting time : "<<avgwt<<endl;
cout<<"average turn around time : "<<avgtat<<endl;
    
    
        
    
    
 
}


