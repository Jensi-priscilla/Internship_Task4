# Internship_Task4

# 🔌 Tinkercad LED Control via Serial Commands (`1` and `0`)

This Tinkercad project simulates controlling an LED connected to an Arduino Uno using **simple numeric commands (`1` or `0`)** via the Serial Monitor.

---

## 🎯 Goal

Control an LED in the Tinkercad simulation using:
- `1` → Turn LED ON
- `0` → Turn LED OFF

---

## 🧰 Components Used

- 🟦 Arduino Uno
- 🔴 LED
- ⚡ 220Ω resistor
- 🧱 Breadboard (optional)
- 🖥️ Serial Monitor (built into Tinkercad)

---

## 🔌 Circuit Connections

| Arduino Pin | Connects To            |
|-------------|------------------------|
| Pin 13      | LED Anode (long leg)   |
| GND         | Resistor → LED Cathode |

---

## 🧠 Arduino Code

```cpp
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    char command = Serial.read();
    if (command == '1') {
      digitalWrite(13, HIGH);
    } else if (command == '0') {
      digitalWrite(13, LOW);
    }
  }
}
