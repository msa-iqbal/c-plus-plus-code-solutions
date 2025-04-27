#include <bits/stdc++.h>
using namespace std;

int main()
{
        float process[500],aTime[500],bTime[500],abTime[500],wTime[500],tat_time[500];
        int n = 0, i = 0 ;
        float aw_time = 0, atat_time = 0;

        printf("\n Burst Time (BT) | Arrive Time (AT) | Waiting Time (WT) | Turnaround Time (TT) \n");
        printf("\n Enter the number of process : ");
        scanf("%d",&n);

        printf(" Enter the Arrival time and Burst time.\n\n");
        printf("\tBT_time  AT_time\n");
        for(i = 0; i<n; i++){
            process[i]=i+1;
            printf("P%d :\t", i+1);
            scanf("%f\t%f",&aTime[i],&bTime[i]);
        }

        printf("\n\nProcess\tBT_time\tAT_Time\n");
        for(i = 0 ; i < n ; i++){
            printf("P[%d]\t%.2f\t%.2f\n",i+1, aTime[i], bTime[i]);
        }

        wTime[0] = 0;
        tat_time[0] = bTime[0];
        abTime[0] = bTime[0]+aTime[0];
        for( i = 1 ; i < n ; i++){
            abTime[i] = abTime[i-1] + bTime[i];
            tat_time[i] = abTime[i] - aTime[i];
            wTime[i] = tat_time[i] - bTime[i];
        }

        for(i = 0 ; i < n ; i++){
            aw_time = aw_time + wTime[i];
            atat_time = atat_time + tat_time[i];
        }

        printf("\n\tBT_time\tAT_time\tCT_time\tTT_time  WT_time\n");
        for(i = 0 ; i < n ; i++){
            printf("P[%d]\t%.2f\t%0.2f\t%0.2f\t%0.2f\t%0.2f\n",i,aTime[i],bTime[i],abTime[i],tat_time[i],wTime[i]);
        }
        printf("\nAverage waiting time : %0.2f",aw_time/n);
        printf("\nAverage turn around time : %0.2f \n",atat_time/n);
}


/* ---- Output ----
 Burst Time (BT) | Arrive Time (AT) | Waiting Time (WT) | Turnaround Time (TT)

 Input:
             Enter the number of process : 4
             Enter the Arrival time and Burst time.

                    BT_time  AT_time
            P1 :    3        2
            P2 :    2        0
            P3 :    8        3
            P4 :    1        5

Output:
                        BT_time AT_time  CT_time  WT_time
            P[1]    3.00        2.00        2.00        0.00
            P[2]    2.00        0.00        3.00        3.00
            P[3]    8.00        3.00        0.00        -3.00
            P[4]    1.00        5.00        12.00      7.00

            Average waiting time: 1.75
            Average turn around time: 4.25

*/
