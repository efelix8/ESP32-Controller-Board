# ESP32-Controller-Board

Components:
- ESP32-esp32s
- 4x relays (12v)
- 4x 1n4007 diodes
- 4x BC547 transistors
- 4x 3-pin 5mm terminal blocks
- 12x grain 0805 1K SMD resistors
- 8x 0805 SMD Red LEDs

Project Goals:

- Constructing a straightforward relay control circuit with an ESP32 microcontroller.
- Activating and deactivating the relays using the ESP32's digital pins.
- Managing different devices (lights, motors, fans, etc.) via relays.
- Operating relays remotely through a wireless connection with the ESP32.

Starting the Project:

- Before starting, set up a suitable software development environment to program the ESP32 microcontroller. Arduino IDE is a popular choice.
- Connect the ESP32 development board to your computer using a USB cable.
- Open Arduino IDE and select the appropriate port and board for the ESP32.
- Write or upload the necessary code to the ESP32. This code will enable the ESP32 to start the WiFi connection and web server.
- To program the ESP32, click the "Upload" button to upload the code.

Connecting to a Wireless Network:

- The ESP32 uses a WiFi connection to control your project wirelessly.
- Open the ESP32's serial monitor and check the WiFi connection status. A message will appear asking for your WiFi network's SSID and password.
- An IP address will be assigned to the ESP32's web server, and you will see this IP address on the serial monitor.

Controlling Relays via Web Interface:

- Open a web browser and enter the ESP32's assigned IP address.
- In the web browser, you will see a simple user interface connected to the ESP32's web server. This interface will include buttons or commands to control the relays.
- Each relay will have an "on" and "off" button in the interface.
- Click the appropriate buttons to turn the relevant relay on or off.
- When you click the buttons, the ESP32 will control the relays, turning the corresponding relay on or off.
- The relays' status can be visually monitored via the LEDs on the ESP32. For example, an active relay may have a lit LED.

Impact of Remotely Controlled Relays:

- Each relay will manage a load as specified in the project. This could be lights, motors, fans, or other electrical devices.
- When the relays are activated, the connected loads will operate, and when deactivated, they will stop.
- The relay switching will be controlled via the ESP32's web server, allowing control from any device on the same network.
- For instance, you can use a smartphone or computer connected to your home WiFi network to control the relays. This allows remote relay control whether you're at home or away.

Circuit Connections:

- After placing the components on the PCB, you need to make the circuit connections.
- Connect the relays' control pins (coil pins) to the ESP32's D23, D21, D22, and D19 pins, which are the ESP32's digital output pins that will control the relays.
- Connect the relays' VCC (power) pins to a 12V power supply.
- Connect the relays' GND (ground) pins to the power supply's ground.
- Connect the relays' NO (Normally Open) and COM (Common) terminals to one side of the load, and the other side of the load to the power supply.
- Place the 1N4007 diodes in reverse polarity parallel to the relay coils to prevent voltage reversals.
- Use BC547 transistors to convert the low current from the ESP32 to high current. Connect each transistor's tab (T) pin to the relay coil, the collector (C) pin to the positive (12V) side of the power supply, and the emitter (E) pin to ground.

Programming:

- Use Arduino IDE or a similar software development environment to control the ESP32.
- Write the appropriate code for the ESP32. This code should enable the ESP32 to establish a WiFi connection, start the web server, and control the relays.
- The program on the ESP32 will enable it to connect to the WiFi network and obtain an IP address.
- While programming, map the ESP32's D23, D21, D22, and D19 pins to the relays' control pins. These pins will provide the signals to turn the relays on and off.
- In your program, create the ESP32's web server and interface. The interface should include buttons or commands to control the relays.

Application Usage:

- Connect the ESP32 to the power source and upload its program.
- The ESP32 will connect to the WiFi network and obtain an IP address.
- Use a device (smartphone, tablet, computer) to open a web browser with the ESP32's IP address.
- In the web interface, you will see buttons or commands to control the relays.
- Click the corresponding button to turn the relevant relay on or off.
- The ESP32 will control the relays, turning the relevant relay on or off as you click the buttons.
- Monitor the relays' status via the LEDs on the ESP32 or the visual feedback displayed on the web interface.
- The loads controlled by the relays (lights, motors, fans, etc.) will operate based on the relays' status.

Internet Access:

- The ESP32's WiFi connection enables your project to connect to the internet.
- Connect the ESP32's web server to a wireless access point (router) within your network.
- Control your project with any device (smartphone, tablet, computer) connected to the same network.
- With internet access, you can control your project from anywhere in the world.

Remote Access:

- Access your project remotely using the ESP32's IP address.
- Open a web browser on your device and enter the ESP32's IP address in the address bar.
- Use the web interface to control the relays through the ESP32's web server.
- Turn the relays on or off by clicking the respective buttons.
- The remote access feature allows you to control your project even when you are not at home. For instance, you can control the relays using a smartphone app.

Programming and Customization:

- Use the Arduino IDE or a similar environment to program the ESP32.
- Customize the program to control the ESP32. For example, add timers or automatic scenarios to schedule the relays.
- Expand the project by adding additional components or sensors. For example, integrate a temperature sensor or a motion sensor to create an interactive automation system.
- Integrate with internet-based services or APIs to enhance your project's complexity and functionality. For example, use weather data to automatically control the relays based on weather conditions.

Security:

- Consider safety precautions when using the project.
- Use a strong password and user authentication to access the ESP32's web server.
- Ensure the power supply and electrical connections are secure and safe.
- For remote access, use a secure network and firewall to minimize security vulnerabilities.