/*
  On data from SD card previously saved in "binRec1.dat"

  Assignment
  1. Identify the header of the packet and decode your data referring the format you saved them
  2. On the Serial port, show the columns of recorded time, X-Acc, Y-Acc, Z-Acc, HR, and SpO2
  
  Hardware Required: CyberSens-EDU
  Select board as CC3200-LAUNCHXL (80MHz) 
  work for energia-1.8.10E23 (suggested); energia-0101E0017
  by Dr. Bai 07/06/2023
*/

#include "SPI.h"
#include "SD.h"

// CC3200 GPIO17's (for SD card) energia Pin number is 18
#define SD_CS 18
// Packet Header
const uint8_t packetHeader[2] = {0xEB, 0xBE};
// Global Variables
const uint8_t packetLeng = 14;
uint8_t packetBuf[packetLeng] = {0};

void setup()
{
    Serial.begin(115200); // initialize serial communication at 115200 bits per second:

    // see if the card is present and can be initialized:
    Serial.print("Initializing SD card...");
    if (!SD.begin(SD_CS)) {
        Serial.println("Card failed, or not present");
        while (1);      
    }
    Serial.println("SD card has been initialized successfully.");
    File dataFile = SD.open("binRec1.dat", FILE_READ);
    if (!dataFile) {
        Serial.println("Failed to open data file; check whether deleted?");
        while (1);      
    }
    Serial.println("Data file to log binary data has been initialized successfully.");
    while (dataFile.available()>=packetLeng) {
	      if (uint8_t(dataFile.read())==packetHeader[0]){
            if (uint8_t(dataFile.read())==packetHeader[1]){
                dataFile.read(packetBuf,packetLeng-2);
                // Write your codes to decode each of data packets by referring the data encoder in EDU_HRSpO2SDSaveStudent.ino; print to Serial port to show the data






            }
        }
    }
    dataFile.close();

    Serial.println(F("Press 'D' to delete the data file or any other key to complete."));
    while (Serial.available() == 0) ; //wait until user presses a key
    if (Serial.read() == 100){ // Small 'D'
        SD.remove("binRec1.dat");
        Serial.println(F("Data file has been deleted."));
    }

}

void loop()
{
}
