/// Round Robin Scheduling (Non- preemptive) (CPU Scheduling)

#include <bits/stdc++.h>
using namespace std;

struct process
{
        int no;
        int at,et,wt,tt;
        int tet;
        int t;
};

int main()
{
        process p[99];
        int np, i=0, j=0, k=0;

        /* ----- Enter the total number of process ----- */
        cout<<"\n Enter the Total no. of Processes: ";
        cin>>np;
        cout<<endl;

        /* ----- Enter the Burst time for every process ----- */
        for (i=0;i<np;i++)
        {
                cout<<" Enter the Execution time (Burst time) of Process ["<<i+1<<"]: ";
                cin>>p[i].et;

                p[i].tet=p[i].et;
                p[i].at=p[i].t=p[i].tt=p[i].wt=0;
                p[i].no=i+1;
        }

        /* ----- Each Process is provided a fix time to execute, it's called a Time Quantum ----- */
        cout<<"\n Enter Time Quantum:";
        int q;
        cin>>q;

        int totaltime=0;
        for(i=0;i<np;i++)
        {
                totaltime+=p[i].et;
        }

        i=0, k=0;
        int rrg[99];
        for(j=0; j<totaltime; j++)
        {
                if((k==0)&&(p[i].et!=0))
                {
                        p[i].wt=j;
                        if((p[i].t!=0))
                        {
                            p[i].wt-=q*p[i].t;
                        }
                }
                if((p[i].et!=0)&&(k!=q))
                {
                        rrg[j]=p[i].no;
                        p[i].et-=1;
                        k++;
                }
                else
                {
                        if((k==q)&&(p[i].et!=0))
                        {
                              p[i].t+=1;
                        }
                        i=i+1;
                        if(i==np)
                        {
                             i=0;
                        }
                        k=0;
                        j=j-1;
                }
        }

        int twt=0;
        int ttt=0;

        cout<<"\n ---- Result Of Round Robin ----";
        cout<<"\n ProID\tBT_time\tWT_time\tTT_time";
        for(i=0;i<np;i++)
        {
            p[i].tt=p[i].wt+p[i].tet;
            ttt+=p[i].tt;
            twt+=p[i].wt;
            cout<<"\n "<<p[i].no<<"\t"<<p[i].tet<<"\t"<<p[i].wt<<"\t"<<p[i].tt;
        }
        cout<<"\n\n Average Waiting Time:"<<(float)twt/np;
        cout<<"\n Average Turn Around Time: "<<(float)ttt/np<<endl;

        return 0;
}


/* ---- Output -----
 Input:
                 Enter the Total no. of Processes: 3

                 Enter the Execution time (Burst time) of Process [1]: 3
                 Enter the Execution time (Burst time) of Process [2]: 7
                 Enter the Execution time (Burst time) of Process [3]: 4

                 Enter Time Quantum: 2
Result:
                 ---- Result Of Round Robin ----
                 ProID  BT_time WT_time TT_time
                 1      3       4       7
                 2      7       7       14
                 3      4       7       11

                 Average Waiting Time: 6
                 Average Turn Around Time: 10.6667
*/


/* ----------------------------------- Crazy Code 
#include <bits/stdc++.h>
using namespace std;
struct process{ int no, at,et,wt,tt,tet,t; };
int main(){ process p[99];  int np, i=0, j=0, k=0;  cout<<"\n Enter the Total no. of Processes: "; cin>>np;  cout<<endl;
for (i=0;i<np;i++){ cout<<" Enter the Execution time (Burst time) of Process ["<<i+1<<"]: "; cin>>p[i].et; p[i].tet=p[i].et; p[i].at=p[i].t=p[i].tt=p[i].wt=0; p[i].no=i+1; }
cout<<"\n Enter Time Quantum:"; int q; cin>>q; int totaltime=0; for(i=0;i<np;i++) totaltime+=p[i].et; i=0, k=0;  int rrg[99];
for(j=0; j<totaltime; j++) {  if((k==0)&&(p[i].et!=0)){ p[i].wt=j;  if((p[i].t!=0)) p[i].wt-=q*p[i].t;} if((p[i].et!=0)&&(k!=q)){rrg[j]=p[i].no; p[i].et-=1; k++;} else{if((k==q)&&(p[i].et!=0)) p[i].t+=1;  i=i+1; if(i==np) i=0; k=0; j=j-1; } }
int twt=0, ttt=0; cout<<"\n ---- Result Of Round Robin ----"; cout<<"\n ProID\tBT_time\tWT_time\tTT_time";
for(i=0;i<np;i++){ p[i].tt=p[i].wt+p[i].tet;  ttt+=p[i].tt; twt+=p[i].wt; cout<<"\n "<<p[i].no<<"\t"<<p[i].tet<<"\t"<<p[i].wt<<"\t"<<p[i].tt; }
cout<<"\n\n Average Waiting Time:"<<(float)twt/np; cout<<"\n Average Turn Around Time: "<<(float)ttt/np<<endl; return 0; }
*/
