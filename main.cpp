#include <iostream>

using namespace std;

int main()
{
     int i, j;
     int h=5;
    for (i = 0; i < h; i++) {
        for (j = 0; j < h; j++) {
            if (i == 0 || i == h - 1)
                cout <<"*";
            else if (j == h / 2)
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
    cout<<"________________________________________________"<<endl;;
    int hi=5,w=3,ha=hi/2,end=5;

    for(i=0;i<=hi;i++)
    {
        cout<<"*";
        for(j=0;j<=w;j++)
        {
            if(i==0 || i==ha || i==end)
            cout<<"*";
        }
        cout<<endl;
    }
   cout<<"______________________________________________"<<endl;

   h=5;
    for (i = 0; i < h; i++) {
        for (j = 0; j < h; j++) {
            if ((i == 0 || i == h / 2
                || i == h - 1))
                cout <<"*";
            else if (i < h / 2
                    && j == 0)
                cout <<"*";
            else if (i > h / 2
                    && j == h - 1)
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
    return 0;
}
