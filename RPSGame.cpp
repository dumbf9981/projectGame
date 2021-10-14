#include <iostream>
using namespace std;


void display()
{
    cout<<"CHOOSE OPTION"<<endl;
    cout<<"1:rock"<<endl;
    cout<<"2:paper"<<endl;
    cout<<"3:sessior"<<endl;
}

int main()
{


    int player1, player2;

    cout<<"game"<<endl;

    display();
    cout<<"player 1"<<endl;
    cin>>player1;
    display();
    cout<<"player 2"<<endl;
    cin>>player2;

    cout<< "player1: "<<player1<<endl;
    cout<< "player2: "<<player2<<endl;

    if (player1== player2)
    {
        cout<<"Draw"<<endl;
    }
    else if (player1==1 && player2==3 || player2==1 && player1==3 )
    {
        // rock is going to win 
        if (player1==1)
        {
            cout<<"player1 win"<<endl;
        }
        else
        {
            cout<<"player2 win"<<endl;

        }
    }
 else if (player1==2 && player2==1 || player2==2 && player1==1)
 {
        // paper is going to win 
        if (player1==2)
        {
            cout<<"player1 win"<<endl;
        }
        else
        {
            cout<<"player2 win"<<endl;

        }
    }
    else if (player1==3 && player2==2 || player2==3 && player1==2)
{
        // scissors is going to win 
        if (player1==3)
        {
            cout<<"player1 win"<<endl;
        }
        else
        {
            cout<<"player2 win"<<endl;

        }
    }
    return 0;
}
// the program is written sequentially. ROCK, PAPER, SCISSORS respectively.