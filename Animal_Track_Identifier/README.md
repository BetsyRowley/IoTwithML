# Animal Track Identifier

Created for University of St. Thomas course SEIS-744 IoT with Machine Learning

* [Edge Impulse project](https://studio.edgeimpulse.com/public/320629/latest)
* [Presentation Slides](https://uofstthomasmn-my.sharepoint.com/:p:/g/personal/rowl7939_stthomas_edu/EffM6kaOjaZMifVnx6wy9I8BQNEKeKj0PuNOHd8G7RoPsg?e=YFjYBr)

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
   
