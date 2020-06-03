#include <iostream>
#include <ctime>
#include <iomanip>
#include <windows.h>
using namespace std;

int calldice1()
{
	int dice1;
	
		retry1:
	srand(time(NULL));
	
	
	
	dice1=rand()%7;


	if(dice1==0)
	goto retry1;
	
	
	
	
	return dice1;
	
}

/////////////////////////////////////////////////////

int calldice2()
{ int  dice2;
	
		retry2:
			time_t *tm;
			
		
	

	
	
	
	dice2=rand()%7;


	if(dice2==0)
	goto retry2;
	
	
	
	
return dice2;
	
	
}

///////////////////////////////////////////////


void num1()
{
	cout<<"\t\t\t\t\t\t\t\t\t\t\t";
	for (int x = 0; x < 35; x++) {
		cout << "_";
	}
	cout << endl;

	for (int i = 0; i < 5; i++) {
		cout << "\t\t\t\t\t\t\t\t\t\t\t|                                 |"<<endl;
	}
	cout << "\t\t\t\t\t\t\t\t\t\t\t|             #######             |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|             #######             |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|             #######             |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|             #######             |"<<endl;
		
	for (int i = 0; i < 5; i++) {
			cout << "\t\t\t\t\t\t\t\t\t\t\t|                                 |"<<endl;
		}
			cout<<"\t\t\t\t\t\t\t\t\t\t\t";
	for (int x = 0; x < 35; x++) {
			cout << "-";
		}
		
		
		
		cout<<endl;
	
}

///////////////////////////////////////////////////////////////////////////


void num2()
{
	cout<<"\t\t\t\t\t\t\t\t\t\t\t";
	cout<<" ";
	for(int i=0 ; i<35 ; i++)
	cout<<"_";
	
	cout<<endl;
	
	
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                                   |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                                   |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|        #######                    |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|        #######                    |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|        #######                    |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|        #######                    |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                                   |\n";	
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                                   |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                                   |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                    #######        |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                    #######        |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                    #######        |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                    #######        |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                                   |\n";
			
			cout<<"\t\t\t\t\t\t\t\t\t\t\t";		
		for(int i=0 ; i<37 ; i++)
		cout<<"-";
		
		cout<<endl;
}

////////////////////////////////////////////////////////////////////////////

void num3()
{
	cout<<"\t\t\t\t\t\t\t\t\t\t\t";
	for (int x = 0; x < 35; x++) {
			cout << "_";
		}
		
		cout << endl;
		
		
		cout << "\t\t\t\t\t\t\t\t\t\t\t|                                 |"<<endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t|                       #######   |"<<endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t|                       #######   |"<<endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t|                       #######   |"<<endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t|                       #######   |"<<endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t|              #######            |"<<endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t|              #######            |"<<endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t|              #######            |"<<endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t|              #######            |"<<endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t|              #######            |"<<endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t|     #######                     |"<<endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t|     #######                     |"<<endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t|     #######                     |"<<endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t|     #######                     |"<<endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t|                                 |"<<endl;
		
	
		
		
		cout<<"\t\t\t\t\t\t\t\t\t\t\t";
	for (int x = 0; x < 35; x++) {
				cout << "-";
			}
			
			cout<<endl;
	
}

////////////////////////////////////////////////////////////////

void num4()
{
	cout<<"\t\t\t\t\t\t\t\t\t\t\t";
	cout<<" ";
	for(int i=0 ; i<35 ; i++)
	cout<<"_";
	
	cout<<endl;
	
	
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                                   |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                                   |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|      ######           ######      |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|      ######           ######      |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|      ######           ######      |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|      ######           ######      |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                                   |\n";	
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                                   |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                                   |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|      ######            ######     |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|      ######            ######     |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|      ######            ######     |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|      ######            ######     |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                                   |\n";
			
			cout<<"\t\t\t\t\t\t\t\t\t\t\t";		
		for(int i=0 ; i<37 ; i++)
		cout<<"-";
		
		cout<<endl;
}

///////////////////////////////////////////////////////

void num5()
{
	
	cout<<"\t\t\t\t\t\t\t\t\t\t\t";
		cout<<" ";
	for(int i=0 ; i<35 ; i++)
	cout<<"_";
	
	cout<<endl;
	
	
	
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                                   |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|      ######           ######      |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|      ######           ######      |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|      ######           ######      |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|      ######           ######      |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|              #######              |\n";	
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|              #######              |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|              #######              |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|              #######              |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|      ######            ######     |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|      ######            ######     |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|      ######            ######     |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|      ######            ######     |\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t|                                   |\n";
		
		cout<<"\t\t\t\t\t\t\t\t\t\t\t";			
		for(int i=0 ; i<37 ; i++)
		cout<<"-";
		
		cout<<endl;
}



/////////////////////////////////////////////////////////////////////////


void num6()
{
	
	cout<<"\t\t\t\t\t\t\t\t\t\t\t";
	cout<<" ";
	for (int x = 0; x < 35; x++) {
				cout << "_";
			}
			cout << endl;
			
	cout << "\t\t\t\t\t\t\t\t\t\t\t|                                  |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|                                  |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|    ########        ########      |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|    ########        ########      |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|    ########        ########      |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|                                  |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|    ########        ########      |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|    ########        ########      |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|    ########        ########      |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|                                  |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|    ########        ########      |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|    ########        ########      |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|    ########        ########      |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|                                  |"<<endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t|                                  |"<<endl;


	
			
			
		cout<<"\t\t\t\t\t\t\t\t\t\t\t";	
	for (int x = 0; x < 35; x++) {
					cout << "-";
				}
				
				cout<<endl;
	
}

/////////////////////////////////////////////////////////////


void choose(int d1 , int d2)
{
	if(d1 == 1)
	num1();
	
	if(d1 == 2)
	num2();
	
	if(d1 == 3)
	num3();
	
	if(d1 == 4)
	num4();
	
	if(d1 == 5)
	num5();
	
	if(d1 == 6)
	num6();
	
	
	
	
	if(d2 == 1)
	num1();
	
	if(d2 == 2)
	num2();
	
	if(d2 == 3)
	num3();
	
	if(d2 == 4)
	num4();
	
	if(d2 == 5)
	num5();
	
	if(d2 == 6)
	num6();
	
	
	
	
 } 



int main()
{
	
	int replace1 , replace2 , c=0;
	char ch;
	


	cin.get(ch);

	
	while(true)
	{
		if(c==1)
		system("color e0");
		
		if(c==2)
		system("color 7c");
		
		if(c==3)
		system("color c7");
	
		if(c==4)
		system("color 0e");
		
		if(c==5)
		system("color e4");
		
		
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   _____________\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t  |             |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t  |   D I C E   |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t  |             |"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t   -------------\n";
		cout<<endl<<endl<<endl<<endl<<endl;
		
		replace1=calldice1();
		replace2=calldice2();
		
		
		
	choose( replace1 , replace2 );


		if(c==5)
		c=0;
			

			Sleep(500);
			
		c++;
	
	cin.get(ch);
	
	
	system("cls");
	
	
	
	}
	
	
	

}




