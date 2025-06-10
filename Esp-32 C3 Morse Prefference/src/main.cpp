#include <Arduino.h>

/*
 ESP32 startup counter example with Preferences library.

 This simple example demonstrates using the Preferences library to store how many times
 the ESP32 module has booted. The Preferences library is a wrapper around the Non-volatile
 storage on ESP32 processor.

 created for arduino-esp32 09 Feb 2017
 by Martin Sloup (Arcao)
*/

#include <Preferences.h>

uint8_t ON ;
uint8_t OFF ;
double dot ;
double dash;
double gp ;
double sbc ;
double sbb;
double sbcis ;
double ssbbis ;
double ltis ;
String ti1;
String ti2;
String t1i;
String t2i ;
String tt;

Preferences preferences;

void setup() {
  Serial.begin(115200);
  Serial.println();

  // Open Preferences with my-app namespace. Each application module, library, etc
  // has to use a namespace name to prevent key name collisions. We will open storage in
  // RW-mode (second parameter has to be false).
  // Note: Namespace name is limited to 15 chars.
  preferences.begin("my-app", false);

  // Remove all preferences under the opened namespace
  //preferences.clear();

  // Or remove the counter key only
  //preferences.remove("counter");

  // Get the counter value, if the key does not exist, return a default value of 0
  // Note: Key name is limited to 15 chars.
  //double counter = preferences.getDouble("counter", 0);

  // Increase counter by 1
  //counter++;

  // Print the counter to Serial Monitor
  //Serial.printf("Current counter value: %f\n", counter);

  // Store the counter to the Preferences
  //preferences.putDouble("counter", counter);

  //Putting Data
  
  preferences.putUChar("ON", LOW);
  preferences.putUChar("OFF", HIGH);
  preferences.putDouble("dot" , 1);
  preferences.putDouble("dash" , 3);
  preferences.putDouble("gap_bdd" , 1);
  preferences.putDouble("space_bc" , 3);
  preferences.putDouble("space_bb" , 7);
  preferences.putDouble("space_bcis" , 3);
  preferences.putDouble("space_bbis" , 7);
  preferences.putDouble("long_tis" , 3);
  preferences.putString("test_input_1" , "Test Input 1 DEFAULT");
  preferences.putString("test_input_2" , "Test Input 2 DEFAULT");
  preferences.putString("type1_input" , "Type 1 Input DEFAULT");
  preferences.putString("type2_input" , "Type 2 Input DEFAULT");
  preferences.putDouble("total_time" , 600000);
  

  //Printing Data
  
  ON =preferences.getUChar("ON", LOW);
  OFF =preferences.getUChar("OFF", HIGH);
  dot =preferences.getDouble("dot" , 1);
  dash =preferences.getDouble("dash" , 3);
  gp =preferences.getDouble("gap_bdd" , 1);
  sbc =preferences.getDouble("space_bc" , 3);
  sbb =preferences.getDouble("space_bb" , 7);
  sbcis =preferences.getDouble("space_bcis" , 3);
  ssbbis =preferences.getDouble("space_bbis" , 7);
  ltis =preferences.getDouble("long_tis" , 3);
  ti1 =preferences.getString("test_input_1" , "Test Input 1 DEFAULT");
  ti2 =preferences.getString("test_input_2" , "Test Input 2 DEFAULT");
  t1i =preferences.getString("type1_input" , "Type 1 Input DEFAULT");
  t2i =preferences.getString("type2_input" , "Type 2 Input DEFAULT");
  tt =preferences.getDouble("total_time", 600000);


  // Close the Preferences

  preferences.end();  
}

void loop() {

  Serial.println(dot);
  Serial.println(dash);
  Serial.println(gp);
  Serial.println(sbc);
  Serial.println(sbb);
  Serial.println(sbcis);
  Serial.println(ssbbis);
  Serial.println(ltis);
  Serial.println(ti1);
  Serial.println(t1i);
  Serial.println(t2i);
  Serial.println(tt);
  Serial.println("Done");
  delay(2000);

}