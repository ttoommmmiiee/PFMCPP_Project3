/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CellPhone
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


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
