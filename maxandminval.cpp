#include<iostream>

//Calculate the maximum value
void findmaxvalue(int arr[], int iSize){
int iMaxValue = arr[0];
for(int i=0; i<iSize; i++){
    if(arr[i]>iMaxValue){
        iMaxValue =arr[i];
    }
}
std::cout<<"The maximum value of your number is: "<<iMaxValue<<std::endl;
}


//calculate the minmum value
void findminValue(int arr[], int iSize){
int iMinValue = arr[0];
for(int i = 0; i<iSize; i++){
 if(arr[i]<iMinValue){
    iMinValue = arr[i];
 }
}
std::cout<<"The Minimum integer of your value is: "<<iMinValue<<std::endl;
}

int main(){

    int iSize;
    std::cout<<"How many numbers you want to input: ";
    std::cin>>iSize;
 
    if(iSize<1){
        std::cout<<"You must insert 1 or more than 1 numbers to check your price"<<std::endl;
        return 1;
    }
    
    int arr[iSize];
    std::cout<<"Enter your numbers and don't forget to press enter after the value: ";
    for(int i=0; i<iSize; i++){
        std::cin>>arr[i];
    }

    findmaxvalue(arr,iSize);
    findminValue(arr,iSize);

    return 0;
}
