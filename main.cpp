#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
#include<cstdlib>
#include"bmi.h"
#include<fstream>
using namespace std;
/*class BMI{
	public:
        int set(int h,int m){
		height=h;
		mass=m;
		bmi=0;
	}
	float get(){
		return height,mass;
	}
	float cbmi(){
		float count=pow(height,2)/10000;
                float bmi=mass/count;
              //  cout<<bmi<<"\t";	
		return bmi;	
	}
	string category(float s){
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
	private:
        int height,mass;
	float bmi;
};*/
int main(){ 
	BMI a;
	fstream infile;
        infile.open("file.in",ios::in);
        if(!infile){
                  exit(1);
        }
        fstream fout;
        fout.open("file.out",ios::out);
	int h,m;
	float s;
	while(infile>>h>>m){		
	if(h==0){
	break;
	}
	a.set(h,m);
	a.get();
	s=a.cbmi();
	fout<<setprecision(4)<<a.cbmi();
	fout<<" "<<a.category(s)<<endl;
	}
	infile.close();
	fout.close();	
}
