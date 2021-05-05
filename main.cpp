/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.




struct Piano
{
    int numKeys;
    double currentVolumeLevel;
    double presetVolumeLevel;
    std::string pianoSound = "Grand Piano"; 
    std::string organSound = "Hammond Organ"; 
    bool footPedalPressed = false; 

    Piano();

    struct Knob
    {
        int Width;
        int Height;
        float RotationAmount;
        double KnobValue;

        Knob(int width, int height, float rotationAmount, double knobValue);
    };

    void setVolume(double volumeKnobValue);
    std::string displayChoosenSound(double soundKnobValue);
    double audio(int notePressed, double volume, bool footPedalPressed);
};

Piano::Piano()
{
    numKeys = 127;
    currentVolumeLevel = 0.0;
    presetVolumeLevel = 50.0;
    pianoSound = "Grand Piano"; 
    organSound = "Hammond Organ"; 
    footPedalPressed = false; 
}

Piano::Knob::Knob(int width, int height, float rotationAmount, double knobValue)
{
        Width = width;
        Height = height;
        RotationAmount = rotationAmount;
        KnobValue = knobValue;    
}

void Piano::setVolume(double volumeKnobValue)
{
    currentVolumeLevel = volumeKnobValue;
    std::cout << "Current Volume Level = " << currentVolumeLevel << std::endl;

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
    return selectedOctave;
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
    Piano myPiano;
    myPiano.setVolume(50.0);
    std::cout << "Chosen Sound = " << myPiano.displayChoosenSound(30.0) << std::endl;
    std::cout << "Chosen Sound = " << myPiano.displayChoosenSound(70.0) << std::endl;
    std::cout << "Is myPiano's member var 'numKeys' equal to 0? " << (myPiano.numKeys == 0 ? "Yes" : "No") << "\n";

    Piano::Knob volumeKnob(50,50,180.0f,100.0);
    std::cout << "Is volumeKnob's member var 'width' equal to 50? " << (volumeKnob.Width == 50 ? "Yes" : "No") << "\n";

    // Example::main();
    std::cout << "good to go!" << std::endl;
}
