# Doxster
Doxster is a information gathering tool designed to target people.

Doxster currently supports:
Image reverse search, Name search & Reverse number search.

## Example code of Reverse Image searching
``` C++
#include <cpr/cpr.h>
#include <iostream>
#include <string>
#include <fstream>
int main(int agrc, char** argv){
std::ifstream file("ImageReverseWebsite.txt");
cout << parameters;
cin >> parameters;
auto r = cpr::Get(cpr::Url{file, parameters};
if(file == "ImageReverseWebsite.txt"){
string image;
image = cout << "Enter the file name: "; /*File name goes here*/
cin >> image;
image = system("find /sdcard/screenshots");
system(image);
auto r = cpr::Get(cpr::Url{file, image};
}
```


## Supported services
TinEye, Intelius.

## Supported social medias
Instagram, Kik, Twitter, facebook


## required Lib
[cpr](https://github.com/whoshuu/cpr/)

## Configuration
in order to use Doxster to it's fullest extent make sure to go to [src/Doxster.cpp](https://github.com/Imgp3Dev/Doxster/blob/master/src/Doxster.cpp) and add a specific path to your images within the **system()** code.

## Files to use
**socialwebsites.txt**  - social media searching.

**ReverseNumber.txt**  - Phone number reverse searching.

**ImageReverseWebsite.txt**  - Image reverse searching.

Note: Doxster isn't finished and still has some issues.
