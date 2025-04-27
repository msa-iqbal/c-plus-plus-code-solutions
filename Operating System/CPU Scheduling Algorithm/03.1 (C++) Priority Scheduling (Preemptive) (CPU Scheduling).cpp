/// Priority Scheduling (Preemptive) (CPU Scheduling)

#include <iostream>
#include <algorithm>
using namespace std;

typedef struct proccess
{
        int at,bt,pr,ct,ta,wt;
        string pro_id;

}process;

bool compare(process a,process b)
{
        return a.at<b.at;        /* This schedule will always return TRUE if above condition comes */
}

bool compare2(process a,process b)
{
        return a.pr>b.pr;  /* This schedule will always return TRUE if above condition comes */
}

int main()
{
        process pro[10];
        float average_wait_time=0, average_turnaround_time=0;
        int n, i, j;
        // 'n' is number of process and 'i' is number of iteration

        cout<<" Enter the number of process: ";
        cin>>n;

        cout<<"\n Enter the ProID + BT_time + PR_time + AT_time: \n"<<endl;
        for(i=0; i<n; i++)
        {
                cout<<" ProID: ";
                cin>>pro[i].pro_id;
                cout<<" BT_time: ";
                cin>>pro[i].bt;
                cout<<" PR_time: ";
                cin>>pro[i].pr;
                cout<<" AT_time: ";
                cin>>pro[i].at;
                cout<<"\n";
        }


        /* sort is a predefined funcion  in <algorithm.h> header file */
        sort(pro,pro+n,compare);

        pro[0].ct=pro[0].bt+pro[0].at;
        pro[0].ta=pro[0].ct-pro[0].at;
        pro[0].wt=pro[0].ta-pro[0].bt;
        i=1;

        while(i<n-1)
        {
                    for(j=i;j<n;j++)
                    {
                        if(pro[j].at>pro[i-1].ct)
                        break;
                    }
                    sort(pro+i,pro+i+(j-i),compare2);
                    pro[i].ct=pro[i-1].ct+pro[i].bt;
                    pro[i].ta=pro[i].ct-pro[i].at;
                    pro[i].wt=pro[i].ta-pro[i].bt;
                    i++;
          }
        pro[i].ct=pro[i-1].ct+pro[i].bt;
        pro[i].ta=pro[i].ct-pro[i].at;
        pro[i].wt=pro[i].ta-pro[i].bt;

        cout<<" ProID\tBT_time\tPR_time\tAT_time\tCT_time\tWT_time\tTT_time\n";
        for(i=0;i<n;i++)
        {
                    cout<<" "<<pro[i].pro_id<<"\t"<<pro[i].bt<<"\t"<<pro[i].pr<<"\t"<<pro[i].at<<"\t"<<pro[i].ct<<"\t"<<pro[i].wt<<"\t"<<pro[i].ta;
                    cout<<endl;

                    average_wait_time +=pro[i].wt;
                    average_turnaround_time +=pro[i].ta;
        }
        cout<<"\n Average Waiting Time: "<<average_wait_time/n;
        cout<<"\n Average Turnaround Time: "<<average_turnaround_time/n<<endl;

        return 0;
}


/* ---- Output -----
 Input:
                Enter the number of process: 4
                Enter the ProID + BT_time + PR_time + AT_time:

                ProID: 1
                BT_time: 5
                PR_time: 2
                AT_time: 2

                ProID: 2
                BT_time: 3
                PR_time: 3
                AT_time: 0

                ProID: 3
                BT_time: 4
                PR_time: 1
                AT_time: 1

                ProID: 4
                BT_time: 7
                PR_time: 4
                AT_time: 2

Result:
                 ProID     BT_time    PR_time    AT_time    CT_time    WT_time    TT_time
                 2         3          3          0          3          0          3
                 4         7          4          2          10         1          8
                 1         5          2          2          15         8          13
                 3         4          1          1          19         14         18

                 Average Waiting Time: 5.75
                 Average Turnaround Time: 10.5

*/
