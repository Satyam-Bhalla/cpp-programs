 #include<iostream>

using namespace std;

int main()
{
    int n,burst_time[20],waiting_time[20],turn_around_time[20],average_waiting_time=0,average_turn_around=0,i,j;
    cout<<"Enter total number of processes(maximum 20):";
    cin>>n;

    cout<<"\nEnter Process Burst Time\n";
    for(i=0;i<n;i++)
    {
        cout<<"P["<<i+1<<"]:";
        cin>>burst_time[i];
    }

    waiting_time[0]=0;    //waiting time for first process is 0

    //calculating waiting time
    for(i=1;i<n;i++)
    {
        waiting_time[i]=0;
        for(j=0;j<i;j++)
            waiting_time[i]+=burst_time[j];
    }

    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";

    //calculating turnaround time
    for(i=0;i<n;i++)
    {
        turn_around_time[i]=burst_time[i]+waiting_time[i];
        average_waiting_time+=waiting_time[i];
        average_turn_around += turn_around_time[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t"<<burst_time[i]<<"\t\t"<<waiting_time[i]<<"\t\t"<<turn_around_time[i];
    }

    average_waiting_time/=i;
    average_turn_around/=i;
    cout<<"\n\nAverage Waiting Time:"<<average_waiting_time;
    cout<<"\nAverage Turnaround Time:"<<average_turn_around;

    return 0;
}
