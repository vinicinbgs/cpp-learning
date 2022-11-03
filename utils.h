#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <ctime>

using namespace std;

namespace utils
{
    map<string, int> current_date()
    {
        time_t t = time(0);
        tm* now = localtime(&t);
        map<string, int> current;

        current["year"] = now->tm_year + 1900;
        current["month"] = now->tm_mon + 1;
        current["day"] = now->tm_mday;

        return current;
    }

    int convert_string_to_int(string s) 
    {
        return atoi(s.c_str());
    }

    vector<string> explode(string s, char delim)
    {
        stringstream ssin(s);
        string curr;
        vector<string> arr;
        int i = 0;

        while (!ssin.eof())
        {
            getline(ssin, curr, delim);
            arr.push_back(curr);
            i++;
        }

        return arr;
    }
}