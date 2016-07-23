//  Created by Daniel Sicular on 7/23/16.
//  Copyright © 2016 Daniel Sicular. All rights reserved.

// I saw a bunch of Quarterback Roulette simulators on TV so I decided to make my own in C++.

// Rules: You can choose whether or not you want to spin the wheel. If you spin, you must take the quarterback you get.
// If your current quarterback has already been taken, you must spin the wheel.
// The order of Quarterback Roulette will be determined by the standings after the 2015 season (i.e. Titans first, Broncos last,
// Patriots get to pick, no trades). 

// Assume all Quarterbacks are healthy

// Look for notes below the code

// Let's see what happens!

// Ideas for more roulettes: Each team's best QB in franchise history, etc.

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int pick; // Initialize variables
	char YN;
	string oldQB, newQB;

	srand(time(0)); // So the random number generator works

	int QBList[32]; // Initialize array
	for (int i = 0; i < 32; i++) // Give array values, Position is team, value is QB
	{
		QBList[i] = (i + 1);
	}

	/*
	for (int i = 0; i < 32; i++) // TEST output array
	{
		cout << QBList[i] << endl;
	}
	*/

	cout << endl;

	for (int i = 1; i <= 32; i++) // The main loop
	{
		cout << "Pick: " << i << "!\n";
		switch(i) // Switch statement for customized output
		{
			case 1:
				cout << "The Tennessee Titans are on the clock!\n";
				cout << "Your Quarterback is Marcus Mariota.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 2:
				cout << "The Cleveland Browns are on the clock!\n";
				cout << "Your Quarterback is Robert Griffin III.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 3:
				cout << "The San Diego Chargers are on the clock!\n";
				cout << "Your Quarterback is Philip Rivers.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 4:
				cout << "The Dallas Cowboys are on the clock!\n";
				cout << "Your Quarterback is Tony Romo.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 5:
				cout << "The Jacksonville Jaguars are on the clock!\n";
				cout << "Your Quarterback is Blake Bortles.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 6:
				cout << "The Baltimore Ravens are on the clock!\n";
				cout << "Your Quarterback is Joe Flacco.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 7:
				cout << "The San Francisco 49ers are on the clock!\n";
				cout << "Your Quarterback is Colin Kaepernick.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 8:
				cout << "The Miami Dolphins are on the clock!\n";
				cout << "Your Quarterback is Ryan Tannehill.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 9:
				cout << "The Tampa Bay Buccaneers are on the clock!\n";
				cout << "Your Quarterback is Jameis Winston.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 10:
				cout << "The New York Giants are on the clock!\n";
				cout << "Your Quarterback is Eli Manning.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 11:
				cout << "The Chicago Bears are on the clock!\n";
				cout << "Your Quarterback is Jay Cutler.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 12:
				cout << "The New Orleans Saints are on the clock!\n";
				cout << "Your Quarterback is Drew Brees.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 13:
				cout << "The Philadelphia Eagles are on the clock!\n";
				cout << "Your Quarterback is Sam Bradford.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 14:
				cout << "The Oakland Raiders are on the clock!\n";
				cout << "Your Quarterback is Derek Carr.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 15:
				cout << "The Los Angeles Rams are on the clock!\n";
				cout << "Your Quarterback is Jared Goff.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 16:
				cout << "The Detroit Lions are on the clock!\n";
				cout << "Your Quarterback is Matthew Stafford.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 17:
				cout << "The Atlanta Falcons are on the clock!\n";
				cout << "Your Quarterback is Matt Ryan.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 18:
				cout << "The Indianapolis Colts are on the clock!\n";
				cout << "Your Quarterback is Andrew Luck.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 19:
				cout << "The Buffalo Bills are on the clock!\n";
				cout << "Your Quarterback is Tyrod Taylor.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 20:
				cout << "The New York Jets are on the clock!\n";
				cout << "Your Quarterback is Ryan Fitzpatrick.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 21:
				cout << "The Washington Redskins are on the clock!\n";
				cout << "Your Quarterback is Kirk Cousins.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 22:
				cout << "The Houston Texans are on the clock!\n";
				cout << "Your Quarterback is Brock Osweiler.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 23:
				cout << "The Minnesota Vikings are on the clock!\n";
				cout << "Your Quarterback is Teddy Bridgewater.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 24:
				cout << "The Cincinnati Bengals are on the clock!\n";
				cout << "Your Quarterback is Andy Dalton.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 25:
				cout << "The Pittsburgh Steelers are on the clock!\n";
				cout << "Your Quarterback is Ben Roethlisberger.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 26:
				cout << "The Seattle Seahawks are on the clock!\n";
				cout << "Your Quarterback is Russell Wilson.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 27:
				cout << "The Green Bay Packers are on the clock!\n";
				cout << "Your Quarterback is Aaron Rodgers.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 28:
				cout << "The Kansas City Chiefs are on the clock!\n";
				cout << "Your Quarterback is Alex Smith.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 29:
				cout << "The New England Patriots are on the clock!\n";
				cout << "Your Quarterback is Tom Brady.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 30:
				cout << "The Arizona Cardinals are on the clock!\n";
				cout << "Your Quarterback is Carson Palmer.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 31:
				cout << "The Carolina Panthers are on the clock!\n";
				cout << "Your Quarterback is Cam Newton.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
			case 32:
				cout << "The Denver Broncos are on the clock!\n";
				cout << "Your Quarterback is Mark Sanchez.\n";
				if (QBList[i-1] != 0)
				{
					cout << "Do you want to spin the wheel? (Y/N) ";
					cin >> YN;
				}
				break;
		}
		cout << endl;
		if (QBList[i-1] == 0)
		{
			cout << "Spinning...\n";
			do
			{
				pick = (rand() % 32) + 1; // Random number generator to pick your new Quarterback
			} while (QBList[pick-1] == 0);
			
			switch (pick) // New Pick
			{
				case 1:
					newQB = "Marcus Mariota";
					break;
				case 2:
					newQB = "Robert Griffin III";
					break;
				case 3:
					newQB = "Philip Rivers";
					break;
				case 4:
					newQB = "Tony Romo";
					break;
				case 5:
					newQB = "Blake Bortles";
					break;
				case 6:
					newQB = "Joe Flacco";
					break;
				case 7:
					newQB = "Colin Kaepernick";
					break;
				case 8:
					newQB = "Ryan Tannehill";
					break;
				case 9:
					newQB = "Jameis Winston";
					break;
				case 10:
					newQB = "Eli Manning";
					break;
				case 11:
					newQB = "Jay Cutler";
					break;
				case 12:
					newQB = "Drew Brees";
					break;
				case 13:
					newQB = "Sam Bradford";
					break;
				case 14:
					newQB = "Derek Carr";
					break;
				case 15:
					newQB = "Jared Goff";
					break;
				case 16:
					newQB = "Matthew Stafford";
					break;
				case 17:
					newQB = "Matt Ryan";
					break;
				case 18:
					newQB = "Andrew Luck";
					break;
				case 19:
					newQB = "Tyrod Taylor";
					break;
				case 20:
					newQB = "Ryan Fitzpatrick";
					break;
				case 21:
					newQB = "Kirk Cousins";
					break;
				case 22:
					newQB = "Brock Osweiler";
					break;
				case 23:
					newQB = "Teddy Bridgewater";
					break;
				case 24:
					newQB = "Andy Dalton";
					break;
				case 25:
					newQB = "Ben Roethlisberger";
					break;
				case 26:
					newQB = "Russell Wilson";
					break;
				case 27:
					newQB = "Aaron Rodgers";
					break;
				case 28:
					newQB = "Alex Smith";
					break;
				case 29:
					newQB = "Tom Brady";
					break;
				case 30:
					newQB = "Carson Palmer";
					break;
				case 31:
					newQB = "Cam Newton";
					break;
				case 32:
					newQB = "Mark Sanchez";
					break;
			}

			cout << "Your new Quarterback is " << newQB << ".\n\n"; // Output

			QBList[pick-1] = 0; // Set the array value to 0
		}
		else
		{
			if (YN == 'Y' || YN == 'y')
			{
				cout << "Spinning...\n";
				do
				{
					pick = (rand() % 32) + 1; // Random number generator to pick your new Quarterback
				} while (QBList[pick-1] == 0);

				switch (pick) // New Pick
				{
				case 1:
					newQB = "Marcus Mariota";
					break;
				case 2:
					newQB = "Robert Griffin III";
					break;
				case 3:
					newQB = "Philip Rivers";
					break;
				case 4:
					newQB = "Tony Romo";
					break;
				case 5:
					newQB = "Blake Bortles";
					break;
				case 6:
					newQB = "Joe Flacco";
					break;
				case 7:
					newQB = "Colin Kaepernick";
					break;
				case 8:
					newQB = "Ryan Tannehill";
					break;
				case 9:
					newQB = "Jameis Winston";
					break;
				case 10:
					newQB = "Eli Manning";
					break;
				case 11:
					newQB = "Jay Cutler";
					break;
				case 12:
					newQB = "Drew Brees";
					break;
				case 13:
					newQB = "Sam Bradford";
					break;
				case 14:
					newQB = "Derek Carr";
					break;
				case 15:
					newQB = "Jared Goff";
					break;
				case 16:
					newQB = "Matthew Stafford";
					break;
				case 17:
					newQB = "Matt Ryan";
					break;
				case 18:
					newQB = "Andrew Luck";
					break;
				case 19:
					newQB = "Tyrod Taylor";
					break;
				case 20:
					newQB = "Ryan Fitzpatrick";
					break;
				case 21:
					newQB = "Kirk Cousins";
					break;
				case 22:
					newQB = "Brock Osweiler";
					break;
				case 23:
					newQB = "Teddy Bridgewater";
					break;
				case 24:
					newQB = "Andy Dalton";
					break;
				case 25:
					newQB = "Ben Roethlisberger";
					break;
				case 26:
					newQB = "Russell Wilson";
					break;
				case 27:
					newQB = "Aaron Rodgers";
					break;
				case 28:
					newQB = "Alex Smith";
					break;
				case 29:
					newQB = "Tom Brady";
					break;
				case 30:
					newQB = "Carson Palmer";
					break;
				case 31:
					newQB = "Cam Newton";
					break;
				case 32:
					newQB = "Mark Sanchez";
					break;
				}

				cout << "Your new Quarterback is " << newQB << ".\n\n"; // Output

				QBList[pick-1] = 0; // Set the array value to 0
			}
			else if (YN == 'N' || YN == 'n')
			{
				cout << "You chose to keep your Quarterback.\n";

				switch (i) // Old Pick
			{
				case 1:
					oldQB = "Marcus Mariota";
					break;
				case 2:
					oldQB = "Robert Griffin III";
					break;
				case 3:
					oldQB = "Philip Rivers";
					break;
				case 4:
					oldQB = "Tony Romo";
					break;
				case 5:
					oldQB = "Blake Bortles";
					break;
				case 6:
					oldQB = "Joe Flacco";
					break;
				case 7:
					oldQB = "Colin Kaepernick";
					break;
				case 8:
					oldQB = "Ryan Tannehill";
					break;
				case 9:
					oldQB = "Jameis Winston";
					break;
				case 10:
					oldQB = "Eli Manning";
					break;
				case 11:
					oldQB = "Jay Cutler";
					break;
				case 12:
					oldQB = "Drew Brees";
					break;
				case 13:
					oldQB = "Sam Bradford";
					break;
				case 14:
					oldQB = "Derek Carr";
					break;
				case 15:
					oldQB = "Jared Goff";
					break;
				case 16:
					oldQB = "Matthew Stafford";
					break;
				case 17:
					oldQB = "Matt Ryan";
					break;
				case 18:
					oldQB = "Andrew Luck";
					break;
				case 19:
					oldQB = "Tyrod Taylor";
					break;
				case 20:
					oldQB = "Ryan Fitzpatrick";
					break;
				case 21:
					oldQB = "Kirk Cousins";
					break;
				case 22:
					oldQB = "Brock Osweiler";
					break;
				case 23:
					oldQB = "Teddy Bridgewater";
					break;
				case 24:
					oldQB = "Andy Dalton";
					break;
				case 25:
					oldQB = "Ben Roethlisberger";
					break;
				case 26:
					oldQB = "Russell Wilson";
					break;
				case 27:
					oldQB = "Aaron Rodgers";
					break;
				case 28:
					oldQB = "Alex Smith";
					break;
				case 29:
					oldQB = "Tom Brady";
					break;
				case 30:
					oldQB = "Carson Palmer";
					break;
				case 31:
					oldQB = "Cam Newton";
					break;
				case 32:
					oldQB = "Mark Sanchez";
					break;
			}

				cout << "You kept " << oldQB << ".\n\n"; // Output

				QBList[i-1] = 0;
			}
		}
		
	}
	
}

// Notes:

// A "0" in the array means you can't take this QB

// int pick = (rand() % 32) + 1; The random number generator

// Team order with current Quarterback

// 1. Tennessee Titans - Marcus Mariota
// 2. Cleveland Browns - Robert Griffin III
// 3. San Diego Chargers - Philip Rivers
// 4. Dallas Cowboys - Tony Romo
// 5. Jacksonville Jaguars - Blake Bortles
// 6. Baltimore Ravens - Joe Flacco
// 7. San Francisco 49ers - Colin Kaepernick
// 8. Miami Dolphins - Ryan Tannehill
// 9. Tampa Bay Buccaneers - Jameis Winston
// 10. New York Giants - Eli Manning
// 11. Chicago Bears - Jay Cutler
// 12. New Orleans Saints - Drew Brees
// 13. Philadelphia Eagles - Sam Bradford
// 14. Oakland Raiders - Derek Carr
// 15. Los Angeles Rams - Jared Goff
// 16. Detroit Lions - Matthew Stafford
// 17. Atlanta Falcons - Matt Ryan
// 18. Indianapolis Colts - Andrew Luck
// 19. Buffalo Bills - Tyrod Taylor
// 20. New York Jets - Ryan Fitzpatrick
// 21. Washington Redskins - Kirk Cousins
// 22. Houston Texans - Brock Osweiler
// 23. Minnesota Vikings - Teddy Bridgewater
// 24. Cincinnati Bengals - Andy Dalton
// 25. Pittsburgh Steelers - Ben Roethlisberger
// 26. Seattle Seahawks - Russell Wilson
// 27. Green Bay Packers - Aaron Rodgers
// 28. Kansas City Chiefs - Alex Smith
// 29. New England Patriots - Tom Brady
// 30. Arizona Cardinals - Carson Palmer
// 31. Carolina Panthers - Cam Newton
// 32. Denver Broncos - Mark Sanchez