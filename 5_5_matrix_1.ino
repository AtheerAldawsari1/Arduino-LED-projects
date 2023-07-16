#define ROW1 13
#define ROW2 12
#define ROW3 11
#define ROW4 10
#define ROW5 9

#define COL1 2
#define COL2 3
#define COL3 4
#define COL4 5
#define COL5 A3


const int row[] = {ROW1, ROW2, ROW3, ROW4, ROW5};
const int col[] = {COL1, COL2, COL3, COL4, COL5};


int all[5][5] = {{1,1,1,1,1},
                 {1,1,1,1,1},
                 {1,1,1,1,1},
                 {1,1,1,1,1},
                 {1,1,1,1,1}};


void setup() {
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  pinMode(A3, OUTPUT);
  digitalWrite(A3, LOW);
  pinMode(A2, OUTPUT);
  digitalWrite(A2, LOW);
  pinMode(A1, OUTPUT);
  digitalWrite(A1, LOW);
  pinMode(A0, OUTPUT);
  digitalWrite(A0, LOW);
}

void loop() {
  delay(500);
  huruf(all);
}

void huruf(int matrix[5][5]){
  for (int c=0; c<5; c++){
    digitalWrite(col[c], HIGH);
    for (int r = 0; r < 5; r++){
      digitalWrite(row[r], 255*matrix[r][c]);
      delay(1);
    }
    for (int r = 0; r < 5; r++){
      digitalWrite(row[r], HIGH);
      delay(2);
    }
    digitalWrite(col[c], LOW);
  }
}