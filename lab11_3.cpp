#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    ifstream source("score.txt");
    string textline ;
    int count = 0 ;
    double mean = 0 , stdev = 0;
    double sum = 0 , sum2 = 0 ;
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()),2);
        count++ ; 
    } 
    mean = sum/count ;
    stdev = sqrt((sum2/count) - pow(mean,2)) ;
    cout << "Number of data = " << count << '\n';
    cout << setprecision(3);
    cout << "Mean = " << mean << '\n';
    cout << "Standard deviation = " << stdev << '\n';
}