void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // use the Built-In LED
}

String name[6][2] = {{"D","-.."}, {"I",".."}, {"N","-."}, {"I",".."}, {"T","-"}, {"H","...."}}; // Morse codes according to the name

void loop() {
for (int a = 0; a < 6; a++) {
  String letter = name[a][1]; // assign the element to the "letter" variable
  for (int b = 0; b < letter.length(); b++) {
    if(letter[b] == '.') { // check whether the characters of the element same as "."
      digitalWrite(LED_BUILTIN, HIGH); // make LED turn on
      delay(300); // keeps LED on for 300ms
      digitalWrite(LED_BUILTIN, LOW); // make LED turn on
      delay(400); // holds LED off for 400ms 
    }

    else if(letter[b] == '-') { // check whether the characters of the elements same as ","
      digitalWrite(LED_BUILTIN, HIGH);
      delay(900);  
      digitalWrite(LED_BUILTIN, LOW);
      delay(400);
    }
  }
  delay(600); // Holds LED off for 600ms for every element
  }
  delay(1800); // Holds LED off for 1800ms for every word
}

