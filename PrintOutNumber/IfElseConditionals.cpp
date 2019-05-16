int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string myNumbers[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    
    if (n > 9)
    {
        cout << myNumbers[0];
    }
    else
    {
        cout << myNumbers[n];
    }
    return 0;
}
