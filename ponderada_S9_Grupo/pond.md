# Ponderada de Sala em Grupo Semana 9 - Visão Geral sobre Segurança em IoT



| *Análise de Vulnerabilidades do Projeto*                       | *Ataque Possível*                                        | *Impacto*  | *Risco*  | *Autor*|
|------------------------------------------------------------------|------------------------------------------------------------|--------------|------------| -------------|
| Necessidade de conexão Wi-Fi com o broker                       | DDOS no Broker ou roteador                                 | Alto         | Alto  | Miguel e Vitor    |
| Protocolo MQTT sem criptografia                                 | Interceptação com ferramentas de análise como Wireshark    | Médio        | Alto       | João Pedro e João Vitor| 
| Interceptar o acesso do usuário com um segundo ESP32            | Phishing                                                   | Alto         | Baixo      | Marlos e Gabriel| 
| Cancelamento da frequência Wi-Fi                               | DDOS                                                       | Alto         | Baixo      | Ricardo| 

### Explicação e Justificativa das Vulnerabilidades

1. *Necessidade de conexão Wi-Fi com o broker*  
   - *Ataque possível*: Ataques de *DDoS (Distributed Denial of Service)* no broker ou roteador Wi-Fi podem interromper a comunicação entre dispositivos IoT e o broker MQTT. Isso é possível ao sobrecarregar o broker ou o roteador com solicitações, tornando-o inacessível.  
   - *Impacto alto*: A comunicação entre dispositivos IoT e o sistema central é essencial, e sua interrupção pode causar falhas críticas, especialmente em sistemas industriais ou de automação.  
   - *Risco alto*: A probabilidade de um ataque DDoS em redes públicas ou mal configuradas é alta devido à facilidade de ferramentas disponíveis para tal.

2. *Protocolo MQTT sem criptografia*  
   - *Ataque possível*: Quando o MQTT é configurado sem *TLS (Transport Layer Security)*, os dados trafegam em texto simples, permitindo que sejam interceptados por ferramentas como *Wireshark* operando em modo promíscuo. Isso expõe informações sensíveis, como comandos e dados de dispositivos.  
   - *Impacto médio*: Embora o impacto varie dependendo dos dados interceptados, informações críticas podem ser comprometidas, aumentando o risco de exploração posterior.  
   - *Risco alto*: O uso de MQTT sem criptografia é uma prática comum em implementações mais simples, tornando esse ataque frequente.

3. *Interceptar o acesso do usuário com um segundo ESP32*  
   - *Ataque possível*: Um atacante pode configurar um segundo ESP32 para simular um ponto de acesso Wi-Fi ou broker MQTT falso, realizando ataques de *phishing* para capturar credenciais ou dados enviados pelos dispositivos.  
   - *Impacto alto*: Caso credenciais ou comandos sensíveis sejam capturados, o atacante pode assumir o controle do sistema IoT.  
   - *Risco baixo*: Esse ataque exige proximidade física e configurações específicas, reduzindo sua probabilidade.

4. *Cancelamento da frequência Wi-Fi*  
   - *Ataque possível*: Um atacante pode usar um jammer ou outro dispositivo para interromper a comunicação Wi-Fi, resultando em um ataque de *DDoS físico* ao bloquear o uso da frequência.  
   - *Impacto alto*: A interrupção da comunicação pode causar paralisação total de sistemas dependentes de Wi-Fi.  
   - *Risco baixo*: A probabilidade é baixa, já que jammers são mais raros e muitas vezes ilegais em redes corporativas.

### Conclusão
Essas vulnerabilidades mostram a importância de usar configurações seguras e implementar boas práticas, como criptografia no MQTT, mitigação de ataques DDoS e segmentação de rede. Entender esses pontos ajuda a proteger redes IoT de falhas críticas.