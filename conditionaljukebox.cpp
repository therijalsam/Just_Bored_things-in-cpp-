/* Given a positive integer , do the following:

* If 1<=n<=9, print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
* If n>9, print Greater than 9.
Input Format:

A single integer, .

Constraints

Output Format

If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9.

Sample Input 0

5
Sample Output 0

five
Explanation 0

five is the English word for the number .

Sample Input 1

8
Sample Output 1

eight
Explanation 1

eight is the English word for the number .

Sample Input 2

44

Sample Output 2

Greater than 9

Explanation 2

 n=44 is greater than , so we print Greater than 9.*/

#include<iostream>

std::string checkNUm(int num){

 switch(num){
    case 1: return "one";
    case 2: return "two";
    case 3: return "three";
    case 4: return "four";
    case 5: return "five";
    case 6: return "six";
    case 7: return "seven";
    case 8: return "eight";
    case 9: return "nine";
    break;
    default: return"";
  }
}


int main(){
 int iCheckValue;

 std::cout<<"Please enter the vlaue you want to perfom(1-9): ";
 std::cin>>iCheckValue;
 
 if(iCheckValue>=1 && iCheckValue<10){
  std::cout<<checkNUm(iCheckValue)<<std::endl;
 } else{
    std::cout<<"Greater than 9!";
 }

 return 1;
}
