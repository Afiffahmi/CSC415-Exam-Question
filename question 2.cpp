
using namespace std;

void getData(int& hours,string& name)
{
cout<<"Insert working hours";
cin>>hours;
cout<<"Insert name";
cin>>name;
}

float calcGrossPay(int& hourW){
float gross;
if(hourW <=20){
gross = hourW * 15 ;

}
else if(hourW>20 && hourW<=40)
{
hourW = hourW - 20;
gross = 20 * 15; 
hourW = hourW * (15 * 1.5);
gross = gross + hourW;
}
else if(hourW>400)
{
hourW = hourW - 20;
gross = 20 * 15;   

hourW = hourW - 20;
gross =gross + 20 * (15 * 1.5); 
hourW = hourW * (15*2);
gross = gross + hourW; 
}
return gross;
}



float calcDeduction(float& gpay)
{

float tax = gpay * 0.11;
float epf = gpay * 0.09;
float clubfee = 20;
float totaldeduction;

float deduction = tax + epf + clubfee;



return deduction;

}

int main() 
{
char sysSwitch = 'Y';

while(sysSwitch == 'Y')
{
int  hours;
string name;
float grosspay;
float totaldeduction;
getData(hours,name);
grosspay = calcGrossPay(hours);
totaldeduction = calcDeduction(grosspay);
float netpay = grosspay - totaldeduction; 
cout<<"SLIP"<<endl;
cout<<name<<endl;
cout<<grosspay<<endl;
cout<<totaldeduction<<endl;
cout<<netpay<<endl;
cout<<"Do you want to calculate for another employee? Y- Yes N- No"<<endl;
cin>>sysSwitch ;  // if N the system will stop
}
return 0;
}
