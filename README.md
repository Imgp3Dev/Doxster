# Doxster
Doxster is a information gathering tool designed to target people.

## Example code of Reverse Image searching
``` C++
#include <cpr/cpr.h>
#include <iostream>
#include <string>
#include <fstream>
int main(int agrc, char** argv){
std::ifstream file("ImageReverseWebsite.txt");
if(file == "ImageReverseWebsite.txt"){
string image;
image = cout << "Enter the file name: "; /*File name goes here*/
cin >> image;
image = system("find /sdcard/screenshots");
system(image);
auto r = cpr::Get(cpr::Url{file, image};
}
```
**^one of the examples**

## Features
- fuzzy string match

- name search

- email search

- reverse image search

- number search

## Supported services
TinEye, Intelius.

## Supported social medias
Instagram, Kik, Twitter, facebook


## required Lib
[cpr](https://github.com/whoshuu/cpr/)

[libgen](https://github.com/SebastienDebia/libRegen/)

## Configuration
in order to use Doxster to it's fullest extent make sure to go to [src/Doxster.cpp](https://github.com/Imgp3Dev/Doxster/blob/master/src/Doxster.cpp) and add a specific path to your images within the **system()** code.

## Files to use
**socialwebsites.txt**  - social media searching.

**ReverseNumber.txt**  - Phone number reverse searching.

**ImageReverseWebsite.txt**  - Image reverse searching.

## Upcoming features
- Automatic dox formatting

- IP scan

**Note:** Doxster isn't finished and still has some issues.
