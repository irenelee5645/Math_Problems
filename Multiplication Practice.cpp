#include <iostream>
#include <fstream>
#include <string>
#include <ctime>    // For time()
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    char* file1="/Users/irene/Documents/Data/practice_problems.txt";
    char *file2="/Users/irene/Documents/Data/practice_problems_answers.txt";
    ofstream fout(file1);
    ofstream fout2(file2);
    srand(time(0));
    fout<<"practice set 1\n\n";
    fout2<<"practice set 1 answer key\n\n";
    for(int i=0;i<200;i++)
    {
        int n1=(rand()%7)+2;
        int n2=(rand()%7)+2;
        if(i%2==1)
        {fout<<setw(3)<<i+1<<") "<<setw(3)<<n1<<" x "<<setw(3)<<n2<<" = \n\n";
            fout2<<setw(3)<<i+1<<")  "<<n1*n2<<"\n\n";}
        else
        {
            fout<<setw(3)<<i+1<<") "<<setw(3)<<n1<<" x "<<setw(3)<<n2<<" = \t\t\t";
            fout2<<setw(3)<<i+1<<")  "<<n1*n2<<"\t\t\t";
        }
    }
    fout<<"practice set 2\n\n";
    fout2<<"practice set 2 answer key\n\n";
    for(int i=0;i<200;i++)
    {
        int n1=(rand()%4)+5;
        int n2=(rand()%4)+5;
        if(i%2==1)
        {fout<<setw(3)<<i+1<<") "<<setw(3)<<n1<<" x "<<setw(3)<<n2<<" = \n\n";
            fout2<<setw(3)<<i+1<<")  "<<n1*n2<<"\n\n";}
        else
        {
            fout<<setw(3)<<i+1<<") "<<setw(3)<<n1<<" x "<<setw(3)<<n2<<" = \t\t\t";
            fout2<<setw(3)<<i+1<<")  "<<n1*n2<<"\t\t\t";
        }
    }
    fout<<"practice set 3\n\n";
    fout2<<"practice set 3 answer key\n\n";
    for(int i=0;i<200;i++)
    {
        int n1=(rand()%8)+5;
        int n2=(rand()%7)+2;
        if(i%2==1)
        {fout<<setw(3)<<i+1<<") "<<setw(3)<<n1<<" x "<<setw(3)<<n2<<" = \n\n";
            fout2<<setw(3)<<i+1<<")  "<<n1*n2<<"\n\n";}
        else
        {
            fout<<setw(3)<<i+1<<") "<<setw(3)<<n1<<" x "<<setw(3)<<n2<<" = \t\t\t";
            fout2<<setw(3)<<i+1<<")  "<<n1*n2<<"\t\t\t";
        }
    }


    
//    fout<<"\n\npractice set 2\n\n";
//    fout2<<"\n\npractice set 2 answer key\n\n";
//    for(int i=0;i<100;i++)
//    {
//        int n1=(rand()%15)+2;
//        int n2=(rand()%5)+2;
//        if(i%2==1)
//        {fout<<setw(3)<<i+1<<") "<<setw(3)<<n1<<" x "<<setw(3)<<n2<<" = \n\n";
//            fout2<<setw(3)<<i+1<<")  "<<n1*n2<<"\n\n";}
//        else
//        {
//            fout<<setw(3)<<i+1<<") "<<setw(3)<<n1<<" x "<<setw(3)<<n2<<" = \t\t\t";
//            fout2<<setw(3)<<i+1<<")  "<<n1*n2<<"\t\t\t";
//        }
//
//    }
//    fout<<"\n\npractice set 3\n\n";
//    fout2<<"\n\npractice set 3 answer key\n\n";
//    for(int i=0;i<100;i++)
//    {
//        int n1=(rand()%15)+2;
//        int n2=(rand()%9)+2;
//        if(i%2==1)
//        {fout<<setw(3)<<i+1<<") "<<setw(3)<<n1<<" x "<<setw(3)<<n2<<" = \n\n";
//            fout2<<setw(3)<<i+1<<")  "<<n1*n2<<"\n\n";}
//        else
//        {
//            fout<<setw(3)<<i+1<<") "<<setw(3)<<n1<<" x "<<setw(3)<<n2<<" = \t\t\t";
//            fout2<<setw(3)<<i+1<<")  "<<n1*n2<<"\t\t\t";
//        }
//    }
//    fout<<"\n\npractice set 4\n\n";
//    fout2<<"\n\npractice set 4 answer key\n\n";
//    for(int i=0;i<100;i++)
//    {
//        int n1=(rand()%20)+2;
//        int n2=(rand()%9)+2;
//        if(i%2==1)
//        {fout<<setw(3)<<i+1<<") "<<setw(3)<<n1<<" x "<<setw(3)<<n2<<" = \n\n";
//            fout2<<setw(3)<<i+1<<")  "<<n1*n2<<"\n\n";}
//        else
//        {
//            fout<<setw(3)<<i+1<<") "<<setw(3)<<n1<<" x "<<setw(3)<<n2<<" = \t\t\t";
//            fout2<<setw(3)<<i+1<<")  "<<n1*n2<<"\t\t\t";
//        }
//    }
    fout.close();
    fout2.close();
}
