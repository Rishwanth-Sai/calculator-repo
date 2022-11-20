#include <iostream>
#include <cstdlib>
using namespace std;
const double pi = 3.14159265358979;
float addition(float a, float b){
    float result = a+b;
    return result;
}
float subtraction(float a, float b){
    float result = a-b;
    return result;
}
float multiplication(float a, float b){
    float result = a*b;
    return result;
}
float division(float a, float b){
    float result = a/b;
    return result;
}
float power(float a, int b){
   float result = 1;
    for(int i=1; i<=b; i++){
     result = a * result;
    }
    return result;
}
float fact(int n){
   float result = 1;
   for(int i=1; i<=n; i++){
      result = result * i;
   }
   return result;
}
float convert(float deg){
   if(deg >= 360){
       int p = deg / 360;   
       deg -= p*360;
   }
   float rad = deg * (3.142)/180;
   return rad;
}
float sin(float deg){
    float sin_value = 0;
    float x = convert(deg);
   for(int i=1,j=0; i<40; i+=2, j++){
      sin_value = sin_value + ((power(x, i) * power(-1, j))) / fact(i) ; 
   }
   return sin_value;
}
float cos(float deg){
    float x = convert(deg);
   float cos_value = 0;
   for(int i=0,j=0; i<30; i+=2, j++){
      cos_value = cos_value + ((power(x, i) * power(-1, j))) / fact(i) ;
   }
   return cos_value;
}
float ln(float x){
    if(x>0){
        float result=0;
        x = (x-1) / (x+1);
        for(int i=1;i<30;i+=2){
            result += 2 * power(x, i) / i;
        }
        return result;
    }else{
        cout<<"Invalid log operation"<<endl;
    }
}
int main(){
    int n;
    float a,b;
      while(1){
    cout<<"*******Welcome to the scientific calculator *******\n"
          "*******   Enter 1  for addition             *******\n" 
          "*******   Enter 2  for subtraction          *******\n"
          "*******   Enter 3  for multiplication       *******\n"
          "*******   Enter 4  for division             *******\n"
          "*******   Enter 5  for factorial            *******\n"
          "*******   Enter 6  for power                *******\n"
          "*******   Enter 7  for sine function        *******\n"
          "*******   Enter 8  for cosine function      *******\n"
          "*******   Enter 9  for tangent function     *******\n"
          "*******   Enter 10 for cotangent function   *******\n"
          "*******   Enter 11 for secant function      *******\n"
          "*******   Enter 12 for cosecant function    *******\n"
          "*******   Enter 13 for logarithmic function *******\n"
          "*******   Enter 0  to  quit                 *******"<<endl;
    cin>>n;
    switch(n){
        case 1:
        cout<<"Enter two numbers :"<<endl;
        cin>>a>>b;
        cout<<addition(a, b)<<endl;
        break;
        case 2:
        cout<<"Enter two numbers :"<<endl;
        cin>>a>>b;
        cout<<subtraction(a, b)<<endl;
        break;
        case 3:
        cout<<"Enter two numbers :"<<endl;
        cin>>a>>b;
        cout<<multiplication(a, b)<<endl;
        break;
        case 4:
        cout<<"Enter two numbers :"<<endl;
        cin>>a>>b;
        cout<<division(a, b)<<endl;
        break;
        case 5:
        int m;
        cout<<"Enter the number :"<<endl;
        cin>>m;
        cout<<fact(m)<<endl;
        break;
        case 6:
        cout<<"Enter the base and then the exponent"<<endl;
        cin>>a>>b;
        cout<<power(a, b)<<endl;
        break;
        case 7:
        cout<<"Enter the angle in degrees"<<endl;
        cin>>a;
        cout<<sin(a)<<endl;
        break;
        case 8:
        cout<<"Enter the angle in degrees"<<endl;
        cin>>a;
        cout<<cos(a)<<endl;
        break;
        case 9:
        cout<<"Enter the angle in degrees"<<endl;
        cin>>a;
        cout<< sin(a) / cos(a)<<endl;
        break;
        case 10:
        cout<<"Enter the angle in degrees"<<endl;
        cin>>a;
        cout<< cos(a) / sin(a) <<endl;
        break;
        case 11:
        cout<<"Enter the angle in degrees"<<endl;
        cin>>a;
        cout<< 1 / cos(a) <<endl;
        break;
        case 12:
        cout<<"Enter the angle in degrees"<<endl;
        cin>>a;
        cout<< 1 / sin(a) <<endl;
        break;
        case 13:
        cout<<"Enter any number :"<<endl;
        cin>>a;
        cout<<ln(a)<<endl;
        break;
        case 0:
        cout<<"Thank you for using the calculator"<<endl;
         exit(0);
        break;
        default:
        cout<< "Invalid"<<endl;
        break;
    }
        }
   return 0;
}