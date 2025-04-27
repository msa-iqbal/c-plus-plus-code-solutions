// Round Robin Scheduling (Preemptive) (CPU Scheduling)

#include<iostream>
using namespace std;

void AddQue(int pnt);
int at[50], bt[50], ct[50]={0}, qt, rqi[50]={0}, c=0, st, flg=0, tm=0, noe=0, pnt=0, btm[50]={0}, tt, wt, np;
float att, awt;

void AddQue(int pnt){
    rqi[noe]=pnt+1;
    noe++;
}

void SearchStack01(int pnt,int tm){
        for(int x=pnt+1; x<np; x++){
           if(at[x]<=tm){
              rqi[noe]=x+1;
              noe++;}
        }
}

void SearchStack02(int pnt, int tm){
        for(int x=pnt+1; x<np;  x++){
               //---CheckQue
               int fl=0;
               for(int y=0; y<noe; y++){
                      if(rqi[y]==x+1){
                               fl++;
                       }
                }
               if(at[x]<=tm && fl==0 && btm[x]!=0){
                          rqi[noe]=x+1;
                          noe++;
                }
        }
}

void SearchStack01(int pnt,int tm);
void SearchStack02(int pnt, int tm);

int main(){

        /* ----- Enter the total number of process ----- */
        cout<<"\n Enter the total number of process:  ";
        cin>>np;

        cout<<"\n Enter the [Burst Time & Arrival Time]: \n";
        /* ----- Enter the Burst time & Arrival Time for every process ----- */
        for(int x=0; x<np; x++){
            cout<<"\n ProID ["<<x+1<<"]";
            cout << "\n BT_time: ";
            cin>>bt[x];
             cout<<" AT_time: ";
            cin>>at[x];
            btm[x]=bt[x];}

         /* ----- Each Process is provided a fix time to execute, it's called a Time Quantum ----- */
        cout<<"\n Enter time Quantum: ";
        cin>>qt;

         /* ----- Showing GANTT Chart for every process ----- */
        cout<<endl<<" GANTT CHART"<<endl<<" "<<at[0];
        do{
                    if(flg==0){
                           st=at[0];
                           //---ReduceBT
                           if(btm[0]<=qt){
                                  tm=st+btm[0];
                                  btm[0]=0;
                                  SearchStack01(pnt,tm);
                            }
                           else{
                                  btm[0]=btm[0]-qt;
                                  tm=st+qt;
                                  SearchStack01(pnt,tm);
                                  AddQue(pnt);
                            }
                     }
                     else{
                           pnt=rqi[0]-1;
                           st=tm;
                           // --- Delete Que
                           for(int x=0; x<noe && noe!=1; x++){
                                        rqi[x]=rqi[x+1];
                            }
                            noe--;
                           //--- Reduce BT_time
                           if(btm[pnt]<=qt){
                                    tm=st+btm[pnt];
                                    btm[pnt]=0;
                                    SearchStack02(pnt, tm);
                            }
                            else{
                                   btm[pnt]=btm[pnt]-qt;
                                   tm=st+qt;
                                   SearchStack02(pnt, tm);
                                   AddQue(pnt);
                              }
                      }
                    //Assign CTvalue
                    if(btm[pnt]==0){
                            ct[pnt]=tm;
                     }
                     flg++;
                     cout<<"]-P"<<pnt+1<<"-["<<tm<<"";
            }
            while(noe!=0);  // Close 'Do While'

        /* ----- Showing final result for every process ----- */
        cout<<"\n\n ProID\tAT_time\tBT_time\tCT_time\tWT_time\tTT_time\n";
        for(int x=0; x<np; x++){
                tt=ct[x]-at[x];
                wt=tt-bt[x];
                cout<<" P["<<x+1<<"]\t"<<at[x]<<"\t"<<bt[x]<<"\t"<<ct[x]<<"\t"<<wt<<"\t"<<tt<<"\n";
                awt=awt+wt;
                att=att+tt;
        }

        cout<<"\n Average Waiting Time: "<<awt/np<<endl;
        cout<<" Average Turnaround Time: "<<att/np<<endl;

        return 0;
}

/*  ---- Output ---- //
Input:
                 Enter the total number of process:  3

                 Enter the [Burst Time & Arrival Time]:
                 ProID [1]
                 BT_time: 22
                 AT_time: 0

                 ProID [2]
                 BT_time: 8
                 AT_time: 2

                 ProID [3]
                 BT_time: 3
                 AT_time: 3

                 Enter time Quantum: 2

Result:
                 GANTT CHART
                 0]-P1-[2]-P2-[4]-P1-[6]-P3-[8]-P2-[10]-P1-[12]-P3-[13]-P2-[15]-P1-[17]-P2-[19]-P1-[21]-P1-[23]-P1-[25]-P1-[27]-P1-[29]-P1-[31]-P1-[33

                 ProID  AT_time BT_time CT_time WT_time TT_time
                 P[1]   0       22      33      11      33
                 P[2]   2       8       19      9       17
                 P[3]   3       3       13      7       10

                 Average Waiting Time: 9
                 Average Turnaround Time: 20

*/