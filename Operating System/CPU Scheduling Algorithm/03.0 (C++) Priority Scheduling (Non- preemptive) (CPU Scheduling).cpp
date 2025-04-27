// Priority Scheduling (Non- preemptive) (CPU Scheduling)

#include<bits/stdc++.h>
using namespace std;

int main()
{
          int burst_time[20], process[20], waiting_time[20], turnaround_time[20], priority[20];
          int i, j, limit, sum = 0, position, temp;
          float average_wait_time, average_turnaround_time;

          printf("Enter the Total Number of Processes:  ");
          scanf("%d", &limit);

          printf("\nEnter [Burst Time] and [Priority] for %d Processes: \n", limit);
          for(i = 0; i < limit; i++)
          {
                    printf("\nProcess[%d]\n", i + 1);
                    printf("Burst Time: ");
                    scanf("%d", &burst_time[i]);
                    printf("Priority: ");
                    scanf("%d", &priority[i]);
                    process[i] = i + 1;
          }

          for(i = 0; i < limit; i++)
          {
                    position = i;

                    for(j = i + 1; j < limit; j++)
                    {
                              if(priority[j] < priority[position])
                              {
                                    position = j;
                              }
                    }
                    temp = priority[i];
                    priority[i] = priority[position];
                    priority[position] = temp;
                    temp = burst_time[i];
                    burst_time[i] = burst_time[position];
                    burst_time[position] = temp;
                    temp = process[i];
                    process[i] = process[position];
                    process[position] = temp;
          }
          waiting_time[0] = 0;

          for(i = 1; i < limit; i++)
          {
                    waiting_time[i] = 0;
                    for(j = 0; j < i; j++)
                    {
                          waiting_time[i] = waiting_time[i] + burst_time[j];
                    }
                    sum = sum + waiting_time[i];
          }
          average_wait_time = sum / limit;
          sum = 0;

          printf("\nProcess ID\t\tBurst Time\t Waiting Time\t Turnaround Time");
          printf("\n-------------\t\t-----------\t -------------\t ------------------- \n");
          for(i = 0; i < limit; i++)
          {
                    turnaround_time[i] = burst_time[i] + waiting_time[i];
                    sum = sum + turnaround_time[i];
                    printf("\nProcess[%d]\t\t%d\t\t %d\t\t %d", process[i], burst_time[i], waiting_time[i], turnaround_time[i]);
          }
          average_turnaround_time = sum / limit;
          printf("\n\nAverage Waiting Time: %.2f", average_wait_time);
          printf("\nAverage Turnaround Time: %.2f\n", average_turnaround_time);

          return 0;
}

/* ---- Output -----
Input:
                    Enter the Total Number of Processes:  4
                    Enter [Burst Time] and [Priority] for 4 Processes:

                    Process[1]
                    Burst Time: 5
                    Priority: 2

                    Process[2]
                    Burst Time: 3
                    Priority: 3

                    Process[3]
                    Burst Time: 4
                    Priority: 1

                    Process[4]
                    Burst Time: 7
                    Priority: 4

Result:
                    Process ID              Burst Time       Waiting Time    Turnaround Time
                    -------------           -----------      -------------   -------------------

                    Process[3]              4                0               4
                    Process[1]              5                4               9
                    Process[2]              3                9               12
                    Process[4]              7                12              19

                    Average Waiting Time: 6.00
                    Average Turnaround Time: 11.00
*/
