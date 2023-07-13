#include<iostream>
#include<math.h>

using namespace std;




float calbmi(float h, float w) {
    float SqrtOfHeight = h * h;
    float BMI = w / SqrtOfHeight;
    return BMI;
}



int main()
{

float bmi , h, w;

 



cout<<"Enter Weight  (Please enter your weight in Kg.) : "<<endl;
cin>>w;
cout<<"Enter Height (Please enter your height in Foot.) : "<<endl;
cin>>h;


 bmi = calbmi(w,h) ;


cout<<"Your BMI is : "<<bmi;



    return 0;

}