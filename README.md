You have an Ooni pizza oven?
You want to know when the stone is hyper super ready to cook amazing pizza's?

Let me present you:

<h3>The Ooni stone thermometer.</h3>

<h2>Material used:</h2>

- An arduino nano (can also be an uno) -> https://www.amazon.nl/AZDelivery-Nano-Gesoldeerd-Verbeterde-V3/dp/B01MS7DUEM/<br/>
- An Oled screen 128x64 -> https://www.amazon.nl/AZDelivery-SSD1306-compatibel-Raspberry-Inclusief/dp/B01L9GC470/<br/>
- A thermocouple MAX6675 -> https://www.amazon.nl/ZkeeShop-MAX6675-Module-Type-Thermokoppel-temperatuursensor/dp/B073FNJDXW/<br/> 
- A battery to give power to everything
- A piece of metal to fix the thermocouple to the stone.

<h2>Electrical circuit:</h2>
  
The file : ShemaWires.jpg shows you how to assemble everything together.
You can obviously change the inputs and outputs but then you need to change the code too.

<h2>The code</h2>

Once, everything is assembled, you just need to load the script on the arduino.
You can find the script in the OoniTemp folder.
Open with the arduino IDE, connect the arduino to your computer and click on the send button.

<h2>!Important!</h2> 

I had to change the line <br/>
#define SCREEN_ADDRESS 0x3C ///0x3D for 128x64, 0x3C for 128x32<br/>
to:<br/>
#define SCREEN_ADDRESS 0x3C ///0x3D for 128x64, 0x3C for 128x32<br/>

To get the screen working even if it's an 128x64 screen


<h2>Fix the thermometer to the oven</h2>

If you've noticed, there is a hole at the bottom of your Ooni oven under the stone.
Somme say it is to get the stone out of the oven but it has another benefit :

to fix your brand new assembled Ooni thermometer!

