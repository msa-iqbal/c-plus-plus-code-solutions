/// SJF Scheduling (Preemptive) (CPU Scheduling)

#include <bits/stdc++.h>
#include <algorithm>
#include <cstring>
using namespace std;

typedef struct proccess
{
        int at,bt,ct,ta,wt,btt;
        string pro_id;
}
Schedule;

bool compare(Schedule a, Schedule b)
{
	   return a.at<b.at;   /* This Schedule will always return TRUE if above condition comes*/
}
bool compare2(Schedule a,Schedule b)
{
	   return a.bt<b.bt;  /* This Schedule will always return TRUE if above condition comes*/
}

int main()
{
        Schedule pro[10];
        int n, i, j, pcom;
        // 'n' is number of process and 'i' is number of iteration

        cout<<" Enter the number of Process: ";
        cin>>n;

        cout<<"\n Enter the ProID + BT_time + AT_time: \n"<<endl;

        for(i=0;i<n;i++)
        {
                cout<<" ProID: ";
                cin>>pro[i].pro_id;
				cout<<" BT_time: ";
                cin>>pro[i].bt;
				cout<<" AT_time: ";
                cin>>pro[i].at;
                pro[i].btt=pro[i].bt;
				cout<<"\n";
        }

        sort(pro,pro+n,compare);  /* sort is a predefined funcion  in <algorithm.h> header file */

        i=0;
        pcom=0;
        while(pcom<n)
        {
                for(j=0;j<n;j++)
                {
                    if(pro[j].at>i)
                    break;
                }

                sort(pro,pro+j,compare2);

                if(j>0)
                {
                        for(j=0;j<n;j++)
                        {
                                if(pro[j].bt!=0)
                                break;
                        }
                        if(pro[j].at>i)
                        {
                                i=pro[j].at;
                        }
                        pro[j].ct=i+1;
                        pro[j].bt--;
                }
                i++;
                pcom=0;

                for(j=0;j<n;j++)
                {
                        if(pro[j].bt==0)
                        pcom++;
                }
        }

        cout<<" ProID\tAT_time\tBT_time\tCT_time\tTT_time\tWT_time\n";

       float avg_wt=0, avg_tt=0 ;

        for(i=0;i<n;i++)
        {
                pro[i].ta=pro[i].ct-pro[i].at;
                pro[i].wt=pro[i].ta-pro[i].btt;

                avg_wt +=pro[i].ta-pro[i].btt;
                avg_tt +=pro[i].ct-pro[i].at;
                cout<<" P: "<<pro[i].pro_id<<"\t"<<pro[i].at<<"\t"<<pro[i].btt<<"\t"<<pro[i].ct<<"\t"<<pro[i].ta<<"\t"<<pro[i].wt;
                cout<<endl;
        }
        cout<<"\n Average Waiting Time: "<<avg_wt/n;
        cout<<"\n Average Turnaround Time: "<<avg_tt/n;

         return 0;
}

/* ---- Output -----
 Input:
                     Enter the number of Process: 4
                     Enter the ProID + BT_time + AT_time:

                     ProID: 1
                     BT_time: 5
                     AT_time: 0

                     ProID: 2
                     BT_time: 7
                     AT_time: 5

                     ProID: 3
                     BT_time: 1
                     AT_time: 2

                     ProID: 4
                     BT_time: 2
                     AT_time: 3

Result:
                     ProID  AT_time BT_time CT_time TT_time WT_time
                     P: 3   2       1       3       1       0
                     P: 4   3       2       5       2       0
                     P: 1   0       5       8       8       3
                     P: 2   5       7       15      10      3

                     Average Waiting Time: 1.5
                     Average Turnaround Time: 5.25
*/
