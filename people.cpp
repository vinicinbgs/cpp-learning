#include "people.h"
#include "utils.h"

#include <map>
#include <string>
#include <vector>

using namespace P;
using namespace std;
using namespace utils;

string People::getName()
{
    return this->name;
}

int People::getAge()
{
    map<string, int> map_birthday;
    vector<string> array_birthday = explode(this->birthday, '/');

    map_birthday["day"] = convert_string_to_int(array_birthday[0]);
    map_birthday["month"] = convert_string_to_int(array_birthday[1]);
    map_birthday["year"] = convert_string_to_int(array_birthday[2]);

    map<string, int> now = current_date();    

    if (now["month"] == map_birthday["month"] && now["day"] >= map_birthday["day"])
    {
        return (now["year"] - map_birthday["year"]);
    }

    if (now["month"] > map_birthday["month"])
    {
        return (now["year"] - map_birthday["year"]);
    }

    return (now["year"] - map_birthday["year"]) - 1;
}

