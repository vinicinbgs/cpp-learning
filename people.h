#include <string>

using namespace std;

namespace P
{
    class People
    {       
        public:
            string name;
            string birthday;
            int age;
            

            string getName();
            int getAge();
    };
}