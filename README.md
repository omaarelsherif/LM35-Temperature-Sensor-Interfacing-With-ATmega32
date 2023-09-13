<!-- PROJECT TITLE -->
<h1 align="center">LM35 Temperature Sensor Interfacing With ATmega32"</h1>

<!-- OVERVIEW -->
## <br>**➲ Overview**
This project demonstrates how to interface a LM35 temperature sensor with an ATmega32 microcontroller. The ATmega32 reads the analog temperature value from the sensor, converts it to digital, and displays it's volateg value on an LCD screen. Each 1°C corresponds to 10mV on the LM35 sensor.

<!-- HARDWARE REQUIREMENTS -->
## <br>**➲ Hardware Requirements**
* IMTSchool Development Kit (or a compatible hardware setup)
* USBASP Programmer (or another suitable programmer)
* Jumper wires

<!-- SOFTWARE REQUIREMENTS -->
## <br>**➲ Software Requirements**
* <a href="https://www.eclipse.org/downloads/packages/release/2023-06/r/eclipse-ide-cc-developers" target="_blank">Eclipse IDE</a> 
* <a href="https://www.labcenter.com/downloads/" target="_blank">Proteus</a> 
* <a href="https://sourceforge.net/projects/winavr/" target="_blank">WinAVR</a> 
* <a href="https://www.fischl.de/usbasp/" target="_blank">USBASP driver</a> 

**NOTE:** you can install another simulation program like multisim and another IDE like Microship studio or VS code with external compiler, anything can work all you need is to compile the project to generate hex file.

<!-- PROJECT STRUCTURE -->
## <br>**➲ Project Structure**
The project is structured as follows:
* main.c: The main application code responsible for counting and controlling the LEDs based on the 7-segment display's value.
* STD_TYPES.h: A header file containing standard data types for the project.
* BIT_MATH.h: A header file containing bit manipulation macros.
* DIO Driver:
  * DIO_Program.c: The source code for the DIO driver functions.
  * DIO_Interface.h: The interface (header) file for the DIO driver.
  * DIO_Register.h: Registers addresses for the DIO driver.
* LCD Driver:
  * LCD_Program.c: Implementation of the LCD driver.
  * LCD_Interface.h: Interface for the LCD driver.
  * LCD_Config.h: Configuration file for LCD settings.
* ADC Driver:
  * ADC_Program.c: The source code for the ADC driver functions.
  * ADC_Interface.h: The interface (header) file for the ADC driver.
  * ADC_Register.h: Registers addresses for the ADC driver.

<!-- GETTING STARTED -->
## <br>**➲ Getting Started**
1. **Hardware Setup:**
   * Connect LM35 sensor to porta pin0 (ADC0) and LCD to portc and portd of ATmega32 microcontroller.

2. **Software Setup:**
* Install Eclipse on your computer.
* Set up Proteus for simulation.
* Install the USBASP Programmer software and ensure your programmer is connected.
1. **Clone the Repository:**
```sh
git clone https://github.com/omaarelsherif/LM35-Temperature-Sensor-Interfacing-With-ATmega32.git
```
1. **Build the project:**
   * Build the project using Eclipse or any another IDE
   * Use the USBASP Programmer to flash the ATmega32 with the generated hex file.
2. Run the Simulation:
   * If you want to simulate the project, open it in Proteus and run the simulation.
3. Observe the LCD:
   * Every 500ms the LCD will refresh LM35 reading and display the outpout voltage in mv.

<!-- OUTPUT -->
## <br>**➲ Output**
<h4>Simulation Design: </h4>
In this gif, you can see the simulation setup in Proteus. The push LM35 sensor connected to port A and the LCD connected to port C and port D of the ATmega32 microcontroller and When LM35 read the temperature the LCD will display the corrosponding voltage.

![Alt Text](LM35/Output/software.gif)

<h4>Hardware Connection (IMTSchool Kit): </h4>
This gif showcases the physical hardware connection using the IMTSchool Development Kit. The ATmega32 microcontroller is connected to LM354 sensor and LCD, mirroring the simulation design.

![Alt Text](LM35/Output/hardware.gif)

<!-- CONTACT -->
## <br>**➲ Contact**
- E-mail   : [omaarelsherif@gmail.com](mailto:omaarelsherif@gmail.com)
- LinkedIn : https://www.linkedin.com/in/omaarelsherif/
- Facebook : https://www.facebook.com/omaarelshereif
