# ArduinoIRRemoteControl
Control your PC using Arduino and serial communication!

Basically, connect your Arduino with an IR Receiver connected to D2.
Then, open the EXE file, select the COM port of the Arduino and press Start.
You're done!
Just press any button on your remote and it will appear on the app.
To register a trigger, select any trigger tab you want, from 1 to 8.
You can do 8 triggers.
Paste the code from Last received section to the trigger textbox, and add a Command Line command to be executed.
For example, i want to open Google Chrome: "C:\Program Files\Google\chrome\application\chrome.exe"
There's also a function you can use: the "sendkeys.vbs" (should be in the same directory as the app), it can send keyboard keys.
Example: sendkeys.vbs "hello, world"

That's all!

Also, you don't have to use an IR Remote, you can just send serial messages and it can also be triggered.
The code for the Arduino is included here.

(the main idea is that you can control your PC like for watching movies, or use it as a stream deck)
