#include <iostream>
using namespace std;

//Descending insertion sort
void insertion (int data[])
{
      int temp, j;
      for(int i=1; i<6; i++)
      {
            temp = data[i];
            j = i - 1;
            while(data[j]<temp && j>=0)
            {
                  data[j+1] = data[j];
                  j--;
            }
            data[j+1] = temp;
      }
}

int main()
{
      int data [] = {11,10,15,3,20,2};

      cout<<"INSERTION SORT"<<endl;
      cout<<"DATA ->"; endl
      for(int n = 0; n<6;n++)
            cout<<data[n]<<"\t";

      cout<<endl;

      cout<<"\nDATA SETELAH DIURUTKAN" << endl;

      insertion(data);
     
      for(int x = 0; x<6;x++)
            cout<<data[x]<<"\t";

      cout<<endl;
}
