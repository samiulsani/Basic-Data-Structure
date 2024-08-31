#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        map<string, int> mp;

        while (ss >> word)
        {
            mp[word]++;
        }

        int count = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > count)
            {
                count = it->second;
            }
        }
        stringstream st(sentence);
        string wrd;
        map<string, int> mt;
        while (st >> wrd)
        {
            mt[wrd]++;

            if (mt[wrd] == count)
            {
                cout << wrd << " " << count << endl;
                break;
            }
        }
    }
}