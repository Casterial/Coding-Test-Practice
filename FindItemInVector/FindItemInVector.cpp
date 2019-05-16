string findNumber(vector<int> arr, int k) 
{
    vector<int>::iterator it;
    it = find(arr.begin(), arr.end(), k);
    if (it != arr.end())
    {
        return "YES";
    }
    else 
    {
        return "NO";
    }
}