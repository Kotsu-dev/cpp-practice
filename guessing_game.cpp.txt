#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int number=rand()%100+1;
    int guess;
    bool done=false;
    int loop=1;
    string answer;
    cout<<"Welcome to the number guessing game!\n";
    while(!done){
        cout<<"Enter a number (1-100): ";
        cin>>guess;
        if(cin.fail()){
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"Invalid input. Please enter a number.\n";
            continue;
        }
        if(guess==number){
            if(loop==1){
                cout<<"Congratulations! You found the number in "<<loop<<" try.\nWould you like to play again? (yes/no): ";
            }
            else{
                cout<<"Congratulations! You found the number in "<<loop<<" tries.\nWould you like to play again? (yes/no): ";
            }
            cin>>answer;
            if(answer=="no" || answer=="No"){
                cout<<"Thank you for playing!";
                done=true;
            }
            else{
                cout<<"New game started!\n";
                number=rand()%100+1;
                loop=1;
            }
        }
        else if(guess<1 || guess>100){
            cout<<"Invalid guess. Please enter a number within the range.(1-100)\n";
        }
        else if(guess>number){
            cout<<"Your guess is incorrect! Try a lower number.\n";
            loop++;
        }
        else if(guess<number){
            cout<<"Your guess is incorrect! Try a higher number.\n";
            loop++;
        }
    }
}