 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different than the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
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

struct Piano
{
    //number of keys
    int numKeys = 127;
    //volume knob
    double volumeLevel = 50.0;
    //grand piano sound
    std::string pianoSound = "Grand Paino"; //choice of a few different piano samples
    //organ sound
    std::string organSound = "Hammond Organ"; //choice of a few different organ samples
    //foot pedal
    bool footPedalPressed = false; 

    struct Knob
    {
        int width = 100;
        int height = 100;
        float rotationAmount = 270.0f;
        double knobValue = 0.0;
    };

    //adjust volume 
    float pianoVolume(double volumeLevel, Knob volumeKnob);
    //change sound
    std::string chooseSound(bool pianoOn, bool organOn);
    //make sound
    double audio(int notePressed, double volume, bool footPedalPressed);
};

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

struct Microwave
{
    //has door
    bool doorIsOpen = true;
    //has timer
    int secondsRemaining = 0;
    //power settings
    int power = 700;
    //presets for different dishes
    int presetDishInput = 0;
    //has scale to measure weight  
    double weightInGrams;

    struct Preset
    {
        float weightInGrams = 500.0f; 
        int seconds = 1200;  
        int power = 900; 
        std::string presetName = "Potato";
    };

    //cook potato
    void cookPotato( Preset potato );
    //auto cook by weight
    void cookByWeight(double weightInGrams, int seconds, bool doorIsOpen, int power);
    //change power setting
    int powerSetting(int power);
    
};

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

struct Airport
{
    //number of planes
    int numPlanes = 50;
    //number of passengers
    int numPassengers = 1000;
    //number of cafes
    int numCafes = 10;
    //stores number of coffee sales per day
    int numCoffeeSales = 500;
    //length of queue at security
    int averageMinutesInQueue = 120;

    //board passengers on planes
    void boardPassengers(bool planeIsReady, int numPassengers);
    //restock coffee supplies
    int restockCoffee(bool coffeeHasRunOut);
    //stop passengers entering airport
    bool passengersCanEnter(int numPassengers, int averageMinutesInQueue);
};

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

struct Vinyl
{
    //Length of music on side A
    int lenMusicSeconds = 400;
    //Has music on both sides
    bool musicBothSides = true;
    //Signal to noise ratio
    double noise = 0.0;
    //Can play without skipping
    bool vinylCanPlay = false;
    //Number of good tracks on record
    int numberOfGoodTracks = 1;

    //Replay from begining
    void replay(bool hasPlayedToEnd, bool is12Inch);
    //Bring joy to the listener
    double bringJoy(int numberOfGoodTracks, double listenerMood);
    //Accrue resale value on Discogs
    double accrueValue(int numberOfGoodTracks, int playsOnYoutube);
};

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

struct Oscillator
{
    //Saw Wave level
    double sawLevel = 0.0;
    //Square Wave level
    double squLevel = 1.0;
    //Tuning control 
    double tuning = 0.0;
    //Sub Oscillator on/off 
    bool subOscOn = false;
    //Octave selector
    int octave = 0; 

    //FM Oscillator 2
    double osc1FM(double osc1SawSignal, double osc1SquSignal);
    //Add sub oscillator
    double subOscSignal(bool subOscOn);
    //Turn on number of LEDs to indicate octave
    int octaveLED(int octave);
};

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

struct LFO
{
    //Cycle frequency (Hz)
    double freqLFO = 30;
    //Waveform select (square or triangle)
    bool squLFO = false;
    //Attenuate amount
    float attenuate = 1.0f; 
    //Speed range select (slow or fast)
    bool speedSlow = true;
    //Routing control
    int routingLFO = 0;

    //Modulate filter cutoff
    double modCutoff(int routingLFO, double LFOSignal);
    //Modulate pitch
    double modPitch(int routingLFO, double LFOSignal);
    //Modulate the Sample and Hold rate
    double modSAH(int routingLFO, double LFOSignal);
};

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

struct Envelope
{
    //Attack time (milliseconds)
    int attack = 5;
    //Decay time (milliseconds)
    int decay = 100;
    //Sustain level 
    double sustain = 0.5;
    //Release time (milliseconds)
    int release = 500;
    //Routing control
    int routingEnvelope = 0;

    //Control osc level
    double oscGainEnvelope(double envelopeSignal, int routingEnvelope = 0 );
    //Control filter cuttoff level
    double cutoffEnvelope(double envelopeSignal, int routingEnvelope = 1 );
    //Route control to different destinations
    int routingControl(double envelopeSignal, int routingEnvelope = 2 );
};

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

struct MixerAndMidi
{
    //Gain of synth signal
    double synthGain = 0.9;
    //Gain of external audio in signal
    double extGain = 0.0;
    //Feedback signal level
    double feedback = 0.0;
    //Midi channel
    int midiChannel = 15;
    //Midi clock sync (external or internal)
    bool clockSyncExt = false;

    //Receive midi cc messages
    int midiCC(int midiChannel, int midiCCIn);
    //Send midi messages
    int midiNote(int midiChannel, int keyPressed, bool keyIsPressed);
    //Route output to before the filter stage (feedback)
    double signalFeedback( double feedback );
};

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

struct NoiseGen
{
    //Noise colour selector (pink or white)
    bool noiseColourPink = false;
    //Noise level
    double noiseGain = 0.0;
    //Sample and hold rate (hz)
    double sahRate = 8.0;
    //Sample and hold signal
    double sahControl = 0.0; 
    //Sample and hold routing
    int routingSAH = 0;

    //Sample and Hold signal control pitch 
    double sahControlPitch( double sahControl, int routingSAH = 0  );
    //Sample and Hold signal control cuttoff frequency
    double sahControlCutoff( double sahControl, int routingSAH = 1); 
    //Sample and Hold signal control LFO rate
    double sahControlLFORate( double sahControl, int routingSAH = 2  );
};

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

struct Synth
{
    //Oscillator
    Oscillator oscillator; 
    //LFO
    LFO lfo;
    //Envelope
    Envelope envelope; 
    //Mixer
    MixerAndMidi MixerAndMidi;
    //Noise Generator
    NoiseGen noiseGen;

    //Make bass tone
    double bassTone();
    //Make snare drum sound
    double snareDrum();
    //Send midi note
    int sendMidiNote();
};

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
