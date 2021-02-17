using System;

// Namespace
namespace NumberGuesser
{
    // Main Class
    class Program
    {
        // Entry Point Method
        static void Main(string[] args)
        {
            GetAppInfo();

            GreetUser();

            while (true)
            {

                // Set correct number
                Random random = new Random();
                int correctNumber = random.Next(1, 11);

                // Init guess var
                int guess = 0;

                Console.WriteLine("Guess a number between 1 and 10");

                while (guess != correctNumber)
                {
                    string input = Console.ReadLine();

                    // Make sure its a number
                    if (!int.TryParse(input, out guess))
                    {
                        PrintColorMessage(ConsoleColor.Red, "Please use an actual number");

                        continue;
                    }

                    guess = Int32.Parse(input);

                    if (guess != correctNumber)
                    {
                        PrintColorMessage(ConsoleColor.Red, "Wrong number, please try again");
                    }
                }

                PrintColorMessage(ConsoleColor.Yellow, "You are CORRECT!!!");

                // Ask to play again
                Console.WriteLine("Type [Y] to play again");

                // Get answer
                string answer = Console.ReadLine().ToUpper();

                if (answer == "Y")
                {
                    continue;
                }
                else
                {
                    return;
                }

            }
        }

        static void GetAppInfo()
        {
            // App Vars
            string appName = "Number Guesser";
            string appVersion = "1.0.0";
            string appAuthor = "Michael Zuffi";

            // Change text color
            Console.ForegroundColor = ConsoleColor.Green;

            // Write out app info
            Console.WriteLine("{0}: Version {1} by {2}", appName, appVersion, appAuthor);
        }

        static void GreetUser()
        {
            // Ask users name
            Console.WriteLine("What is your name?");

            // Get input
            string inputName = Console.ReadLine();

            Console.WriteLine("Hello {0}, let's play a game...", inputName);
        }

        static void PrintColorMessage(ConsoleColor color, string message)
        {
            // Change text color
            Console.ForegroundColor = color;

            // Tell user its not a number
            Console.WriteLine(message);

            // Reset Color
            Console.ForegroundColor = ConsoleColor.Green;
        }
    }
}