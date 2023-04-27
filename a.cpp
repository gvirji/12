#include <iostream>

using namespace std;

int main()
{
     srand(time(NULL));
     int R[11];
     for (int i=0; i<11; i++)
     { R[i]=rand()%(51+25)-25;
     cout<<R[i]<<"  ";}
     cout<<endl;
     int min=R[0], index=0;
     for(int i=1;  i<11; i++){
        if(min>R[i])
        { min=R[i]; index=i;}
    }
    
    cout<<"min="<<min<<" index= "<<index<<endl;  
    int rez;
    rez=R[4]; R[4]=R[index]; R[index]=rez;
    for (int i=0; i<11;i++)
    {cout<<R[i]<<"  ";}
     cout<<endl;
    }
