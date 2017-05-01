#include<iostream>
using namespace std;
int main(){
    int n,i,j,bt[20],p[20],wt[20],temp,total=0,avg_wt,tat[20],avg_tat;
    cout << "SHORTEST JOB FIRST"<<endl<<endl;
    cout << "Enter the number of processes: ";
    cin >> n;

    cout << "Enter the burst time for each process"<<endl;
    for(i=0;i<n;i++){
        cout << "P["<<i+1<<"]: ";
        cin >> bt[i];
        p[i] = i+1;
    }

    cout << "\nFor non preemitive scheduling"<<endl;
    cout<<"\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time";
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(bt[j]>bt[i]){
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    wt[0]=0;            //waiting time for first process is zero

    //calculate waiting time
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];

        total+=wt[i];
    }
    avg_wt=total/n;      //average waiting time
    total=0;


    for(i=0;i<n;i++){
        tat[i]=bt[i]+wt[i];     //calculate turnaround time
        total+=tat[i];
        cout<<"\nP["<<p[i]<<"]\t\t  "<<bt[i]<<"\t\t    "<<wt[i]<<"\t\t\t"<<tat[i];
        //cout<<p[i]<<"\t"<<bt[i]<<endl;
    }
     avg_tat=total/n;     //average turnaround time
     cout<<"\n\nAverage Waiting Time="<<avg_wt;
     cout<<"\nAverage Turnaround Time="<<avg_tat;
}
