#include <iostream>
using namespace std;

int main(){
int isi,kosong = 0,bor;
int start,end,num,mid;
int target;

    
    cout<<"mau buat array nya brapa?: ",cin>>bor;
   int angka[bor];
    
    for(isi=0;isi<bor;isi++){
    	for(int cuk=0;cuk<bor;cuk++){
      cout<<"Input data array index "<< isi++ <<" cuy : ",cin>>angka[cuk];
  }}

    cout<<"\nRAW data: ";
    for(int i=0;i<bor;i++){
    cout<<angka[i]<<" ";}
    
    for(int uma=0;uma<bor-1;uma++){
       for(int jordi=0;jordi<bor-uma-1;jordi++){
          if(angka[jordi] > angka[jordi+1]){
              kosong = angka[jordi];
              angka[jordi] = angka[jordi+1];
              angka[jordi+1] = kosong;
            }
       }
    }cout<<endl;
    
    cout<<"--------------------------------\n";
    cout<<"\nudah disorting: ";
    for(int budi=0;budi<bor;budi++){
    cout<<angka[budi]<<" ";
  }cout<<endl;

start = 0;
end = bor-1;

    cout<<"\n--------------------------------\n";
   cout<<"\nNyari Nilai apa di array?: ";cin>>target;
    cout<<"\n--------------------------------\n";

   while(start<=end){
     mid = (start+end)/2;
     if(angka[mid]==target){
        cout<<"\nAngka ditemukan di index "<<(mid)<<" \n>///<";
        exit(0);
     }
     else if(target>angka[mid]){
        start = mid+1;
     }
     else if(target<angka[mid]){
        end = mid-1;
     }
   }
   cout<<"Angka yang dicari gak ada :(";
    
    }
