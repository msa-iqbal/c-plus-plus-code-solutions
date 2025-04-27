/// Round Robin Scheduling (Preemptive) (CPU Scheduling)

#include<bits/stdc++.h>
using namespace std;

int main()
{

      int count, j, n, time, remain, flag=0, time_quantum;
      int wait_time=0, turnaround_time=0, at[10], bt[10], rt[10];

      /* ----- Enter the total number of process ----- */
      printf("\n Enter the total number of Process: ");
      scanf("%d",&n);
      remain=n;

      /* ----- Enter the Burst time & Arrival Time for every process ----- */
      printf("\n Enter the [Burst Time & Arrival Time]: \n");
      for(count=0;count<n;count++)
      {
                printf("\n ProID [%d]",count+1);
                printf("\n BT Time: ");
                scanf("%d",&bt[count]);
                printf(" AT Time: ");
                scanf("%d",&at[count]);
                rt[count]=bt[count];
      }

       /* ----- Each Process is provided a fix time to execute, it's called a Time Quantum ----- */
      printf("\n Enter Time Quantum: ");
      scanf("%d",&time_quantum);

      /* ----- Showing final result for every process ----- */
      printf("\n\n Pro[ID]\tWT_time\t\tTT_time\n");
      for(time=0,count=0;remain!=0;)
      {
                if(rt[count]<=time_quantum && rt[count]>0)
                {
                          time+=rt[count];
                          rt[count]=0;
                          flag=1;
                }
                else if(rt[count]>0)
                {
                          rt[count]-=time_quantum;
                          time+=time_quantum;
                }

                if(rt[count]==0 && flag==1)
                {
                          remain--;
                          printf(" Pro[%d]\t\t%d\t\t%d \n",count+1,time-at[count]-bt[count],time-at[count]);
                          wait_time+=time-at[count]-bt[count];
                          turnaround_time+=time-at[count];
                          flag=0;
                }

                if(count==n-1)
                        count=0;
                else if(at[count+1]<=time)
                        count++;
                else
                        count=0;
      }

     printf("\n\n Average Waiting Time: %.2f\n",wait_time*1.0/n);
     printf(" Average Turnaround Time: %.2f \n",turnaround_time*1.0/n);

      return 0;
}

/*  ---- Output ---- //
Input:
                 Enter the total number of Process: 3
                 Enter the [Burst Time & Arrival Time]:

                 ProID [1]
                 BT Time: 22
                 AT Time: 0

                 ProID [2]
                 BT Time: 8
                 AT Time: 2

                 ProID [3]
                 BT Time: 3
                 AT Time: 3

                 Enter Time Quantum: 2

Result:
                 Pro[ID]        WT_time         TT_time
                 Pro[3]         5               8
                 Pro[2]         9               17
                 Pro[1]         11              33

                 Average Waiting Time: 8.33
                 Average Turnaround Time: 19.33

*/


