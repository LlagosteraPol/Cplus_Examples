#include <date.h>
#include <iostream>
#include <sstream>
#include <string>

int main(void)
{
    std::string s = "20190324";
    date::year_month_day ymd{};
    std::istringstream in{ s };
    
    in >> date::parse("%Y%m%d", ymd);

    if (!ymd.ok())
    {
        std::cout << "error";
        return 1;
    }

    std::cout << ymd << 'n';
}