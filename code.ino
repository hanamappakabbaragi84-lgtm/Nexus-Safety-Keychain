// IDT Project: SOS Emergency Alarm
const int buzzerPin = 2; // Buzzer connected to D2
const int buttonPin = 4; // Button connected to D4

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // Check if button is pressed
  if (digitalRead(buttonPin) == LOW) { 
    
    // --- 3 Short Beeps (S) ---
    for(int i=0; i<3; i++) {
      tone(buzzerPin, 2000);
      delay(150);           
      noTone(buzzerPin);    
      delay(150);           
    }
    
    delay(300); // Gap between letters
    
    // --- 3 Long Beeps (O) ---
    for(int i=0; i<3; i++) {
      tone(buzzerPin, 2000);
      delay(450);           
      noTone(buzzerPin);    
      delay(150);           
    }
    
    delay(300); // Gap between letters
    
    // --- 3 Short Beeps (S) ---
    for(int i=0; i<3; i++) {
      tone(buzzerPin, 2000);
      delay(150);           
      noTone(buzzerPin);    
      delay(150);           
    }

    delay(1000); // Wait before repeating
    
  } else {
    noTone(buzzerPin); // Keep quiet when not pressed
  }
}
