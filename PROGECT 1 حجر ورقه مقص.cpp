#include<iostream>
using namespace std;


int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

int RangeNumber(int From, int To)
{
	return (To - From + 1) + From;
}

void ChooseNumberOfRound(int &Number)
{

	if (RangeNumber(1, 10))
	{
		cout << "Please Enter Hoe many Round From 1 to 10 ? ";
		cin >> Number;
	}
	else
	{
		system("color 4");
		cout << "Please Enter The Number From The Range 1 To 10";
	}
		
}
void Rounds(int Number)
{
    int Choice = 0;
    string YN = "";

    do
    {


        for (int i = 1; i <= Number; i++)
        {
            cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors? ";
            cin >> Choice;

            int computerChoice = RandomNumber(1, 3);

            cout << "\n\n--------------- Round [ " << i << " ] -------------------------\n";
            if (Choice == 1)
            {
                cout << "Player 1 Choice: Stone\n";
                if (computerChoice == 1)
                {
                    system("color 6f");
                    cout << "Computer Choice: Stone\n";
                    cout << "Round Winner: [No Winner]\n";
                }
                else if (computerChoice == 2)
                {
                    system("color 4f");
                    cout << "Computer Choice: Paper\n";
                    cout << "Round Winner: [Computer Winner]\n";
                }
                else
                {
                    system("color 2f");
                    cout << "Computer Choice: Scissors\n";
                    cout << "Round Winner: [Player Winner]\n";
                }
            }
            else if (Choice == 2)
            {
                cout << "Player 1 Choice: Paper\n";
                if (computerChoice == 1)
                {
                    system("color 2f");
                    cout << "Computer Choice: Stone\n";
                    cout << "Round Winner: [Player Winner]\n";
                }
                else if (computerChoice == 2)
                {
                    system("color 6f");
                    cout << "Computer Choice: Paper\n";
                    cout << "Round Winner: [No Winner]\n";
                }
                else
                {
                    system("color 4f");
                    cout << "Computer Choice: Scissors\n";
                    cout << "Round Winner: [Computer Winner]\n";
                }
            }
            else if (Choice == 3)
            {
                cout << "Player 1 Choice: Scissors\n";
                if (computerChoice == 1)
                {
                    system("color 4f");
                    cout << "Computer Choice: Stone\n";
                    cout << "Round Winner: [Computer Winner]\n";
                }
                else if (computerChoice == 2)
                {
                    system("color 2f");
                    cout << "Computer Choice: Paper\n";
                    cout << "Round Winner: [Player Winner]\n";
                }
                else
                {
                    system("color 6f");
                    cout << "Computer Choice: Scissors\n";
                    cout << "Round Winner: [No Winner]\n";
                }
            }
            cout << "---------------------------------------------------------------\n";
        }
        cout << "Do you want to Play Again Y:[Yes] or N:[No]? ";
        cin >> YN;

    } while (YN != "N" && Number);


}

int main()
{
	int Number = 0;

    int a = 21;
    int c = a++;
    cout << c << endl;\
	srand(unsigned(time(NULL)));
	ChooseNumberOfRound(Number);
	Rounds(Number);

 

	return 0;
}