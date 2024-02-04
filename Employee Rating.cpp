/*Rating = the maximum number of consecutive working days
when the employee has worked more than 6 hours.
Our Approach,
Workload with consecutive hours > 6 = [2, 3, 7, 8, 7, 6, 3, 8, 12, 11, 12, 10] => Longest Interval
= [8,12,11,12,10]/Other Number Output is 5 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Number,i,Max=0,Count=0;
    cin>>Number;
    int Workload[Number];
    for(i=0;i<Number;++i){
        cin>>Workload[i];
    }
    for(i=0;i<Number;++i){
        if(Workload[i]>6){
            Count++;
        } else {
            Count=0;
        }
        if(Count>Max){
            Max=Count;
        }
    }
    cout<<Max<< endl;

    return 0;
}

