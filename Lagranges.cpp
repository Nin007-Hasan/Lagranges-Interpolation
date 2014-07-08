#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float x[10],y[10],temp=1,f[10],p;
    double sum;

    int i,n,j,k=0,c;

    cout<<"How many record you will be enter: ";
    cin>>n;

    cout<<"\nX\tY\n";
    for(i = 0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }

    cout<<"\n\nEnter X for finding x: ";
    cin>>p;

    for(i=0;i<n;i++)
    {
        temp = 1;
        k = i;

        for(j=0;j<n;j++)
        {
            if(k==j)
            {
                continue;
            }

            else
            {
                temp = temp * ((p-x[j])/(x[k]-x[j]));
            }
        }

        f[i]=y[i]*temp;
    }

    for(i=0;i<n;i++)
    {
        sum = sum + f[i];
    }

    cout<<"\n\n"<<"f("<<p<<")= "<<sum<<endl;

}
