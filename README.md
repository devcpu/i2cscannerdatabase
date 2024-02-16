# Simple I²C-Scanner with inline database for Arduino for Arduino framework
# Ein einfacher I²C-Scanner mit einer inline Datenbank für Arduino Framework

## Abstract:

**German version below**

You are often faced with the problem that an I2C device doesn't seem to work. Or you have a sketch, a sensor for it, but it doesn't work. This is where the scanner can help. 

If the I2C device is connected correctly, it will display the I2C address if it is still working. The devices that usually use this I2C address are also displayed.

Now you can check the source code to see whether the same I2C address is used there. If not, you can correct it. The easiest way to do this is in the source code, but many I2C devices also allow the I2C address to be changed using jumpers/solder blobs. 


Öfter steht man vor dem Problem, ein I2C-Device funktioniert scheinbar nicht. Oder man hat einen Sketch, einen Sensor dazu, aber es funktioniert nicht. Hier kann der Scanner helfen. 

Wenn das I2C-Device richtig angeschlossen ist, zeigt es, sofern es noch funktioniert, die I2C-Adresse an. Außerdem werden die Devices angezeigt, die üblicherweise diese I2C-Adresse nutzen.

Jetzt kann man im Quelltext nachschauen, ob dort auch dieselbe I2C-Adresse genutzt wird. Falls nicht, kann man korrigieren. Am einfachsten im Quelltext, viele I2C-Devices lassen aber auch eine Änderung der I2C-Adresse mittels Jumper/Lötkleckse zu.

## Hardware:

- Arduino Nano 168
- Arduino Nano 328
- (ESP8266/ESP32)

The source code was tested for Arduino Nano 168 and Arduino Nano 328, but should run on all Arduinos with ATmega 168 or ATmega 328. ESP8266 or ESP32 were not tested, although the source code should also run there. You just have to use the correct pins for I2C0(?).

I simply used an Arduino Nano 168 and the usual jumper cables to connect the I2C device to the Arduino.

**Important note:**

Arduinos and many I2C devices are relatively good-natured if you mix up a cable. But there are also exceptions. OLD displays (SSD1305/SSD1306/...) die immediately if you mix up Vcc and GND. Unfortunately, there are different variants of these OLD displays that differ at precisely this point. Friends of mine killed their brand new OLD because they changed the OLD display on a TTGO board that had the pins the other way around.


Der Quelltext wurde getestet für Arduino Nano 168 und Arduino Nano 328, sollte aber auf allen Arduinos mit ATmega 168 oder ATmega 328 laufen. Nicht   getestet wurde ESP8266 oder ESP32, obwohl der Quelltext dort auch laufen sollte. Man muss dann nur die richtigen Pins für I2C0(?) nutzen.

Ich nutzte einfach einen Arduino Nano 168 und die üblichen Jumper Kabel um das I2C-Device mit dem Arduino zu verbinden.

**Wichtiger Hinweis:**

Arduinos und auch viele I2C-Devices sind relativ gutmütig, wenn man mal ein Kabel verwechselt. Es gibt aber auch Ausnahmen. OLD-Displays (SSD1305/SSD1306/...) sterben sofort, wenn man Vcc und GND verwechselt. Blöderweise gibt es unterschiedliche Varianten dieser OLD-Displays, die genau an dieser Stelle sich unterscheiden. Freunde von mir haben ihr nagelneues OLD gekillt, weil sie auf einem TTGO-Board das OLD-Display gewechselt haben das aber genau andersherum die Pins hatte.

# Flashing / IDE:

The project was created using VSCode and the PlatformIO plugin.
If you have cloned the project from Github, you can easily burn it to the Arduinos via USB cable using the PlatformIO tools.
In the Arduino IDE it is similar, please use the help of the Arduino IDE.

Das Projekt wurde unter Verwendung von VSCode und dem PlatformIO - Plugin erstellt.

Wenn man das Projekt von Github geclont hat, sollt es ganz einfach mit den PlatformIO-Tools via USB-Kabel auf die Arduinos brennen lassen.

In der Arduino-IDE ist es ähnlich, bitte die Hilfe der Arduino-IDE benutzen.

## Status:

Unless someone or I have another brilliant idea, the project will probably not be changed.

Falls nicht jemand oder ich noch eine geniale Idee hat, wird das Projekt wohl keine Änderung mehr erfahren.