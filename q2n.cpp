#include<iostream>
#include<string>

using namespace std;

int main()
{
    int cas1;
    cin>>cas1;
    int cas2=0;
    while(cas1-->0)
    {
        cas2++;
        int row,col;
        cin>>row>>col;
        int arr1[row][col];
        for(int i=0;i<row;i++)
        {
            char str1[col];
            cin>>str1;
            for(int j=0;j<col;j++)
            {
                if(str1[j]=='1')
                {
                    arr1[i][j]=1;
                }
                else
                {
                    arr1[i][j]=0;
                }
            }
        }

        int min1=100000000;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(arr1[i][j]==0)
                {
                    arr1[i][j]=1;
                    int max1=-1000000;
                    for(int m=0;m<row;m++)
                    {
                        for(int n=0;n<col;n++)
                        {
                            if(arr1[m][n]==0)

                            {
                                int mindist=100000000;
                                for(int k=0;k<row;k++)
                                {
                                    for(int l=0;l<col;l++)
                                    {
                                        if(arr1[k][l]==1)
                                        {
                                            int dist1=m-k;
                                            if(dist1<0)
                                            {
                                                dist1*=-1;
                                            }
                                            int dist2=n-l;
                                            if(dist2<0)
                                            {
                                                dist2*=-1;
                                            }
                                            dist1+=dist2;
                                            if(dist1<mindist)
                                            {
                                                mindist=dist1;
                                            }
                                        }
                                    }
                                }
                                if(mindist>max1)
                                {
                                    max1=mindist;
                                }
                            }
                        }
                    }
                    arr1[i][j]=0;
                    if(min1>max1)
                    {
                        min1=max1;
                    }
                }
            }
        }
        if(min1==100000000)
        {
            min1=0;
        }
        cout<<"Case #"<<cas2<<": "<<min1<<endl;
    }
    return 0;
}