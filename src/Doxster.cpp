#include <cpr/cpr.h>
#include <iostream>
#include <string>


int main(int argc, char** argv) {
string input;
input = cout << " ";
cin >> input;
auto r = cpr::Get(cpr::Url{"https://www.google.com/", input};
r.status_code;
r.header["content-type"];
r.text;
}
