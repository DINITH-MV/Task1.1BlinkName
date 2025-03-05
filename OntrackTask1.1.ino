void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

// D  -..
// I  ..
// N  -.
// I  ..
// T  -
// H  ....

String name[6] = {"-..", "..", "-.", "..", "-", "...."};

void loop() {
for (int a = 0; a < 6; a++) {
  String letter = name[a];
  for (int b = 0; b < letter.length(); b++) {
    if(letter[b] == '.') {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(300);  
      digitalWrite(LED_BUILTIN, LOW);
      delay(400);
    }

    else if(letter[b] == '-') {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(900);  
      digitalWrite(LED_BUILTIN, LOW);
      delay(400);
    }
  }
  delay(600);
  }
  delay(1800);
}

