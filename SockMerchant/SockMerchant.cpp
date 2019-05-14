#include bitsstdc++.h

using namespace std;

vectorstring split_string(string);

 Complete the sockMerchant function below.
int sockMerchant(int n, vectorint ar) 
{
    n = number of socks
    ar = color of socks
    int iRet = 0;
    unordered_mapint, int mapCountSocks;

    for (auto itSocks  ar)
    {
        auto itFind = mapCountSocks.find(itSocks);
        if(itFind != mapCountSocks.end())
        {
            if(itFind-second == 1)
            {
                iRet++;
                itFind-second = 0;
            }
            else
            {
                itFind-second++;
            }
        }
        else
        {
            mapCountSocks.insert(make_pair(itSocks, 1));
        }
    }
    return iRet;
}

int main()
{
    ofstream fout(getenv(OUTPUT_PATH));

    int n;
    cin  n;
    cin.ignore(numeric_limitsstreamsizemax(), 'n');

    string ar_temp_temp;
    getline(cin, ar_temp_temp);

    vectorstring ar_temp = split_string(ar_temp_temp);

    vectorint ar(n);

    for (int i = 0; i  n; i++) {
        int ar_item = stoi(ar_temp[i]);

        ar[i] = ar_item;
    }

    int result = sockMerchant(n, ar);

    fout  result  n;

    fout.close();

    return 0;
}

vectorstring split_string(string input_string) {
    stringiterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vectorstring splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != stringnpos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
