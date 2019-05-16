int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string myNumbers[10] = {"Greater than 9", "One", "Two", "Three", "Four", "Five",                                 "Six", "Seven", "Eight", "Nine" };
    
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
