#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>
using namespace std;
/*
This program allows the user to play a game of 3D Tic-Tac-Toe with the computer
Walton Levi, Section 1
*/
class Box{
	private:
		int iBoardSpace;
		bool bOpenSpace;

	public:
	    void set(int);
		char cGameState;
	 	bool bPlayersTurn(void);
		bool bCompTurn(void);
};
class Board{
	public:
		Box place1;
		Box place2;
		Box place3;
		Box place4;
		Box place5;
		Box place6;
		Box place7;
		Box place8;
		Box place9;
		Box place10;
		Box place11;
		Box place12;
		Box place13;
		Box place14;
		Box place15;
		Box place16;
		Box place17;
		Box place18;
		Box place19;
		Box place20;
		Box place21;
		Box place22;
		Box place23;
		Box place24;
		Box place25;
		Box place26;
		Box place27;

		Board();
		void vGameBoard(void);
		bool bChooseSpace(bool, int);
		bool bCheck(bool);
};
int main(){
	Board board;
	srand(time(NULL));
	bool bPTurn = (rand()%2);
	bool bGameOver = 0;
	int iSelection;
	bool bEndTurn;
	while(bGameOver == 0)    {
		board.vGameBoard();
		do{
			if(bPTurn)            {
				cout<<endl<<"Player's Turn!"<<endl<<"Choose a Box: ";
				cin>>iSelection;
				bEndTurn = board.bChooseSpace(bPTurn, iSelection);
				if (bEndTurn == 0)                {
					cout<<endl<<"Invalid Choice"<<endl<<"Please Choose Again";
				}
				else if (bEndTurn)				{				    system("cls");
					bGameOver = board.bCheck(bPTurn);
					bPTurn = 0;
				}
			}
			else            {
				iSelection = (rand()%27)+1;
				bEndTurn = board.bChooseSpace(bPTurn, iSelection);
				if(bEndTurn)                {
					bGameOver = board.bCheck(bPTurn);
					bPTurn = 1;					system("cls");
				}
			}
		}while(bEndTurn==0);
	}

	board.vGameBoard();
	return 0;
}



void Box::set(int x){
	iBoardSpace = x;
	bOpenSpace = 1;
	cGameState = ' ';
}
bool Box::bPlayersTurn(){
	if(bOpenSpace)	{
		cGameState = 'X';
		bOpenSpace = 0;
		return 1;
	}
	else    {
		return 0;
	}

}
bool Box::bCompTurn(){
	if(bOpenSpace)    {
		cGameState = 'O';
		bOpenSpace = 0;
		return 1;    }
	else	{
		return 0;
	}

}

Board::Board(){
	place1.set(1);
	place2.set(2);
	place3.set(3);
	place4.set(4);
	place5.set(5);
	place6.set(6);
	place7.set(7);
	place8.set(8);
	place9.set(9);
	place10.set(10);
	place11.set(11);
	place12.set(12);
	place13.set(13);
	place14.set(14);
	place15.set(15);
	place16.set(16);
	place17.set(17);
	place18.set(18);
	place19.set(19);
	place20.set(20);
	place21.set(21);
	place22.set(22);
	place23.set(23);
	place24.set(24);
	place25.set(25);
	place26.set(26);
	place27.set(27);
}
void Board::vGameBoard(){
		cout<<endl<<"|--------|--------|--------|"<<endl;
		cout<<"|   ("<<place1.cGameState<<")  |   ("<<place2.cGameState<<")  |   ("<<place3.cGameState<<")  |"<<endl<<"|    1   |    2   |    3   |"<<endl;
		cout<<"|--------|--------|--------|"<<endl;
		cout<<"|   ("<<place4.cGameState<<")  |   ("<<place5.cGameState<<")  |   ("<<place6.cGameState<<")  |"<<endl<<"|    4   |    5   |    6   |"<<endl;
		cout<<"|--------|--------|--------|"<<endl;
		cout<<"|   ("<<place7.cGameState<<")  |   ("<<place8.cGameState<<")  |   ("<<place9.cGameState<<")  |"<<endl<<"|    7   |    8   |    9   |"<<endl;
		cout<<"|--------|--------|--------|"<<endl;

		cout<<endl<<"\t\t|--------|--------|--------|"<<endl;
		cout<<"\t\t|   ("<<place10.cGameState<<")  |   ("<<place11.cGameState<<")  |   ("<<place12.cGameState<<")  |"<<endl<<"\t\t|   10   |   11   |   12   |"<<endl;
		cout<<"\t\t|--------|--------|--------|"<<endl;
		cout<<"\t\t|   ("<<place13.cGameState<<")  |   ("<<place14.cGameState<<")  |   ("<<place15.cGameState<<")  |"<<endl<<"\t\t|   13   |   14   |   15   |"<<endl;
		cout<<"\t\t|--------|--------|--------|"<<endl;
		cout<<"\t\t|   ("<<place16.cGameState<<")  |   ("<<place17.cGameState<<")  |   ("<<place18.cGameState<<")  |"<<endl<<"\t\t|   16   |   17   |   18   |"<<endl;
		cout<<"\t\t|--------|--------|--------|"<<endl;

		cout<<endl<<"\t\t\t\t|--------|--------|--------|"<<endl;
		cout<<"\t\t\t\t|   ("<<place19.cGameState<<")  |   ("<<place20.cGameState<<")  |   ("<<place21.cGameState<<")  |"<<endl<<"\t\t\t\t|   19   |   20   |   21   |"<<endl;
		cout<<"\t\t\t\t|--------|--------|--------|"<<endl;
		cout<<"\t\t\t\t|   ("<<place22.cGameState<<")  |   ("<<place23.cGameState<<")  |   ("<<place24.cGameState<<")  |"<<endl<<"\t\t\t\t|   22   |   23   |   24   |"<<endl;
		cout<<"\t\t\t\t|--------|--------|--------|"<<endl;
		cout<<"\t\t\t\t|   ("<<place25.cGameState<<")  |   ("<<place26.cGameState<<")  |   ("<<place27.cGameState<<")  |"<<endl<<"\t\t\t\t|   25   |   26   |   27   |"<<endl;
		cout<<"\t\t\t\t|--------|--------|--------|"<<endl;
}
bool Board::bChooseSpace(bool bPTurn, int iSelection){
	if(bPTurn)    {
		switch(iSelection)		{
			case 1:			    {
					return place1.bPlayersTurn();
					break;
				}
			case 2:			    {
					return place2.bPlayersTurn();
					break;
				}
			case 3:			    {
					return place3.bPlayersTurn();
					break;
				}
			case 4:			    {
					return place4.bPlayersTurn();
					break;
				}
			case 5:			    {
					return place5.bPlayersTurn();
					break;
				}
			case 6:			    {
					return place6.bPlayersTurn();
					break;
				}
			case 7:			    {
					return place7.bPlayersTurn();
					break;
				}
			case 8:			    {
					return place8.bPlayersTurn();
					break;
				}
			case 9:			    {
					return place9.bPlayersTurn();
					break;
				}

            case 10:			    {
					return place10.bPlayersTurn();
					break;
				}
			case 11:			    {
					return place11.bPlayersTurn();
					break;
				}
			case 12:			    {
					return place12.bPlayersTurn();
					break;
				}
			case 13:			    {
					return place13.bPlayersTurn();
					break;
				}
			case 14:			    {
					return place14.bPlayersTurn();
					break;
				}
			case 15:			    {
					return place15.bPlayersTurn();
					break;
				}
			case 16:			    {
					return place16.bPlayersTurn();
					break;
				}
			case 17:			    {
					return place17.bPlayersTurn();
					break;
				}
			case 18:			    {
					return place18.bPlayersTurn();
					break;
				}
            case 19:			    {
					return place19.bPlayersTurn();
					break;
				}
			case 20:			    {
					return place20.bPlayersTurn();
					break;
				}
			case 21:			    {
					return place21.bPlayersTurn();
					break;
				}
			case 22:			    {
					return place22.bPlayersTurn();
					break;
				}
			case 23:			    {
					return place23.bPlayersTurn();
					break;
				}
			case 24:			    {
					return place24.bPlayersTurn();
					break;
				}
			case 25:			    {
					return place25.bPlayersTurn();
					break;
				}
			case 26:			    {
					return place26.bPlayersTurn();
					break;
				}
			case 27:			    {
					return place27.bPlayersTurn();
					break;
				}

			default:			    {
					return 0;
				}
		}
	}
	else    {
		switch(iSelection)		{
			case 1:			    {
					return place1.bCompTurn();
					break;
				}
			case 2:			    {
					return place2.bCompTurn();
					break;
				}
			case 3:			    {
					return place3.bCompTurn();
					break;
				}
			case 4:			    {
					return place4.bCompTurn();
					break;
				}
			case 5:			    {
					return place5.bCompTurn();
					break;
				}
			case 6:			    {
					return place6.bCompTurn();
					break;
				}
			case 7:			    {
					return place7.bCompTurn();
					break;
				}
			case 8:			    {
					return place8.bCompTurn();
					break;
				}
			case 9:			    {
					return place9.bCompTurn();
					break;
				}

            case 10:			    {
					return place10.bCompTurn();
					break;
				}
			case 11:			    {
					return place11.bCompTurn();
					break;
				}
			case 12:			    {
					return place12.bCompTurn();
					break;
				}
			case 13:			    {
					return place13.bCompTurn();
					break;
				}
			case 14:			    {
					return place14.bCompTurn();
					break;
				}
			case 15:			    {
					return place15.bCompTurn();
					break;
				}
			case 16:			    {
					return place16.bCompTurn();
					break;
				}
			case 17:			    {
					return place17.bCompTurn();
					break;
				}
			case 18:			    {
					return place18.bCompTurn();
					break;
				}

            case 19:			    {
					return place19.bCompTurn();
					break;
				}
			case 20:			    {
					return place20.bCompTurn();
					break;
				}
			case 21:			    {
					return place21.bCompTurn();
					break;
				}
			case 22:			    {
					return place22.bCompTurn();
					break;
				}
			case 23:			    {
					return place23.bCompTurn();
					break;
				}
			case 24:			    {
					return place24.bCompTurn();
					break;
				}
			case 25:			    {
					return place25.bCompTurn();
					break;
				}
			case 26:			    {
					return place26.bCompTurn();
					break;
				}
			case 27:			    {
					return place27.bCompTurn();
					break;
				}
			default:			    {
					return 0;
				}
		}
	}
}
bool Board::bCheck(bool bPTurn){
    int iEndGame=0;
	char cEmpty=' ';
	char cUser='X';
	int iPlayerScore=0;
	int iComputerScore=0;

	if(place1.cGameState==place2.cGameState&&place1.cGameState==place3.cGameState&&place1.cGameState!=cEmpty)
        {
		if(place1.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place1.cGameState==place4.cGameState&&place1.cGameState==place7.cGameState&&place1.cGameState!=cEmpty)
	{
		if(place1.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place1.cGameState==place5.cGameState&&place1.cGameState==place9.cGameState&&place1.cGameState!=cEmpty)
	{

		if(place1.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place2.cGameState==place5.cGameState&&place2.cGameState==place8.cGameState&&place2.cGameState!=cEmpty)
	{
		if(place2.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place3.cGameState==place5.cGameState&&place3.cGameState==place7.cGameState&&place3.cGameState!=cEmpty)
	{
		if(place3.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		};
	}

	if (place3.cGameState==place6.cGameState&&place3.cGameState==place9.cGameState&&place3.cGameState!=cEmpty)
	{
		if(place3.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place4.cGameState==place5.cGameState&&place4.cGameState==place6.cGameState&&place4.cGameState!=cEmpty)
    {
		if(place4.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place7.cGameState==place8.cGameState&&place7.cGameState==place9.cGameState&&place7.cGameState!=cEmpty)
    {
		if(place7.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place10.cGameState==place11.cGameState&&place10.cGameState==place12.cGameState&&place10.cGameState!=cEmpty)
    {
		if(place10.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place10.cGameState==place13.cGameState&&place10.cGameState==place16.cGameState&&place10.cGameState!=cEmpty)
    {
		if(place10.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place10.cGameState==place14.cGameState&&place10.cGameState==place18.cGameState&&place10.cGameState!=cEmpty)
    {
		if(place10.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place11.cGameState==place14.cGameState&&place11.cGameState==place17.cGameState&&place11.cGameState!=cEmpty)
    {
		if(place11.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place12.cGameState==place14.cGameState&&place12.cGameState==place16.cGameState&&place12.cGameState!=cEmpty)
    {
		if(place12.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place12.cGameState==place15.cGameState&&place12.cGameState==place18.cGameState&&place12.cGameState!=cEmpty)
    {
		if(place12.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place13.cGameState==place14.cGameState&&place13.cGameState==place15.cGameState&&place13.cGameState!=cEmpty)
    {
		if(place13.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place16.cGameState==place17.cGameState&&place16.cGameState==place18.cGameState&&place16.cGameState!=cEmpty)
    {
		if(place16.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place19.cGameState==place20.cGameState&&place19.cGameState==place21.cGameState&&place19.cGameState!=cEmpty)
    {
		if(place19.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place19.cGameState==place22.cGameState&&place19.cGameState==place25.cGameState&&place19.cGameState!=cEmpty)
    {
		if(place19.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place19.cGameState==place23.cGameState&&place19.cGameState==place27.cGameState&&place19.cGameState!=cEmpty)
    {
		if(place19.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place20.cGameState==place23.cGameState&&place20.cGameState==place26.cGameState&&place20.cGameState!=cEmpty)
    {
		if(place20.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place21.cGameState==place23.cGameState&&place21.cGameState==place25.cGameState&&place21.cGameState!=cEmpty)
    {
		if(place21.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place21.cGameState==place24.cGameState&&place21.cGameState==place27.cGameState&&place21.cGameState!=cEmpty)
	{
		if(place21.cGameState==cUser)
        {
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}
	if (place22.cGameState==place23.cGameState&&place22.cGameState==place24.cGameState&&place22.cGameState!=cEmpty)
	{
		if(place22.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}
	if (place25.cGameState==place26.cGameState&&place25.cGameState==place27.cGameState&&place25.cGameState!=cEmpty)
	{
		if(place25.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place1.cGameState==place10.cGameState&&place1.cGameState==place19.cGameState&&place1.cGameState!=cEmpty)
    {
		if(place1.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place1.cGameState==place11.cGameState&&place1.cGameState==place21.cGameState&&place1.cGameState!=cEmpty)
    {
		if(place1.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place1.cGameState==place13.cGameState&&place1.cGameState==place25.cGameState&&place1.cGameState!=cEmpty)
    {
		if(place1.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place1.cGameState==place14.cGameState&&place1.cGameState==place27.cGameState&&place1.cGameState!=cEmpty)
    {
		if(place1.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place2.cGameState==place11.cGameState&&place2.cGameState==place20.cGameState&&place2.cGameState!=cEmpty)
    {
		if(place2.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place2.cGameState==place14.cGameState&&place2.cGameState==place26.cGameState&&place2.cGameState!=cEmpty)
    {
		if(place2.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}
	if (place3.cGameState==place12.cGameState&&place3.cGameState==place21.cGameState&&place3.cGameState!=cEmpty)
    {
		if(place3.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place3.cGameState==place11.cGameState&&place3.cGameState==place19.cGameState&&place3.cGameState!=cEmpty)
    {
		if(place3.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
    }

	if (place3.cGameState==place15.cGameState&&place3.cGameState==place27.cGameState&&place3.cGameState!=cEmpty)
	{
		if(place3.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place3.cGameState==place14.cGameState&&place3.cGameState==place25.cGameState&&place3.cGameState!=cEmpty)
    {
		if(place3.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place4.cGameState==place13.cGameState&&place4.cGameState==place22.cGameState&&place4.cGameState!=cEmpty)
    {
		if(place4.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}
	if (place4.cGameState==place14.cGameState&&place4.cGameState==place24.cGameState&&place4.cGameState!=cEmpty)
	{
		if(place4.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}
	if (place5.cGameState==place14.cGameState&&place5.cGameState==place23.cGameState&&place5.cGameState!=cEmpty)
	{
		if(place5.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place6.cGameState==place15.cGameState&&place6.cGameState==place24.cGameState&&place6.cGameState!=cEmpty)
    {
		if(place6.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place6.cGameState==place14.cGameState&&place6.cGameState==place22.cGameState&&place6.cGameState!=cEmpty)
    {
		if(place6.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place7.cGameState==place16.cGameState&&place7.cGameState==place25.cGameState&&place7.cGameState!=cEmpty)
	{
		if(place7.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place7.cGameState==place13.cGameState&&place7.cGameState==place19.cGameState&&place7.cGameState!=cEmpty)
    {
		if(place7.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place7.cGameState==place17.cGameState&&place7.cGameState==place27.cGameState&&place7.cGameState!=cEmpty)
    {
		if(place7.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place7.cGameState==place14.cGameState&&place7.cGameState==place21.cGameState&&place7.cGameState!=cEmpty)
    {
		if(place7.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place8.cGameState==place17.cGameState&&place8.cGameState==place26.cGameState&&place8.cGameState!=cEmpty)
    {
		if(place8.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place8.cGameState==place14.cGameState&&place8.cGameState==place20.cGameState&&place8.cGameState!=cEmpty)
    {
		if(place8.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place9.cGameState==place18.cGameState&&place9.cGameState==place27.cGameState&&place9.cGameState!=cEmpty)
    {
		if(place9.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place9.cGameState==place15.cGameState&&place9.cGameState==place21.cGameState&&place9.cGameState!=cEmpty)
	{
		if(place9.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place9.cGameState==place17.cGameState&&place9.cGameState==place25.cGameState&&place9.cGameState!=cEmpty)
	{
		if(place9.cGameState==cUser){
			iPlayerScore++;
		}
		else{
			iComputerScore++;
		}
	}

	if (place9.cGameState==place14.cGameState&&place9.cGameState==place19.cGameState&&place9.cGameState!=cEmpty)
    {
		if(place9.cGameState==cUser)
		{
			iPlayerScore++;
		}
		else
		{
			iComputerScore++;
		}
	}

	if (place1.cGameState!=cEmpty&&place2.cGameState!=cEmpty&&place3.cGameState!=cEmpty&&place4.cGameState!=cEmpty&&place5.cGameState!=cEmpty&&place6.cGameState!=cEmpty&&place7.cGameState!=cEmpty&&place8.cGameState!=cEmpty&&place9.cGameState!=cEmpty&&place10.cGameState!=cEmpty&&place11.cGameState!=cEmpty&&place12.cGameState!=cEmpty&&place13.cGameState!=cEmpty&&place14.cGameState!=cEmpty&&place15.cGameState!=cEmpty&&place16.cGameState!=cEmpty&&place17.cGameState!=cEmpty&&place18.cGameState!=cEmpty&&place19.cGameState!=cEmpty&&place20.cGameState!=cEmpty&&place21.cGameState!=cEmpty&&place22.cGameState!=cEmpty&&place23.cGameState!=cEmpty&&place24.cGameState!=cEmpty&&place25.cGameState!=cEmpty&&place26.cGameState!=cEmpty&&place27.cGameState!=cEmpty)
    {
		bool bGameOver=1;
	}
	else
	{
		bool bGameOver=0;
	}

	if (bool bGameOver=1)
    {
		if(iPlayerScore>iComputerScore)
		{
			cout<<endl<<"GAME OVER";
			cout<<endl<<"CONGRATULATIONS! You won!";
			return 1;
		}
		else if(iComputerScore>iPlayerScore)
        {
			cout<<endl<<"GAME OVER";
			cout<<endl<<"Sorry, you lost!";
			return 1;
		}
		else if(iPlayerScore=iComputerScore)
		{
			cout<<endl<<"GAME OVER";
			cout<<endl<<"You and the computer tied!";
			return 1;
		}
	}

	else
    {
		cout<<endl<<"Your Score: "<<iPlayerScore<<endl<<"Computer's Score: "<<iComputerScore;
		return 0;
	}
}
