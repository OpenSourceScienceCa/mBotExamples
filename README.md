# mBotExamples
Examples for using the mBot robot.

# Installation

1. Install the official [Arduino IDE](https://www.arduino.cc/en/software).
2. Download and install [mBlock for Windows](https://mblock.makeblock.com/en-us/download/) to ensure you have the proper drivers installed to communicate with the mBot.
3. Download  the [Makeblock Arduino library](https://github.com/Makeblock-official/Makeblock-Libraries/archive/refs/heads/master.zip). To explore the code, you can browse the [Makeblock libraries on Github](https://github.com/Makeblock-official/Makeblock-Libraries).
4. Open the Arduino IDE.
5. Go to the "Sketch" menu, then "Include Library", and then "Add Zip Library". Select the .zip file you just downloaded.
Note that if you double-click on a folder, you must click on the folder icon. If you click on the text, it will select this folder and attempt to open it as a library.
6. Download and install the [mBotExamples library](https://github.com/OpenSourceScienceCa/mBotExamples/archive/refs/heads/main.zip). To explore the code, you can browse the [Open Source Science mBotExamples libraries on Github](https://github.com/OpenSourceScienceCa/mBotExamples/).
6. Go to the "Sketch" menu, then "Include Library", and then "Add Zip Library". Select the .zip file you just downloaded.
Note that if you double-click on a folder, you must click on the folder icon. If you click on the text, it will select this folder and attempt to open it as a library.
7. Go to the "File" menu, then "Examples", then "mBotExamples" (scroll down to the very bottom). Load an example sketch, such as mBot_RGB_LED, and upload it to your mBot.

# Examples

#### [mBot_ConditionalCode](https://github.com/OpenSourceScienceCa/mBotExamples/tree/main/examples/mBot_ConditionalCode)
Reads from an analog input, and sets the colour of the onboard LED's based on the value.

#### [mBot_ConditionalCodeComplex](https://github.com/OpenSourceScienceCa/mBotExamples/tree/main/examples/mBot_ConditionalCodeComplex)
Similar to mBot_ConditionalCode, except that the code is much more complex, and is used to determine both the colour and brightness of the onboard LED's. 

#### [mBot_DCMotorSpin](https://github.com/OpenSourceScienceCa/mBotExamples/tree/main/examples/mBot_DCMotorSpin)
Spin the mBot in one direction, and then back in the other direction. Repeat this process forever.

#### [mBot_RGB_LED](https://github.com/OpenSourceScienceCa/mBotExamples/tree/main/examples/mBot_RGB_LED)
Blink the onboard LED's, creating custom colours by mixing different amounts of red, green, and blue light.

#### [mBot_RGB_LED_Functions](https://github.com/OpenSourceScienceCa/mBotExamples/tree/main/examples/mBot_RGB_LED_Functions)
Similar to mBot_RGB_LED, except that the code uses functions to set the LED colour and brightness.

