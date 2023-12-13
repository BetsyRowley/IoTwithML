# Animal Track Identifier

Created for University of St. Thomas course SEIS-744 IoT with Machine Learning

* [Edge Impulse project](https://studio.edgeimpulse.com/public/320629/latest)
* [Presentation Slides](https://uofstthomasmn-my.sharepoint.com/:p:/g/personal/rowl7939_stthomas_edu/EffM6kaOjaZMifVnx6wy9I8BQNEKeKj0PuNOHd8G7RoPsg?e=YFjYBr)

## Coyote Track Samples
![image](https://github.com/BetsyRowley/IoTwithML/assets/21369486/04a02b96-6503-4f9c-81b7-afde042b1bc0)
![image](https://github.com/BetsyRowley/IoTwithML/assets/21369486/4e1ef88b-c054-4222-aae8-3903c268bf33)
![image](https://github.com/BetsyRowley/IoTwithML/assets/21369486/7fef4fdd-e1ee-4d09-ac90-2ff4e16d020a)
![image](https://github.com/BetsyRowley/IoTwithML/assets/21369486/c574996a-c7ab-4991-9dc4-33a16058d0b4)

## How to Install

1. You can run the model on your cell phone from the Edge Impulse Project link above
2. OR You can push the model to your Arduino Nano 33 BLE Sense
   * Go to the Deployment tab of the Edge Impulse Project listed above
   * Search & Select Arduino Library
   * Select Build
   * Include the Build Zip as a library into your Arduino IDE (Sketch --> Include Library --> Add .ZIP Library)
   * Install the Arduino_OV767X library in your Arduino IDE
   * Ensure you have the OV7675 Camera connected to your Arduino
   * To get the LED Light logic, copy the Animal_Track_Identifier/examples/nano_ble33_sense/nano_ble33_sense_camera/nano_ble33_sense_camera.ino file from this repo into the Animal Track Identifier library you installed in the Arduino IDE
   * Verify the Code in Arduino IDE
   * Put your Arduino Nano 33 BLE Sense into bootloader mode and upload the code from Arduino IDE
   
