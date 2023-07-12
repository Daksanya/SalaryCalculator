#include <iostream>
using namespace std;
int main(){
    int HoursWorked[7];
    int salary=0;
    for(int i=0;i<7;++i){
        cin>>HoursWorked[i];
        salary+=(HoursWorked[i]*100);
        if(HoursWorked[i]>8){
            salary+=(HoursWorked[i]-8)*15;
            }
    }
    if(HoursWorked[0]>0){
        salary+=(HoursWorked[0]*100)/2;
    }
    if(HoursWorked[6]>0){
        salary+=(HoursWorked[6]*100)/4;
    }
    int total=0;
    for(int i=0;i<7;++i){
        total+=HoursWorked[i];
    }
    if(total>40){
        salary+=(total-40)*25;
    }
    cout<<salary;

    return 0;
}
