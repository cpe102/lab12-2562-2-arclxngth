#include <iostream>
#include <cmath>

using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

void stat(const double Input[],int N,double Output[]){

    double sum=0, sumpow=0, SD=0, average, max, min;

    max = Input[0];
    min = Input[0];

    for(int i=0; i<=N;i++){

        sum += Input[i];
        sumpow += pow(Input[i],2);

        if(max < Input[i]){

            max = Input[i];
        }
        if(min > Input[i]){
 
            min = Input[i];
        }
    }

    average = sum / N;
    SD = sqrt((sumpow / N) - pow(average,2));

    Output[0]=average;
    Output[1]=SD;
    Output[2]=max;
    Output[3]=min;
 }
