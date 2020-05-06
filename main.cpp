/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
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
Thing 5) Oscillator
5 properties:
    1) Saw Wave level
    2) Square Wave level
    3) Tuning control
    4) Sub Oscillator on/off 
    5) Octave selector
3 things it can do:
    1) Change octave
    2) Add sub oscillator
    3) Detune
 */

/*
Thing 6) LFO
5 properties:
    1) Cycle frequency (Hz)
    2) Waveform select (square or triangle)
    3) Attenuate amount
    4) Speed range select (slow or fast)
    5) Routing control
3 things it can do:
    1) Modulate filter cutoff
    2) Modulate pitch
    3) Modulate the Sample and Hold rate
 */

/*
Thing 7) Envelope
5 properties:
    1)  Attack time (milliseconds)
    2)  Decay time (milliseconds)
    3)  Sustain level 
    4)  Release time (milliseconds)
    5)  Routing control
3 things it can do:
    1)  Control mixer level
    2)  Control filter cuttoff level
    3)  Route control to different destinations
 */

/*
Thing 8) Mixer and midi interface
5 properties:
    1)  Gain of synth signal
    2)  Gain of external audio in signal
    3)  Feedback signal level
    4)  Midi channel
    5)  Midi clock sync (external or internal)
3 things it can do:
    1)  Receive midi messages
    2)  Send midi messages
    3)  Route output to before the filter stage (feedback)
 */

/*
Thing 9) Noise Generator
5 properties:
    1)  Noise colour selector (pink or white)
    2)  Noise level
    3)  Sample and hold rate
    4)  Sample and hold signal
    5)  Sample and hold routing
3 things it can do:
    1)  Sample and Hold signal control pitch 
    2)  Sample and Hold signal control cuttoff frequency 
    3)  Sample and Hold signal control LFO rate
 */


/*
Thing 10) Synth
5 properties:
    1)  Oscillator
    2)  LFO
    3)  Envelope
    4)  Mixer
    5)  Noise Generator
3 things it can do:
    1)  Make bass tone
    2)  Make snare drum sound
    3)  Send midi
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
