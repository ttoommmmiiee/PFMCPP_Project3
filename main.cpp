/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.
*/

/*
Thing 1) Electric Piano
5 properties:
    1)  number of keys
    2)  volume knob
    3)  grand piano sound
    4)  organ sound
    5)  foot pedal
3 things it can do:
    1)  adjust volume 
    2)  change sound
    3)  make sound
 */

/*
Thing 2) microwave oven
5 properties:
    1)  has door
    2)  has timer
    3)  power settings
    4)  presets for different dishes
    5)  has scale to measure weight
3 things it can do:
    1)  cook potato
    2)  auto cook by weight
    3)  change power setting
 */

/*
Thing 3) Airport 
5 properties:
    1)  number of planes
    2)  number of passengers
    3)  number of cafes
    4)  stores number of coffee sales per day
    5)  length of queue at security
3 things it can do:
    1)  board passengers on planes
    2)  restock coffee supplies
    3)  stop passengers entering airport
 */

/*
Thing 4) Vinyl record
5 properties:
    1) Length of music on side A
    2) Has music on both sides
    3) Signal to noise ratio
    4) Can play without skipping
    5) Number of good tracks on record
3 things it can do:
    1) Play through to end
    2) Bring joy to the listener
    3) Accrue resale value on Discogs
 */

/*
Thing 10)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
