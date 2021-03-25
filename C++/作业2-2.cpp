#include<iostream>
using namespace std;
//Define a struct Date to keep track of dates. 
//Provide functions that read Dates from input, 
//write Dates to output, 
//and Initialize a Date with a date.
typedef struct{
	int year,month,day;
}date;

int length_of_months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};


//判断闰年 是则返回 ，否则返回0 
int is_leap_year(int year){
	if(year%4==0 && year%400!=0){
		return 1;
	} else {
		return 0;
	}
} 

void input_date(date &d){
	int judge = 0;
	cout<<"请按照年-月-日的格式输入日期："; 
	while(!judge){
		scanf("%d-%d-%d",&d.year,&d.month,&d.day); 
		length_of_months[1] += is_leap_year(d.year);
		if(d.day > length_of_months[d.month-1] || d.year<=0 || d.month<=0 || d.day <= 0){
			cout<<"输入不合法，请重新输入:"; 
			judge = 0;
		}else{
			judge = 1;
		}
	}
}

void output_date(date d){
	cout<<d.year<<'-'<<d.month<<'-'<<d.day<<endl;
}

void init_date(date &d){
	d.day = 1;
	d.month = 1;
	d.year = 1970;
} 
int main(){
	date d;
	init_date(d);
	input_date(d);
	output_date(d);
	return 0;
}
