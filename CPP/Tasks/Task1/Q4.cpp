#include<iostream>
using namespace std;

int main()
{
    int population = 162100;
    float  growthRate =6.5;
    int limit =1000000;
    int Newpopulation = population;
    int numOfyears=0;
    // loop  till new population surpass million
    while (Newpopulation <= limit )
    {
      //Every year we increase the population that has increased based on the growthRate
       Newpopulation+= (Newpopulation*growthRate)/100;
       numOfyears++;
       cout <<"year "<<numOfyears <<" the population will be " << Newpopulation << endl;
    }
    cout<<"================================================================"<<endl;
    cout <<"population surpass million in "<<numOfyears <<" years";
    return 0;

    /* to do it without loop 
    we can get new population in nymber of years by following this equation 
    new population = population *(1+(growthRate/100))^(number of years)
    so,
    (1+(growthRate/100))^(number of years) = (new population/population)
    (Multiply all equations by log)
    log((1+(growthRate/100))^(number of years))=log((new population/population))
    By log rules 
    (number of years)*log(1+(growthRate/100)) = log((new population/population))

    (number of years)= log((new population/population)) /  log(1+(growthRate/100))
     */
}