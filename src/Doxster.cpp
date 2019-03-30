#include <cpr/cpr.h>
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
int main(int argc, char** argv) {
parameters(string name, int age, string email){
/*if you have an email then put it within the email quote and same goes for the name and age*/
name = "";
age = ""
email = "";
}
std::ifstream file("socialwebsites.txt");
/*^change it to any of the listed files depending on whether you want to have it search for the info on social websites, etc. so for example if i got an email and wanted to look it up on google then i would put searchEngine.txt*/
cout << parameters;
cin >> parameters;
auto r = cpr::Get(cpr::Url{file, parameters};
if(r.status_code == "200"){
/*if status code is 200 meaning "Ok" then it will display the results*/

cout << "Done.";
r.text;
}else{
cout << "error";
}
r.header["content-type"];
if(file == "ImageReverseWebsite.txt"){
string image;
image = cout << "Enter the file name: ";
cin >> image;
image = system("find /path/to/images")
/*^change that to a specfic path where all your images go*/
system(image)
auto r = cpr::Get(cpr::Url{file, image};
if(r.status_code == "200"){
cout << "Done."
r.text;
}
