#include <bits/stdc++.h>
using namespace std;

int main(){

        int n, bt[20], wt[20], tat[20], avwt=0, avtat=0, i, j;

        printf("\n Enter total number of processes: ");
        scanf("%d",&n);

        printf("\n Enter Process Burst Time \n");
        for(i=0; i<n; i++)
        {
            printf(" P[%d]:",i+1);
            scanf("%d",&bt[i]);
        }

        wt[0]=0;    //waiting time for first process is 0

        //calculating waiting time
        for(i=1; i<n; i++)
        {
            wt[i]=0;
            for(j=0;j<i;j++)
                wt[i]+=bt[j];
        }

        printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");

        //calculating turnaround time
        for(i=0;i<n;i++)
        {
            tat[i]=bt[i]+wt[i];
            avwt+=wt[i];
            avtat+=tat[i];
            printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
        }


        avwt/=i;
        avtat/=i;
        printf("\n\nAverage Waiting Time:%d",avwt);
        printf("\nAverage Turnaround Time:%d",avtat);

        return 0;
}

/* ---- Output ----
 Input: Enter total number of processes: 4
 Result:
                Enter Process Burst Time
                P[1]:3
                P[2]:5
                P[3]:1
                P[4]:7

                Process         Burst Time      Waiting Time    Turnaround Time
                P[1]            3               0               3
                P[2]            5               3               8
                P[3]            1               8               9
                P[4]            7               9               16

*/
