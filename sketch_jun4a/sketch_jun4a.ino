#include <LiquidCrystal.h>

int ledR = 9;
int ledY = 8;
int ledG = 7;

// Definindo uma estrutura para representar um ponto de poluição
struct PollutionPoint {
    double latitude;
    double longitude;
    String description;
};

// Simulando o monitoramento de poluição e detecção de pontos de poluição
PollutionPoint pollutionPoints[] = {
    {10.1234, -20.5678, "Plastico flutuante"},
    {30.9876, -40.4321, "Oleo derramado"},
    {50.2468, -60.1357, "Residuos industriais"}
};

// Inicializa o display LCD
LiquidCrystal lcd(12, 11, 10, 6, 5, 4, 3);

void setup() {
    // Iniciar a comunicação serial
    Serial.begin(9600);
    while (!Serial) {
        ; // aguardar a conexão da porta serial. Necessário apenas para a porta USB nativa
    }

    // Inicializa o display LCD com 16 colunas e 2 linhas
    lcd.begin(16, 2);

    // Imprime um texto inicial no LCD
    lcd.setCursor(0, 0);
    lcd.print("Inicializando...");

    // Configura os pinos dos LEDs como saída
    pinMode(ledR, OUTPUT);
    pinMode(ledY, OUTPUT);
    pinMode(ledG, OUTPUT);
}

void loop() {
    for (int i = 0; i < 3; i++) {
        // Limpa o display LCD
        lcd.clear();

        // Exibir os pontos de poluição detectados no display LCD
        lcd.setCursor(0, 0);
        lcd.print("Ponto-poluicao:");
        lcd.setCursor(0, 1);
        lcd.print("La:");
        lcd.print(pollutionPoints[i].latitude, 1);
        lcd.print(",Lo:");
        lcd.print(pollutionPoints[i].longitude, 1);

        // Imprime as informações dos pontos de poluição no monitor serial
        Serial.print("Ponto-poluicao:");
        Serial.print("Lat:");
        Serial.print(pollutionPoints[i].latitude, 6);
        Serial.print(",Long:");
        Serial.println(pollutionPoints[i].longitude, 6);

        // Acende o LED correspondente ao ponto de poluição
        digitalWrite(ledR, i == 0 ? HIGH : LOW);
        digitalWrite(ledY, i == 1 ? HIGH : LOW);
        digitalWrite(ledG, i == 2 ? HIGH : LOW);

        // Aguarda um pouco antes de imprimir o próximo ponto
        delay(5000); // Aguardar por 5 segundos
    }
}
