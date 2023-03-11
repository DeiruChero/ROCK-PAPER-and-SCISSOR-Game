using namespace std;
#include<iostream>
#include<conio.h>
int player,computer;
int win=0,loss=0,draw=0;
void logo(){
	system("color 5");
	cout<<"\n\n\t\t--WELCOME TO THE ROCK PAPER SCISSOR GAME--";
}
int game(){
	system("color 3");
	int ch;
	cout<<"\n\n\t\t\t\tEnter 1 For ROCK";
	cout<<"\n\n\t\t\t\tEnter 2 For PAPER";
	cout<<"\n\n\t\t\t\tEnter 3 For SCISSOR";
	cout<<"\n\n\t\t\t\tEnter 4 To EXIT";
	cout<<"\n\n\t\t\t\t\tEnter your choice: ";
	cin>>ch;
	return ch;
}
void setup(){
	label:
	computer=rand()%4;
	if(computer==0)goto label;
	player=game();
}
void logic(){
	switch(player){
		case 1:
		if(computer==1){cout<<"\n\n\t\t\t\tGAME DRAW!!";
		cout<<"\n\n\t\t\t\tPlayer- Rock and Computer- Rock";draw++;}
		else if(computer==2){cout<<"\n\n\t\t\t\tCOMPUTER WON!!";
		cout<<"\n\n\t\t\t\tPlayer- Rock and Computer- Paper";loss++;}
		else if(computer==3){cout<<"\n\n\t\t\t\tYOU WON!!";
		cout<<"\n\n\t\t\t\tPlayer- Rock and Computer- Scissor";win++;}
		break;
		case 2:
		if(computer==1){cout<<"\n\n\t\t\t\tYOU WON!!";
		cout<<"\n\n\t\t\t\tPlayer- Paper and Computer- Rock";win++;}
		else if(computer==2){cout<<"\n\n\t\t\t\tGAME DRAW!!";
		cout<<"\n\n\t\t\t\tPlayer- Paper and Computer- Paper";draw++;}
		else if(computer==3){cout<<"\n\n\t\t\t\tCOMPUTER WON!!";
		cout<<"\n\n\t\t\t\tPlayer- Paper and Computer- Scissor";loss++;}
		break;
		case 3:
		if(computer==1){cout<<"\n\n\t\t\t\tCOMPUTER WON!!";
		cout<<"\n\n\t\t\t\tPlayer- Scissor and Computer- Rock";loss++;}
		else if(computer==2){cout<<"\n\n\t\t\t\tYOU WON!!";
		cout<<"\n\n\t\t\t\tPlayer- Scissor and Computer- Paper";win++;}
		else if(computer==3){cout<<"\n\n\t\t\t\tGAME DRAW!!";
		cout<<"\n\n\t\t\t\tPlayer- Scissor and Computer- Scissor";draw++;}
		break;
		case 4:
		cout<<"\n\n\t\t\t\t\tTotal Wins: "<<win;
		cout<<"\n\n\t\t\t\t\tTotal Losses: "<<loss;
		cout<<"\n\n\t\t\t\t\tTotal Draws: "<<draw;
		exit(1);
		break;
		default:cout<<"\n\n\t\t\t\tINVALID INPUT!!";
	}
}
int main(){
	logo();
	cout<<"\n\n\t\t\tPress 'Enter' to enter in the game!!";
	getch();
	while(1){
	system("cls");
	setup();
	logic();
	getch();
}
	return 0;
}