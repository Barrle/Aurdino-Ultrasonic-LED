# Arduino Ultrasonic Sensor & LED

An Arduino project that detects nearby objects using an ultrasonic distance sensor (HC-SR04) and triggers an LED when an obstacle is within 5 cm.

## Pin Configuration

| Component | Pin | Arduino Pin |
|---|---|---|
| **Ultrasonic Echo** | Echo | `A0` |
| **Ultrasonic Trig** | Trig | `A1` |
| **LED** | Anode (+) | `A2` (through resistor) |
| **VCC** | 5V | `5V` |
| **GND** | GND | `GND` |

## How It Works

1. The ultrasonic sensor transmits a 10 µs pulse on the `Trig` pin (`A1`).
2. The `Echo` pin (`A0`) receives the reflection and measures signal duration.
3. If an object is detected within **5.0 cm**, the LED on pin `A2` lights up.
4. Serial telemetry outputs measurement data at **115200 baud**.
