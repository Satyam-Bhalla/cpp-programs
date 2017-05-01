#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class bankers
{
    public:
            int max[10][10],alloc[10][10],need[10][10],avail[10],i,j,p,r,safe[10],k=0;

            void get()
            {
                    cout<<"Enter the number of processes"<<endl;
                    cin>>p;
                    cout<<"Enter the number of resources"<<endl;
                    cin>>r;
                    cout<<"Enter the available resources of each type"<<endl;
                    for(i=0;i<r;i++)
                    {
                        cin>>avail[i];

                    }
                    cout<<"Enter the max matrix"<<endl;
                    for(i=1;i<=p;i++)
                    {
                            cout<<"P"<<i<<" : ";
                            for(j=1;j<=r;j++)
                            {

                                cin>>max[i][j];
                            }
                    }
                    cout<<"Enter the allocation matrix"<<endl;
                    for(i=1;i<=p;i++)
                    {
                            cout<<"P"<<i<<" : ";
                            for(j=1;j<=r;j++)
                            {

                                cin>>alloc[i][j];
                           }
                             cout<<endl;
                    }
                    cout<<"The max matrix is : "<<endl;
                     for(i=1;i<=p;i++)
                    {
                            cout<<"P"<<i<<" : ";
                            for(j=1;j<=r;j++)
                            {

                                cout<<max[i][j];
                                cout<<"  ";
                            }
                            cout<<endl;
                    }
                    cout<<"The allocation matrix is : "<<endl;
                    for(i=1;i<=p;i++)
                    {
                         cout<<"P"<<i<<" : ";
                            for(j=1;j<=r;j++)
                            {

                                cout<<alloc[i][j];
                                cout<<"  ";
                           }
                           cout<<endl;
                    }


                    cout<<"The need matrix is"<<endl;
                    for(i=1;i<=p;i++)
                    {
                            cout<<"P"<<i<<" : ";
                            for(j=1;j<=r;j++)
                            {

                                need[i][j]=max[i][j]-alloc[i][j];
                                cout<<need[i][j];
                                cout<<"  ";
                            }
                            cout<<endl;

                    }
            }
            void safeseq()
            {

                    for(i=1;i<=p;i++)
                    {
                        for(j=1;j<=r;j++)
                        {
                                if(need[i][j]<=avail[j]||need[i][j]==0)

                            {
                                safe[k]=i;
                                k++;
                                avail[i]=alloc[i][j]+avail[i];
                            }

                        }


                    }
                    cout<<"The safe sequence is : "<<endl;
                    for(i=0;i<k;i++)
                    {

                            cout<<"P"<<safe[i]<<"  ";

                    }
            }
};
int main()
{

    bankers b;
    b.get();
    b.safeseq();
    getch();
    return 0;
}
