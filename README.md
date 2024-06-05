GS - Economia Azul
nome da equipe/solucao: BlueOCEAN
<!-- integrantes: -->
Leonardo Felipe Souza Barbosa - RM555986
Estevam Melo Acosta - RM555124
Gustavo Moreno Coelho - 556289
https://leonbarbosa.github.io/gs-project/#home

<!-- TINKERCAD -->
https://www.tinkercad.com/things/i7Qmlgdgfls-sensor-de-poluicao?sharecode=LyI0g-400Ih7DWsUoIVFEXBvvYS-sxj_SShRe5r8hs8

<!-- GITHUB -->
https://github.com/LeonBarbosa/sensor-ponto-poluicao-c-.git

Sistema de Monitoramento de Poluição

Este projeto é um sistema simples de monitoramento de poluição construído com Arduino. Ele usa um display LCD para mostrar pontos de poluição e LEDs para indicar o status de cada ponto.

Descrição do Projeto
O sistema simula o monitoramento de poluição e a detecção de pontos de poluição. Ele usa três LEDs (Vermelho, Amarelo e Verde) para representar diferentes pontos de poluição. Cada ponto de poluição é definido por uma estrutura que inclui latitude, longitude e uma descrição da poluição.

O sistema usa a biblioteca LiquidCrystal para controlar o display LCD. O display LCD mostra a latitude e longitude de cada ponto de poluição. O LED correspondente acende para cada ponto de poluição.

Requisitos
Placa Arduino
Biblioteca LiquidCrystal
Display LCD
3 LEDs (Vermelho, Amarelo, Verde)
Protoboard e fios
Dependências
Este projeto depende da biblioteca LiquidCrystal para Arduino. Você pode instalá-la através da IDE do Arduino navegando até Sketch > Incluir Biblioteca > Gerenciar Bibliotecas, então procure por "LiquidCrystal" e instale-a.

Configuração e Uso
Conecte o display LCD e os LEDs à placa Arduino conforme sua configuração de hardware.
Faça o upload do sketch do Arduino para a placa Arduino.
Uma vez que o sketch é carregado, o sistema começará a monitorar os pontos de poluição.
O LCD exibirá a latitude e longitude de cada ponto de poluição.
O LED correspondente acenderá para cada ponto de poluição.
Explicação do Código
A função setup() inicializa a comunicação serial, o display LCD e define os pinos dos LEDs como saída. A função loop() itera sobre os pontos de poluição, limpa o display LCD, exibe o ponto de poluição no LCD, imprime as informações do ponto de poluição no monitor serial, acende o LED correspondente e, em seguida, espera 5 segundos antes de passar para o próximo ponto.

Solução de Problemas
Se o display LCD ou os LEDs não estiverem funcionando conforme o esperado, verifique suas conexões de hardware e certifique-se de que os pinos corretos são usados no sketch do Arduino.

Contribuindo
Contribuições são bem-vindas. Por favor, abra uma issue para discutir suas ideias antes de fazer alterações.

Licença
Este projeto está licenciado sob a Licença MIT. Veja o arquivo LICENSE para detalhes.