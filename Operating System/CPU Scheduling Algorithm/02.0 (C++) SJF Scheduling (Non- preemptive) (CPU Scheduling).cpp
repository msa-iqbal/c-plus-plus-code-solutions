#include <bits/stdc++.h>
#include<stdio.h>

int main()
{
        int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
        float avg_wt,avg_tat;
        printf("\n Enter number of process: ");
        scanf("%d",&n);

        /// Process number
        printf("\n Enter Burst Time:\n");
        for(i=0;i<n;i++)
        {
            printf(" P%d: ",i+1);
            scanf("%d",&bt[i]);
            p[i]=i+1;
        }

        /// Sorting burst time (Ascending order using selection sort)
        for(i=0;i<n;i++)
        {
                pos=i;
                for(j=i+1;j<n;j++)
                {
                    if(bt[j]<bt[pos])
                        pos=j;
                }

                temp=bt[i];
                bt[i]=bt[pos];
                bt[pos]=temp;

                temp=p[i];
                p[i]=p[pos];
                p[pos]=temp;
        }

        wt[0]=0;

        /// Calculate Waiting time
        for(i=1;i<n;i++)
        {
                wt[i]=0;
                for(j=0;j<i;j++)
                    wt[i]+=bt[j];

                total+=wt[i];
        }

       /// Average Waiting time
        total=0;
        avg_wt=(float)total/n;

        printf("\n Process\t    Burst Time    \tWaiting Time\tTurnaround Time");
        /// Calculate Turnaround time
        for(i=0;i<n;i++)
        {
                tat[i]=bt[i]+wt[i];
                total+=tat[i];
                printf("\n P%d\t\t  %d\t\t    %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
        }

        /// Average turnaround time
        avg_tat=(float)total/n;
        printf("\n\n Average Waiting Time=%.2f",avg_wt);
        printf("\n Average Turnaround Time=%.2f\n",avg_tat);

        return 0;
}

/* ---- Output -----
Input:
           Enter the number of process: 4
           Enter Burst time:
           P1: 5
           P2: 7
           P3: 1
           P4: 2

Result:
           Process    Burst Time    Waiting Time    Turnaround Time
           P1              1                     0                          1
           P2              2                     1                          3
           P3              5                     3                          8
           P4              7                     8                          15

           Average Waiting Time: 0.00
           Average Turnaround Time: 6.75
*/
