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

Note that you can't change the two Analogic outputs (4,5) for the screen.

<h2>The code</h2>

Once, everything is assembled, you just need to load the script on the arduino.
You can find the script in the OoniTemp folder.
Open with the arduino IDE, connect the arduino to your computer and click on the send button.

<b>!Important!</b> 

Don't forget to download/enable the libraries needed included at the top of the script.

I had to change the line <br/>

#define SCREEN_ADDRESS 0x3D ///0x3D for 128x64, 0x3C for 128x32<br/>

to:<br/>

#define SCREEN_ADDRESS 0x3C ///0x3D for 128x64, 0x3C for 128x32<br/>

To get the screen working even if it's an 128x64 screen.


<h2>Fix the thermometer to the oven</h2>

If you've noticed, there is a hole at the bottom of your Ooni oven under the stone.
Somme say it is to get the stone out of the oven but it has another benefit :

to fix your brand new assembled Ooni thermometer!

So just grab a piece of metal, make a hole in it and give it some kind of U form to put it in the hole of your oven.
And make sure the tip of the thermocouple is in contact with your stone.

You can find an illustration in the file Attach.jpg

And a video of it working (OoniTemp.mp4)

<h2>Temperature on the TOP of the BOTTOM of the stone</h2>

When I posted the thermometer on Reddit there was some kind of debate if it was efficient to measure the temp at the bottom of the stone.

So like I said, in the post, 

<i>what I'm trying to figure out is if there is a correlation between top temp and bottom temp (should be).

So with experience I'll know that when the bottom has reached xx degrees, the stone is perfect to cook pizza's. Now it's showing degrees but it could also be a green light for example.

I'm just curious to see if wind/external temp could influence the correlation top temp/bottom temp because where the thermocouple is in contact with the stone, the stone is exposed (but it's the easiest access to the stone).

If that's the case I'll build some closed room around the thermocouple to minimize it.</i>
