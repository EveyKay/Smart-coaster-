# Smart-coaster-
Hello! this is my smart coaster project! this is a project for week one of hack club's halflife. The goal of my smart coaster is to help people who have trouble remember to drink water, to stay hydrated. I would also like to preface the rest of this readme by saying that I have no idea what I'm doing, and this is like pretty much the first time I am using GitHub without major help. 
### What the smart coaster does-
there is pressure sensor that you place your cup on and when it senses that your cup has been on the pressure sensor too long, the little creature on the screen gets a bit more mad. as you leave your cup on the pressure sensor longer, the creature will get progressively more and more mad until it gets super mad and flashes lights and sets off a buzzer until you pick up your cup to take a sip. 
### My goal with the smart coaster- 
my goal with the smart coaster is to not only help people stay hydrated but to also learn more about PCB and the different pieces and pins of microcontroller myself
### Author
Me! EveyKay: https://github.com/EveyKay
### Files 
- BOM [`BOM.md`](BOM.md)
- PBC, Work in progress
- Final Code, Work in Progress
## Bill of Materials

| Part | What it's for | Qty | Unit | Total | Vendor |
| --- | --- | --- | --- | --- | --- |
| [Oled screen](https://www.buydisplay.com/i2c-white-0-91-inch-oled-display-module-128x32-arduino-raspberry-pi) | The screen | 1 | $2.80 | $2.80 | Buydisplay.com |
| [Raspberry Pi Pico (SC0915)](https://www.mouser.com/en/ProductDetail/Raspberry-Pi/SC0915?qs=T%252BzbugeAwjgnLi4azxXVFA%3D%3D) | The brain | 1 | $6.49 | $6.49 | Mouser |
| [MCP73831T-2ACI/MC](https://www.mouser.com/en/ProductDetail/Microchip-Technology/MCP73831T-2ACI-MC?qs=yUQqVecv4quJ3ICqm%2FGZxw%3D%3D) | Battery charger | 1 | $1.30 | $1.30 | Mouser |
| [JST S2B-PH-SM4-K-TB(LF)(SN)](https://www.mouser.com/en/ProductDetail/JST-Commercial/S2B-PH-SM4-K-TB-LFSN?qs=QpmGXVUTftGuZtpTcKbMuQ%3D%3D) | Battery connector | 1 | $0.89 | $0.89 | Mouser |
| [onsemi SS14 Schottky diode](https://www.mouser.com/en/ProductDetail/onsemi/SS14?qs=mVVXn4M53U%252BvrBaFv5vr4w%3D%3D) | Power system | 1 | $0.71 | $0.71 | Mouser |
| [Adafruit 166 round FSR](https://www.mouser.com/en/ProductDetail/Adafruit/166?qs=GURawfaeGuBZazGyM1uUyQ%3D%3D) | To sense the cup | 1 | $6.40 | $6.40 | Mouser |
| [C&K PCM12SMTR switch](https://www.mouser.com/c/?q=PCM12SMTR) | To turn it on and off | 1 | $2.07 | $2.07 | Mouser |
| [TDK PS1240P02BT buzzer](https://www.mouser.com/c/?q=PS1240P02BT) | The buzzer | 1 | $1.18 | $1.18 | Mouser |
| [3 LTST-C190KDKT-10A red LED](https://www.mouser.com/en/ProductDetail/LITEON/LTST-C190KDKT-10A?qs=sGAEpiMZZMt82OzCyDsLFD%252B3tm%2Fp6nZNc6zCAMVNjBI%3D) | For the flashing lights | 1 | $0.83 | $0.83 | Mouser |
| [Yageo RC0603FR-07100RL (100Ω)](https://www.mouser.com/en/ProductDetail/YAGEO/RC0603FR-07100RL?qs=NEN%2FsE%2FLsvPIwIWKCOS4%2FA%3D%3D) | Capacitor | 1 | $0.16 | $0.16 | Mouser |
| [Panasonic ERJ-3EKF1001V (1kΩ)](https://www.mouser.com/en/ProductDetail/Panasonic-Industry/ERJ-3EKF1001V?qs=H7k1u0Mp9JTM8yQxOuvoDg%3D%3D) | Led resistance | 1 | $0.49 | $0.49 | Mouser |
| [Yageo RC0603FR-0710KL (10kΩ)](https://www.mouser.com/en/ProductDetail/YAGEO/RC0603FR-0710KL?qs=grNVn54RoB%252B3GtjbJj3wJQ%3D%3D) | Resistors | 1 | $0.32 | $0.32 | Mouser |
| [Samsung CL10A475KO8NNNC (4.7µF)](https://www.mouser.com/en/ProductDetail/Samsung-Electro-Mechanics/CL10A475KO8NNNC?qs=X6jEic%2FHinAbIjmLnFfqqQ%3D%3D) | Capacitor | 1 | $0.65 | $0.65 | Mouser |
| [Wurth-Elektronik 61300211121](https://www.mouser.com/en/ProductDetail/Wurth-Elektronik/61300211121?qs=t4813l51qx%252B1A5GYDQxPlw%3D%3D) | Connector pins | 1 | $0.21 | $0.21 | Mouser |
| [Würth 61302011121 (1x20 header)](https://www.mouser.com/en/ProductDetail/Wurth-Elektronik/61302011121?qs=PhR8RmCirEbj%2FFsnpbhNaw%3D%3D) | Connectors for the battery | 1 | $3.96 | $3.96 | Mouser |
| **Parts subtotal** | | | | **$28.46** | |
| **Tax & shipping** | | | | **included** | |
| **Total** | | | | **$28.46** | |
## code 
Here is the most current version of code, it is still very much a prototype right now, it doesn't actually work for the board that I made because it was for a prototype: [`tinker_cad_prototype_code1.ino`](tinker_cad_prototype_code1.ino)

## Pcb 
Here is the pictures of the Pcb that I Made and the schematic: 
<img width="620" height="734" alt="Eveys Engineering project — PCB Editor 10_10_2026 7_12_11 AM" src="https://github.com/user-attachments/assets/096a8248-d11d-402a-94b5-59897f98a901" />
<img width="1708" height="914" alt="Eveys Engineering project" src="https://github.com/user-attachments/assets/6db1b35d-5f19-40ac-a691-2c981b7d8a71" />

- And here is the ki cad file for the pcb I Made: Eveys Engineering project.kicad_pcb
- all the other files like the drill files and the schematic file are all also in the repository 
- I made my PCB in kicad

 
## History
### Tinkercad Prototype 
Im am not that good at electronics ... Yet. so because of my lack of experience I decided to make a digital prototype through tinkercad so I could mess around with pins on the micro controller and  practice coding. here is a picture of v1 of the smart coaster and the code I make in tinker cad, neither of these will be used in the final version. 
<img width="757" height="503" alt="Screenshot 2026-10-09 2 37 41 PM" src="https://github.com/user-attachments/assets/ed87bb9f-1a5c-4623-b340-baee6f63b9b4" />

```py
// C++ code
//
#include <Adafruit_LiquidCrystal.h>

int ok = 0;

Adafruit_LiquidCrystal lcd_2(2);

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  lcd_2.begin(16, 2);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  if (analogRead(A0) < 1017) {
    Serial.println("Good job!");
  }

  if (analogRead(A0) > 1017) {
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("water?");
    lcd_2.print("Water?");
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Water!");
    lcd_2.print("Water!");
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("WATERRRR!");
    lcd_2.print("WATEERRRRR!!!!");
    while (analogRead(A0) > 1017) {
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(2, HIGH);
      delay(100); // Wait for 100 millisecond(s)
      digitalWrite(9, LOW);
      digitalWrite(8, LOW)
      ;digitalWrite(7, LOW);
      digitalWrite(2, LOW);
      delay(100); // Wait for 100 millisecond(s)
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(2, HIGH);
      delay(100); // Wait for 100 millisecond(s)
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(2, LOW);
    }
  }
}
```

