#include<iostream>
#include<vector>

using namespace std;
template<typename T>
void zamjeniMinMax(T* pocetak, T* kraj, T* &pokN, T* &pokV){
     T miminalna = *pocetak;
     T maximalna = *pocetak;
     pokN = pocetak;
     pokV = pocetak;
     for(T* pok=pocetak;pok<kraj;pok++){
          if(*pok>maximalna){
               maximalna = *pok;
               pokV = pok;
          }else if(*pok<miminalna){
               miminalna = *pok;
               pokN = pok;
          }
     }
     cout<<"\nPRIJE ZAMJENE\n";
     cout<<" najmanja vrijednost: "<<*pokN<<endl;
     cout<<" najveca vrijednost "<<*pokV<<endl;
     cout<<"\n-------------------\n";
     T temp = *pokN;
     *pokN = *pokV;
     *pokV = temp;
     cout<<"\NAKON ZAMJENE\n";
     cout<<"najmanja vrijednost: "<<*pokN<<endl;
     cout<<"najveca vrijednost "<<*pokV<<endl;
     cout<<"\n-------------------\n";
}


int main(){
     int niz[]{1,2,3};
     int* pokNajm(nullptr);
     int* pokNajv(nullptr);
     zamjeniMinMax(niz,niz+3,pokNajm,pokNajv);
     return 0;
}
