#include<iostream>
using namespace std;
class BMI{
public:
	int set(int h,int m);
	float get();
	float cbmi();
	string category(float s);
	
	
private:
	int height,mass;
	float bmi;
};
