#include <iostream>
using namespace std;
float input(float inputhours,float days,float workers);
main()
{
    float inputhours;
    float days;
    float workers;
    float result;
    float remaininghours;
    remaininghours = input(inputhours,days,workers);
}
float input(float inputhours,float days,float workers)
{
    float workinghours;
    float remaininghours;
    float result;
    float per10;
    cout <<"enter no of hours needed:";
    cin >> inputhours;
    cout <<"enter days we have:";
    cin >> days;
    cout <<"enter no of workers:";
    cin >> workers;
    per10 = 0.1*days;
    days = days - per10;
    workinghours = days*10*workers;
    if(workinghours > inputhours)
    {
        remaininghours = workinghours - inputhours;
        cout <<"yes" << remaininghours << "hours left";
    }
    if(workinghours < inputhours)
    {
        remaininghours = inputhours - remaininghours;
        cout <<"not enough time" << remaininghours << "hours needed";
    }
    return result;
}
