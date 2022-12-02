#include<iostream>
// #include<cstdlib>
#include<random>
using namespace std;

int randomGenator(int n){
    random_device rd; // obtain a random number from hardware
    mt19937 gen(rd()); // seed the generator
    uniform_int_distribution<> distr(0, 100); // define the range
    int rand;
    for(int i = 0;i <= n; i++)
        rand = distr(gen);
    return rand;
}


int main(){

	cout<<"Welcome to number guessing game"<<endl;
    int num,fav,score = 0,inp;
    cout<<"Enter your favourite number in between 100"<<endl;
    cin>>fav;
    num = randomGenator(fav);

    cout<<"Okay let's begin the game\n start guessing good luck!"<<endl;
    int low = 0,high = 100;
    while(true){
        int mid = (low+high) /2;
        if(mid == num){
            break;
        }
        else if(mid > num){
            cout<<"Your number is higher "<<mid<<endl;
            high = mid - 1;
            score++;
        }
        else{
            cout<<"Your number is lower "<<mid<<endl;
            low = mid + 1;
            score++;
        }
    }
    cout<<"Congress you guessed the right num and the num is "<<num<<endl;
    cout<<"Your score is "<<score<<endl;



	return 0;
}