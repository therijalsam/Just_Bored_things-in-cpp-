#include<iostream>
using namespace std;


bool arsearch(int arr[], int iKey, int iSize){
for(int i=0; i< iSize; i++){
    if(iKey == arr[i]){
        return true;
    }
}
return false;
}
int main()
{
    int iKey, iSize;
    int arr[10]={5,10,18,-14,-13,-18,17,14,56,99};
    std::cout<<"Enter your key: ";
    std::cin>>iKey;
   
    iSize= sizeof(arr)/sizeof(arr[0]);
     
     

     if(arsearch(arr,iKey,iSize) == true){
        std::cout<<"You number is found in array."<<std::endl;
     } else{
        std::cout<<"Your number is not in array."<<std::endl;
     }
    return 0;
}
