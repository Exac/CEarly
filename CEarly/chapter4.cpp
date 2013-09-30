#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

void four_one()
{
	bool a, b;
	int x=5,
		y=10;
	a = (x < y);
	b = (y == x);
	cout << "a:" << a << " b:" << b << endl;
}
void four_two()
{
	int s1,s2,s3;
	double avg;
	cout << "enter 3 scores" << endl;
	cin >> s1 >> s2 >> s3;
	avg = (s1+s2+s3) / 3.0;
	cout << fixed << showpoint << setprecision(1);
	cout << avg << endl;
}
void four_three()
{
	double r = 0.666667 * 6.0;
	cout << "r:" << r << endl;

	if(r == 4.0)
	{
		cout << "r != 4.0";
	}else{
		cout << "r == 4.0";
	}
}
void four_four()
{
	double r = 0.666667 * 6.0;
	cout << "r:" << r << endl;

	if(abs(r - 4.0 < 0.0001)){
		cout << "r == 4!";
	}else{
		cout << "r != 4!";
	}
}
void four_five()
{
	int n;
	cout << "n:";
	cin >> n;
	if(n % 2 == 0){
		cout << n << " even";
	}else{
		cout << n << " odd";
	}
}
void four_six()
{
	double n1,n2,q;
	cout << "enter 2 nums:";
	cin >> n1,n2;
	if(n2 != 0){
		q = n1/n2;
	}else{
		cout << "DIV BY 0";
	}
}
void four_seven()
{
	int t = 83;
	char g;

	if(t<60)
		g='F';
	else if(t<70)
		g='D';
	else if(t<80)
		g='C';
	else if(t<90)
		g='B';
	else if(t<=100)
		g='A';
	cout << "Grade: " << g << endl;
}
void four_ten()
{
	const double A = 40.0;
	const double C = 20.0;
	const double S = 30.0;
	int choice;
	int months;
	double charge;
	cout << " Health Club Membership Menu\n\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
	cout << "4. Quit the Program\n\n";
	cout << "enter choice\n\n";
	cin >> choice;
	cout << fixed << showpoint << setprecision(2);
	if(choice==1){
		cout << "How many months? ";
		cin >> months;
		charge = months * A;
	}else if(choice == 2){
		cout << "How many months? ";
		cin >> months;
		charge = months * C;
	}else if(choice == 3){
		cout << "How many months? ";
		cin >> months;
		charge = months * S;
	}else if(choice != 4){
		cout << "The valid choices are 1-4...";
	}
	cout << "Total cost: $" << charge << endl;
}
void four_eleven()
{
	char e,r;
	cout << "Employed? (Y/N)\n";
	cin >> e;
	cout << "Recent grad? (Y/N)\n";
	cin >> r;
	if(e == 'Y'){
		if(r == 'Y')
		{
			cout << "qualified for loan";
		}else{
			cout << "You must have graduated from college in the past two years";
		}
	}else{
		cout << "Must be employed to take out loan.";
	}
}
void four_twelve()
{
	char e,r;
	cout << "Employed? (Y/N)\n";
	cin >> e;
	cout << "Recent grad? (Y/N)\n";
	cin >> r;
	if(e == 'Y' && r == 'Y'){
		cout << "qualified for loan";
	}else{
		cout << "You must have graduated from college in the past two years or" << 
			"Must be employed to take out loan.";
	}
}
void four_thirteen()
{
	// if(x || y){
	//	   stuff;
	// }
}
void four_fifteen(){
	int f = false,
		t = true;
	int forty = 40;
	if(forty == 40 && !f && t){
		cout << "forty=40, t=t,f=f";
	}else{
		cout << "error in logic.";
	}
}
void four_sixteen()
{
	int testScore;
	char grade; // Holds a letter grade

	// Get the numeric score
	cout << "Enter your numeric test score and I will\n";
	cout << "tell you the letter grade you earned: ";
	cin >> testScore;

	if ((testScore < 0) || (testScore > 100)) // Input validation
	{ // testScore is invalid
		cout << testScore << " is an invalid score.\n";
		cout << "Run the program again and enter a value\n";
		cout << "in the range of 0 to 100.\n";
	}
	else
	{ // testScore is valid so determine the letter grade
		if (testScore < 60)
			grade = 'F';
		else if (testScore < 70)
			grade = 'D';
		else if (testScore < 80)
			grade = 'C';
		else if (testScore < 90)
			grade = 'B';
		else // If we got this far, testScore must be >= 90
			grade = 'A';

		// Display the letter grade
		cout << "Your grade is " << grade << endl;
	}
}
void four_seventeen()
{
	// Get annual income and years on the job
	cout << "What is your annual income? ";
	double income; // Variable definition
	cin >> income;

	cout << "How many years have you worked at "
		<< "your current job? ";
	int years; // Variable definition
	cin >> years;

	// Determine if the applicant qualifies for a loan
	if ((income >= 35000) || (years > 5))
		cout << "You qualify.\n";
	else
	{ cout << "You must earn at least $35,000 or have\n";
	cout << "been employed for more than 5 years.\n";
	}
}
void four_eighteen()
{
	cout << "What is your annual income? ";
	double income;
	cin >> income;

	// If income is high enough, get years worked
	if (income >= 35000)
	{ cout << "How many years have you worked at "
	<< "your current job? ";
	int years; // Variable defined inside the if block
	cin >> years;

	if (years > 5)
		cout << "You qualify.\n";
	else
		cout << "You must have been employed for "
		<< "more than 5 years to qualify.\n"; }
	else
		cout << "You must earn at least $35,000 to qualify.\n";
}
void four_nineteen()
{
	int number;
	number = 10;
	if(number > 0){
		int number = 20;
		cout << "number:" << number << endl;
	}
	cout << "number:" << number;
}
void four_twenty()
{
	// Constants for membership rates
	const double ADULT_RATE = 40.0;
	const double CHILD_RATE = 20.0;
	const double SENIOR_RATE = 30.0;

	char choice; // Menu choice
	int months; // Number of months
	double charges; // Monthly charges

	// Display the menu and get the user's choice
	cout << " Health Club Membership Menu\n";
	cout << "A. Standard Adult Membership\n";
	cout << "B. Child Membership\n";
	cout << "C. Senior Citizen Membership\n";
	cout << "D. Quit the Program\n\n";
	cout << "Enter your choice: ";
	cin.get(choice);

	// Set the numeric output formatting
	cout << fixed << showpoint << setprecision(2);

	if ((choice < 'A') || (choice > 'D'))
	{ 
		cout << "The valid choices are A through D.\n";
		cout << "Run the program again and select one of those.\n";
	}
	else if (choice == 'A')
	{ 
		cout << "For how many months? ";
		cin >> months;
		charges = months * ADULT_RATE;
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice == 'B')
	{ 
		cout << "For how many months? ";
		cin >> months;
		charges = months * CHILD_RATE;
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice == 'C')
	{ 
		cout << "For how many months? ";
		cin >> months;
		charges = months * SENIOR_RATE;
		cout << "The total charges are $" << charges << endl;
	}
}
void four_twentyone()
{
	const double PRICE_A = 249.0,
		PRICE_B = 299.0;

	string partNum; // Holds a stereo part number

	// Display available parts and get the user's selection
	cout << "The stereo part numbers are:\n";
	cout << "Boom Box : part number S-29A \n";
	cout << "Shelf Model: part number S-29B \n";
	cout << "Enter the part number of the stereo you\n";
	cout << "wish to purchase: ";
	cin >> partNum;

	// Set the numeric output formatting
	cout << fixed << showpoint << setprecision(2);

	// Determine and display the correct price
	if (partNum == "S-29A")
		cout << "The price is $" << PRICE_A << endl;
	else if (partNum == "S-29B")
		cout << "The price is $" << PRICE_B << endl;
	else
		cout << partNum << " is not a valid part number.\n";
}
void four_twentytwo(){
	const double PAY_RATE = 50.0;
	double hours, charges;

	cout << "How many hours were worked? ";
	cin >> hours;

	hours = (hours < 5) ? 5 : hours; // Conditional operator
	charges = PAY_RATE * hours;

	cout << fixed << showpoint << setprecision(2);
	cout << "The charges are $" << charges << endl;
}
void four_twentythree()
{
	char c;
	cout << "enter A, B, or C: ";
	cin >> c;
	switch(c)
	{
	case 'A':
		cout << "AAA\n";
		break;
	case 'B':
		cout << "BBB\n";
		break;
	case 'C':
		cout << "CCC\n";
		break;
	default:
		cout << "You didn't enter A, B, or C.";
	}
}
void four_twentyfive()
{
	int model;
	cout << "Enter 100,200, or 300:\n";
	cin >> model;
	switch(model){
	case 100:
		cout << "100 entered\n";
	case 200:
		cout << "200 entered\n";
	case 300:
		cout << "300 entered\n";
	default:
		cout << "You didn't enter the correct values (100,200, or 300).";
	}
}
void four_twentysix()
{
	char feedGrade;

	// Get the desired grade of feed
	cout << "Our dog food is available in three grades:\n";
	cout << "A, B, and C. Which do you want pricing for? ";
	cin >> feedGrade;
	switch(feedGrade)
	{
	case 'a':
	case 'A': cout << "30 cents per pound.\n";
		break;
	case 'b':
	case 'B': cout << "20 cents per pound.\n";
		break;
	case 'c':
	case 'C': cout << "15 cents per pound.\n";
		break;
	default : cout << "That is an invalid choice.\n";
	}
}
void four_twentyseven()
{
	// Constants for membership rates
	const double ADULT_RATE = 40.0;
	const double CHILD_RATE = 20.0;
	const double SENIOR_RATE = 30.0;

	int choice; // Menu choice
	int months; // Number of months
	double charges; // Monthly charges

	// Display the menu and get the user's choice
	cout << " Health Club Membership Menu\n\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
	cout << "4. Quit the Program\n\n";
	cout << "Enter your choice: ";
	cin >> choice;

	// Validate and process the menu choice
	if ((choice >= 1) && (choice <= 3))
	{ cout << "For how many months? ";
	cin >> months;

	// Set charges based on user input
	switch (choice)
	{
	case 1: charges = months * ADULT_RATE;
		break;
	case 2: charges = months * CHILD_RATE;
		break;
	case 3: charges = months * SENIOR_RATE;
	}
	// Display the monthly charges
	cout << fixed << showpoint << setprecision(2);
	cout << "The total charges are $" << charges << endl;
	}
	else if (choice != 4)
	{ cout << "The valid choices are 1 through 4.\n";
	cout << "Run the program again and select one of these.\n";
	}
}
enum Roster {Tom = 1, Sharon,Bill,Teresa,John};
void four_twentyeight()
{
	int who;
	cout << "This program will give you a student's birthday.\n";
	cout << "Whose birthday do you want to know?\n";
	cout << "1 = Tom\n";
	cout << "2 = Sharon\n";
	cout << "3 = Bill\n";
	cout << "4 = Teresa\n";
	cout << "5 = John\n";
	cin >> who;
	switch(who)
	{
	case Tom :	
		cout << "thomas\n";
		break;
	case Sharon :	
		cout << "sharon\n";
		break;
	case Bill :	
		cout << "bill\n";
		break;
	case Teresa :	
		cout << "tere\n";
		break;
	case John :	
		cout << "jon\n";
		break;
	default:
		cout << "invalid selection \n";
	}
}
void four_twentynine()
{
	const int ADULT_MEAL_COST = 6.25;
	// This program determines total buffet luncheon cost when
	// the number of guests and the per person cost are known.
	// It contains a logic error.
	int numAdults, // Number of guests ages 12 and older
		numChildren; // Number of guests ages 2-11
	double adultMealTotal, // Cost for all adult meals
		childMealTotal, // Cost for all child meals
		totalMealCost;

	// Get number of adults and children attending
	cout << "This program calculates total cost "
		<< "for a buffet luncheon.\n";
	cout << "Enter the number of adult guests (age 12 and over): ";
	cin >> numAdults;
	cout << "Enter the number of child guests (age 2-11): ";
	cin >> numChildren;

	// Calculate meal costs
	adultMealTotal = numAdults * ADULT_MEAL_COST;
	childMealTotal = numChildren * ADULT_MEAL_COST * .75;
	totalMealCost = adultMealTotal + childMealTotal;
	// Display total meal cost
	cout << fixed << showpoint << setprecision(2);
	cout << "\nTotal buffet cost is $" << totalMealCost << endl;
}
void four_thirty()
{
	const double PRICE_1 = 39.00, // Set prices for different
		PRICE_2 = 69.00, // size trees
		PRICE_3 = 99.00,
		PRICE_4 = 199.00;

	const double PER_TREE_DELIVERY = 20.00, // Set delivery fees
		MAX_DELIVERY = 100.00;

	int numTrees, // Number of evergreen trees purchased
		height; // Tree height to the nearest foot
	char planted, // Are trees to be planted?('Y'/'N')
		delivered; // Are trees to be delivered?('Y'/'N')
	double treeCost, // Cost of each tree
		totalTreeCost, // Total price for all the trees
		deliveryCost = 0.0, // Delivery cost for all the trees
		plantingCost = 0.0, // Planting cost for all the trees
		totalCharges; // Total invoice amount

	// Display purchase screen and get purchase information
	cout << " Green Fields Landscaping\n"
		<< " Evergreen Tree Purchase\n\n";
	cout << "Number of trees purchased: ";
	cin >> numTrees;
	cout << "Tree height to the nearest foot: ";
	cin >> height;
	cout << "Will Green Fields do the planting?(Y/N): ";
	cin >> planted;

	if (!(planted == 'Y' || planted == 'y'))
	{ cout << "Do you want the trees delivered? (Y/N): ";
	cin >> delivered;
	}
	// Calculate costs
	if (height < 3)
		treeCost = PRICE_1;
	else if(height <= 5)
		treeCost = PRICE_2;
	else if(height <= 8)
		treeCost = PRICE_3;
	else
		treeCost = PRICE_4;

	totalTreeCost = numTrees * treeCost;

	if ((planted == 'Y') || (planted == 'y'))
		plantingCost = totalTreeCost / 2;
	else if((delivered == 'Y') || (delivered == 'y'))
		if (numTrees <= 5)
			deliveryCost = PER_TREE_DELIVERY * numTrees;
		else
			deliveryCost = MAX_DELIVERY;
	//else planting and delivery costs both remain 0.0

	totalCharges = totalTreeCost + deliveryCost + plantingCost;

	// Display information on the invoice
	cout << fixed << showpoint << setprecision(2);
	cout << "\n\n Green Fields Landscaping\n"
		<< " Evergreen Tree Purchase\n\n";
	cout << setw(2) << numTrees << " trees @ $" << setw(6) << treeCost
		<< " each = $" << setw(8) << totalTreeCost << endl;
	cout << "Delivery charge $"
		<< setw(8) << deliveryCost << endl;
	cout << "Planting charge $"
		<< setw(8) << plantingCost << endl;
	cout << " ________" << endl;
	cout << "Total Amount Due $"
		<< setw(8) << totalCharges << endl << endl;
}
void four_thirtyone()
{
	// Strings to hold user entered careers
	string career1, career2, career3;

	int randomNum; // Will hold the randomly generated integer
	// "Seed" the random generator
	unsigned seed = time(0);
	srand(seed);

	// Explain the game and get the player's career choices
	cout << "I am a fortune teller. Look into my crystal screen \n"
		<< "and enter 3 careers you would like to have. Example: \n\n"
		<< " chef \n astronaut \n CIA agent \n\n"
		<< "Then I will predict what you will be. \n\n";

	cout << "Career choice 1: ";
	getline(cin, career1);
	cout << "Career choice 2: ";
	getline(cin, career2);
	cout << "Career choice 3: ";
	getline(cin, career3);

	// Randomly generate an integer between 1 and 4.
	randomNum = 1 + rand() % 4;

	// Use branching logic to output the prediction
	if (randomNum == 1)
		cout << "\nYou will be a " << career1 << ". \n";
	else if (randomNum == 2)
		cout << "\nYou will be a " << career2 << ". \n";
	else if (randomNum == 3)
		cout << "\nYou will be a " << career3 << ". \n";
	else
		cout << "\nSorry. You will not be any of these. \n";
}




void chapter4()
{
	four_thirtyone();
}