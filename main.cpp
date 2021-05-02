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

struct Person
{
    int age;
    bool leftHanded;
    float distanceTravled = 0.0f;
    float leftlegLength = 70.0f;
    float leftfootLength = 20.0f;
    float rightlegLength = 70.0f;
    float rightfootLength = 20.0f;
    
    struct Leg
    {
        void stepForward();
        float stepSize(float legLength, float footLength);
    };

    Leg leftLeg;
    Leg rightLeg;

    void run(int howFast, bool leftFootFirst);
};

float Person::Leg::stepSize(float legLength, float footLength)
{
    float stepSize = legLength * footLength;
    return stepSize;
}

void Person::Leg::stepForward()
{
}

void Person::run(int howFast, bool leftLegFirst)
{
    if (leftLegFirst)
    {
        leftLeg.stepForward();
        rightLeg.stepForward();
    } 
    else 
    {
        rightLeg.stepForward();
        leftLeg.stepForward();
    }
    distanceTravled += leftLeg.stepSize(leftlegLength , leftfootLength) + rightLeg.stepSize(rightlegLength , rightfootLength) * howFast;
}



 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different than the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */

struct Piano
{
    int numKeys = 127;
    double currentVolumeLevel = 50.0;
    double presetVolumeLevel = 50.0;
    std::string pianoSound = "Grand Piano"; 
    std::string organSound = "Hammond Organ"; 
    bool footPedalPressed = false; 

    struct Knob
    {
        int width = 100;
        int height = 100;
        float rotationAmount = 270.0f;
        double knobValue = 0.0;
    };

    void setVolume(double volumeKnobValue);
    std::string displayChoosenSound(double soundKnobValue);
    double audio(int notePressed, double volume, bool footPedalPressed);
};

void Piano::setVolume(double volumeKnobValue)
{
    currentVolumeLevel = volumeKnobValue;
}

std::string Piano::displayChoosenSound(double soundKnobValue)
{
    if (soundKnobValue >= 50.0)
    {
        return pianoSound;
    }
    return organSound;
}


struct Microwave
{
    bool doorIsOpen = true;
    double secondsRemaining = 0.0;
    double power = 700.0;
    int presetDishInput = 0;

    struct Preset
    {
        float weightInGrams = 500.0f; 
        int seconds = 1200;  
        int power = 900; 
        std::string presetName = "Potato";
    };

    void cookPotato( Preset potato );
    void cookByWeight(double selectedWeight, double power);
};

void Microwave::cookPotato(Microwave::Preset potato)
{
    power = potato.power;
    secondsRemaining = potato.seconds;
}

void Microwave::cookByWeight(double selectedWeight, double selectedPower)
{
    power = selectedPower;
    secondsRemaining = selectedWeight / selectedPower;
}


struct Airport
{
    int numPlanes = 50;
    int numPassengers = 1000;
    int numCafes = 10;
    int coffeeStock = 500;
    int averageMinutesInQueue = 120;

    void boardPassengers(bool planeIsReady, int numPassengers);
    bool coffeeRestockNeeded(int coffeeSales);
    bool passengersCanEnter(int numPassengers, int averageMinutesInQueue);
};

bool Airport::coffeeRestockNeeded(int coffeeSales)
{
    if (coffeeStock - coffeeSales <= 50)
    {
        return true;
    } 
    return false;
}


struct Vinyl
{
    int lenMusicSeconds = 400;
    bool musicBothSides = true;
    double noise = 0.0;
    bool vinylCanPlay = false;
    int numberOfGoodTracks = 1;

    void replay(bool hasPlayedToEnd, bool is12Inch);
    void moveToneArm(bool is12Inch);
    double bringJoy(int numberOfGoodTracks, double listenerMood);
    double accrueValue(int numberOfGoodTracks, int playsOnYoutube);
};

void Vinyl::replay(bool hasPlayedToEnd, bool is12Inch)
{
    if (hasPlayedToEnd)
    {
        moveToneArm(is12Inch);
    }
}

void Vinyl::moveToneArm(bool is12Inch)
{
    float distanceToMoveArm;
    distanceToMoveArm = is12Inch ? 6.0f : 3.5f; 
}

struct Oscillator
{
    double sawLevel = 0.0;
    double squLevel = 1.0;
    double tuning = 0.0;
    bool subOscOn = false;
    int octave = 0; 

    double osc1FM(double osc1SawSignal, double osc1SquSignal);
    double subOscSignal(bool subOscOn);
    int octaveLED(int octave, bool shiftButtonPressed);
};

double Oscillator::osc1FM(double osc1SawSignal, double osc1SquSignal)
{
    return osc1SawSignal * osc1SquSignal;
}

int Oscillator::octaveLED(int selectedOctave, bool shiftButtonPressed)
{
    selectedOctave = shiftButtonPressed ? selectedOctave : selectedOctave - 4;
    return selectedOctave
}

struct LFO
{
    double freqLFO = 30;
    bool squLFO = false;
    double attenuate = 1.0; 
    bool speedSlow = true;
    int routingLFO = 0;

    double modCutoff(double attenuate, double LFOSignal);
    double modPitch(int routingLFO, double LFOSignal);
    double modSAH(int routingLFO, double LFOSignal);
};

double LFO::modCutoff(double attenuateLevel, double LFOSignal)
{
    return LFOSignal * attenuateLevel;
}



struct Envelope
{
    int attack = 5;
    int decay = 100;
    double sustain = 0.5;
    int release = 500;

    double oscGainEnvelope(double envelopeSignal, int routingEnvelope = 0 );
    double cutoffEnvelope(double envelopeSignal, int routingEnvelope = 1 );
    int routingControl(double envelopeSignal, int routingEnvelope = 2 );
};



struct MixerAndMidi
{
    double synthGain = 0.9;
    double extGain = 0.0;
    double feedback = 0.0;
    int midiChannel = 15;
    bool clockSyncExt = false;

    int midiCC(int midiChannel, int midiCCIn);
    int midiNote(int midiChannel, int keyPressed, bool keyIsPressed);
    double signalFeedback( double feedback );
};

struct NoiseGen
{
    bool noiseColourPink = false;
    double noiseGain = 0.0;
    double sahRate = 8.0;
    double sahControl = 0.0; 
    int routingSAH = 0;

    double sahControlPitch( double sahControl, int routingSAH = 0  );
    double sahControlCutoff( double sahControl, int routingSAH = 1); 
    double sahControlLFORate( double sahControl, int routingSAH = 2  );
};

struct Synth
{
    Oscillator oscillator; 
    LFO lfo;
    Envelope envelope; 
    MixerAndMidi MixerAndMidi;
    NoiseGen noiseGen;

    double bassTone();
    double snareDrum();
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
