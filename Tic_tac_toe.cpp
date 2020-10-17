 // working game  !
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main ()
{
	short unsigned int a[3][3]={1,2,3,4,5,6,7,8,9},in,k;
	void input(short unsigned int,short unsigned int [3][3],short unsigned int);
	void print(short unsigned int [3][3]);
	void process(short unsigned int [3][3]);
	cout<<"\t\t\t    Welcome!\n\nEnter the position num to place your X or O\n\nPlayer 1 is \"X\"\nPlayer 2 is \"O\"\n"<<endl;
	print(a);
	for(k=0;k<5;k++)
	{
	cout<<"\t\t\t    Player 1\n\n\tEnter the position number to place your X"<<endl;
	cin>>in;
	input(in,a,1);
	print(a);
	process(a);
	system("cls");
	cout<<endl;
	print(a);
	
	if(k==4)
	{
		process(a);
	cout<<"The Game Tied!"<<endl;
	getch();
	exit(0);
}
	cout<<"\t\t\t    Player 2\n\n\tEnter the position number to place your O"<<endl;
	cin>>in;
	input(in,a,2);
	print(a);
	process(a);
	system("cls");
	cout<<endl;
	print(a);
	
}
	return 0;
	}
	
void input (short unsigned int in, short unsigned int a[3][3],short unsigned int player)
{
	short unsigned int i,j;
	if (player==1)
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		
		if (a[i][j]==in)
		{
		a[i][j]=12;
		break ;
	}
		}
		else
		{
			for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		if (a[i][j]==in)
		{
		a[i][j]=24;
		break ;
	}
		}
			}
		return ;
	}
void print (short unsigned int a[3][3])
{
	short unsigned int i,j;
	for(i=0;i<3;i++)
	{
		cout<<"\t\t\t|";
	for(j=0;j<3;j++)
	{
		if(a[i][j]==12)
		cout<<" X | ";
		else if (a[i][j]==24)
		cout<<" O | ";
		else
	cout<<" "<<a[i][j]<<" | ";
}
	cout<<endl;
	cout<<"\t\t\t";
	for(j=0;j<3&&i<2;j++)
	cout<<"-----";
	cout<<endl;
	}
	return;
}
void process(short unsigned int a[3][3])
{
	short unsigned int i=0,j=0;
	//1st row
		if(a[i][j]==a[i][j+1] && a[i][j+1]==a[i][j+2])
		{
			if(a[i][j]==12)
			{
			cout<<"Player 1 Won"<<endl;
			getch ();
			exit(0);
		}
		else
		{
			cout<<"Player 2 Won"<<endl;
			getch ();
			exit(0);
		}
	}
		
		//1st col
			if(a[i][j]==a[i+1][j] && a[i+1][j]==a[i+2][j])
			{
			if(a[i][j]==12)
			{
			cout<<"Player 1 Won"<<endl;
			getch ();
			exit(0);
		}
		else
		{
			cout<<"Player 2 Won"<<endl;
			getch ();
			exit(0);
		}
	}
		
		//1st diag
		if(a[i][j]==a[i+1][j+1] && a[i+1][j+1]==a[i+2][j+2])
		{
			if(a[i][j]==12)
			{
			cout<<"Player 1 Won"<<endl;
			getch ();
			exit(0);
		}
		else
		{
			cout<<"Player 2 Won"<<endl;
			getch ();
			exit(0);
		}
	}
		
		//2nd row
		if(a[i+1][j]==a[i+1][j+1] && a[i+1][j+1]==a[i+1][j+2])
		{
			if(a[i][j]==12)
			{
			cout<<"Player 1 Won"<<endl;
			getch ();
			exit(0);
		}
		else
		{
			cout<<"Player 2 Won"<<endl;
			getch ();
			exit(0);
		}
	}
		
		//2nd col
		
		if(a[i][j+1]==a[i+1][j+1] && a[i+1][j+1]==a[i+2][j+1])
		{
			if(a[i][j]==12)
			{
			cout<<"Player 1 Won"<<endl;
			getch ();
			exit(0);
		}
		else
		{
			cout<<"Player 2 Won"<<endl;
			getch ();
			exit(0);
		}
	}
	
	//3rd row
	if(a[i+2][j]==a[i+2][j+1] && a[i+2][j+1]==a[i+2][j+2])
		{
			if(a[i][j]==12)
			{
			cout<<"Player 1 Won"<<endl;
			getch ();
			exit(0);
		}
		else
		{
			cout<<"Player 2 Won"<<endl;
			getch ();
			exit(0);
		}
	}
	
	//3rd col
	if(a[i][j+2]==a[i+1][j+2] && a[i+1][j+2]==a[i+2][j+2])
		{
			if(a[i][j]==12)
			{
			cout<<"Player 1 Won"<<endl;
			getch ();
			exit(0);
		}
		else
		{
			cout<<"Player 2 Won"<<endl;
			getch ();
			exit(0);
		}
	}
	
	//2nd diag
	if(a[i][j+2]==a[i+1][j+1] && a[i+1][j+1]==a[i+2][j])
		{
			if(a[i][j]==12)
			{
			cout<<"Player 1 Won"<<endl;
			getch ();
			exit(0);
		}
		else
		{
			cout<<"Player 2 Won"<<endl;
			getch ();
			exit(0);
		}
	}
		
	}
