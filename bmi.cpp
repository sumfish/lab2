#include<iostream>
#include<math.h>
#include<string>
#include"bmi.h"
        int BMI::set(int h,int m){
                height=h;
                mass=m;
                bmi=0;
        }
        float BMI::get(){
                return height,mass;
        }
        float BMI::cbmi(){
                float count=pow(height,2)/10000;
                float bmi=mass/count;
                return bmi;
        }
        string BMI::category(float s){
        string a;
        bmi=s;
        if(bmi<15){
        a="Very severely underweight";
        return a;}
        else if(bmi<16&&bmi>15){
        a="Severely underweight";
        return a;}
        else if(bmi<18.5&&bmi>16){
        a="Underweight";
        return a;}
        else if(bmi<25&&bmi>18.5){
        a="Normal";
        return a;}
        else if(bmi<30&&bmi>25){
        a="Overweight";
        return a;}
        else if(bmi<35&&bmi>30){
        a="Obese Class I(Moderately Obese)";
        return a;}
        else if(bmi<40&&bmi>35){
        a="Obese Class II(Severely Obese)";
        return a;}
        else{
        a="Obese Class III(Very severely obese)";
        return a;}
        }



