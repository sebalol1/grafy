#include<iostream>
#include<vector>
using namespace std;
 
int main()
  {
   size_t V, E,max=0;
   cout<<"Liczba wierzcholkow: "; cin>>V;
   cout<<"Liczba krawedzi: "; cin>>E; 
   vector<unsigned> St(V);
   for(size_t e=0;e<E;++e)
     {
      for(int i=0;i<2;++i)
        {
         unsigned x;
         cin>>x;
         if(max<++St[--x]) max=St[x];
        }
     }
   cout<<max<<endl;
   return 0;
  }
