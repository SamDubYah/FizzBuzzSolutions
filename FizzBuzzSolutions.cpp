//Author: Sam Warner
//Date: 4/23/2020
//Question Location: https://www.youtube.com/watch?v=QPZ0pIK_wsc

// define struct for check to ease future additions
struct Checks
{
	int checkValue;
	std::string returnWord;
};

// takes values from struct checks values and returns word if true else return nothing
std::string FizzBuzzCheck(int number, int checkValue, std::string returnWord)
{
	if (number % checkValue == 0)
		return returnWord;
	else
		return "";
}

void FizzBuzz()
{
	// define array of checks with struct to ease future additions
	// Too add more checks, insert new line in format:
	//		{checkValue, "returnWord"}
	Checks check[] = {
		{3, "Fizz"},
		{5, "Buzz"},
		{7, "Fibb"},
		{9, "Buff"},
		{11, "Fiff"}
	};

	// The number to stop the fizzbuzz at
	int checkToNumber{ 100 };

	// count 1 to 100 send current number to FizzBuzzCheck
	for (int number{ 1 }; number <= checkToNumber; ++number)
	{
		//define fizzBuzzResult initialize to empty string
		//define arrayLength for endpoint in Checks struct array
		std::string fizzBuzzResult{ "" };
		int arrayLength = static_cast<int>(std::size(check));

		// forloop iterating through entirety of check array struct
		// storing string for positive results
		for (int iteration{ 0 }; iteration < arrayLength; ++iteration)
		{
			fizzBuzzResult += FizzBuzzCheck(number, check[iteration].checkValue, check[iteration].returnWord);
		}
		
		// print out fizzBuzzResult string if not empty, else print current number
		if (fizzBuzzResult != "")
			std::cout << fizzBuzzResult << '\n';
		else
			std::cout << number << '\n';
	}
}


int main()
{
  // Call the FizzBuzz function
  FizzBuzz();
  
  return 0;
}
