#include <bits/stdc++.h>
using namespace std;
int main()
{   int t,n,x;
    cin >> t;
    while (t--)
    {   cin >> n;
        map <int,int> mpp,mop;
        vector <int> v((2*n),0);
        for (int i=1;i<=(n*2);i++)
        {   cout << "? " << mpp.size()+1 << " ";
            for (auto it: mpp)
            {   cout << it.first << " ";
            }
            cout << i << endl;
            cout.flush();
            cin >> x;
            if (x==0)
            {   mpp[i]++;
            }
            else
            {   v[i-1]=x;
            }
        }
        for (int i=1;i<=(2*n);i++)
        {   if (mpp[i]!=0)
            {   cout << "? " << n+1 << " ";
                bool o=true;
                for (int j=1;j<=(n*2);j++)
                {   if (j<i&&mpp[j]==0)
                    {   cout << j << " ";
                    }
                    else if (o&&mpp[j]==0)
                    {   cout << i << " ";
                        o=false;
                    }
                    if (!o&&mpp[j]==0)
                    {   cout << j << " ";
                    }
                }
                cout << endl;
                cout.flush();
                cin >> x;
                v[i-1]=x;
            }
        }
        cout << "! ";
        for (int i=0;i<(2*n);i++)
        {   cout << v[i] << " ";
        }
        cout << endl;
        cout.flush();
    }
    return 0;
}
