/*
 * Copyright (c) Johannes Arlt - Berlin, Germany
 *  
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * -----
 * File: main.cpp
 * Project: i2cScannerDatabase
 * Description: simple I2C scanner with device database
 * -----
 * Created Date: 2024-02-16 15:05
 * Author: Johannes G.  Arlt (devcpu)
 * -----
 * Last Modified: 2024-02-16 15:22
 * Modified By: Johannes G.  Arlt (janusz)
 */


#include <Arduino.h>
#include <Wire.h>
#include "i2cDatabase.h"

int incomingByte = 0; // for incoming serial data

void setup() {
  Wire.begin();
  Serial.begin(9600);
  while (!Serial)
    ;
  Serial.println(F("\nI2C Scanner initiated... "));
  Serial.println(F("SCL -> A5"));
  Serial.println(F("SDA -> A4"));
  Serial.println(F("3.3V -> 2nd from left"));
  Serial.println(F("GND -> 2nd from right"));
  Serial.println(F("I2C-database: https://i2cdevices.org/addresses\n\n"));
  delay(5000);
}

void loop() {
  byte error, address;
  int nDevices;

  Serial.print(F("Scanning..."));

  nDevices = 0;
  for (address = 1; address < 127; address++) {
    // The i2c_scanner uses the return value of
    // the Write.endTransmisstion to see if
    // a device did acknowledge to the address.
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0) {
      Serial.print(F("\n\t- I2C device found at address 0x"));
      if (address < 16) {
        Serial.print(F("0"));
        Serial.print(F(" reserved"));
      }
      Serial.print(address, HEX);
      Serial.print(" BIN:");
      Serial.print(address, BIN);
      Serial.print(" DEC:");
      Serial.print(address, DEC);
      Serial.print(" Devices: ");
      Serial.print(get_device(address));

      nDevices++;
    } else if (error == 4) {
      Serial.print(F("\n\tUnknown error at address 0x"));
      if (address < 16)
        Serial.print(F("0"));
      Serial.print(address, HEX);
    }
  }
  if (nDevices == 0)
    Serial.println(F("No I2C devices found\n"));
  else
    Serial.println(F("\ndone\n"));

  delay(5000); // wait 5 seconds for next scan
}
