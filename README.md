# Programa Conversor de Unidades em Linguagem C

## Descrição
Este projeto tem como objetivo desenvolver um programa simples de conversão de unidades em linguagem C. Ele é parte de uma atividade prática para assimilação dos conceitos de versionamento utilizando Git e GitHub, com foco na colaboração e no trabalho em equipe. O programa será modularizado, permitindo que diferentes integrantes da equipe desenvolvam funcionalidades específicas de conversão.

---

## Estrutura do Projeto

### Formação da Equipe
- **Líder do Projeto**: Responsável pela gestão do repositório, aprovação de pull requests e organização das tarefas.
- **Desenvolvedores** (até 9 integrantes): Cada desenvolvedor será responsável por implementar e testar uma funcionalidade específica de conversão.

### Sugestões de Tarefas
1. **Unidades de comprimento**: Conversão entre metro, centímetro, milímetro.
2. **Unidades de massa**: Conversão entre quilograma, grama, tonelada.
3. **Unidades de volume**: Conversão entre litro, mililitro, metros cúbicos.
4. **Unidades de temperatura**: Conversão entre Celsius, Fahrenheit, Kelvin.
5. **Unidades de velocidade**: Conversão entre km/h, m/s, mph.
6. **Potência**: Conversão entre watts (W), quilowatts (kW), cavalos-vapor (cv ou hp).
7. **Unidades de área**: Conversão entre metro quadrado, centímetro quadrado.
8. **Unidades de tempo**: Conversão entre segundos, minutos, horas.
9. **Dados digitais**: Conversão entre bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB).
10. **Interface de Usuário**: Desenvolver uma interface básica para interagir com o programa.
11. **Testes e Depuração**: Garantir a funcionalidade e a confiabilidade de todas as conversões.

---

## Como Configurar o Projeto

1. Clone o repositório:
   ```bash
   git clone <URL_DO_REPOSITORIO>
   ```

2. Entre na pasta do projeto:
   ```bash
   cd programa-conversor
   ```

3. Compile o programa:
   ```bash
   gcc -o conversor main.c
   ```

4. Execute o programa:
   ```bash
   ./conversor
   ```

---

## Estrutura do Repositório

```plaintext
/
├── src/               # Código-fonte
│   ├── main.c         # Arquivo principal
│   ├── comprimento.c  # Conversões de comprimento
│   ├── massa.c        # Conversões de massa
│   ├── ...            # Outros módulos
├── include/           # Arquivos de cabeçalho
├── tests/             # Scripts de teste
├── docs/              # Documentação
├── README.md          # Descrição do projeto
```

---

## Fluxo de Trabalho

1. **Criação de Branches**:
   Cada funcionalidade deve ser implementada em uma branch separada com o seguinte padrão de nomenclatura:
   ```plaintext
   feature/<nome-da-funcionalidade>
   ```

2. **Pull Requests**:
   Após implementar e testar a funcionalidade, submeta uma pull request para a branch `main`.

3. **Revisão**:
   O líder do projeto e outros membros devem revisar e aprovar as mudanças antes da fusão.

4. **Testes**:
   Execute os testes antes de concluir o merge para garantir a estabilidade do código.

---

## Contribuição

1. Faça um fork do repositório.
2. Crie sua branch para a funcionalidade desejada.
3. Envie as mudanças para o seu fork.
4. Submeta uma pull request para o repositório original.

---

## Licença
Este projeto é distribuído sob a licença MIT. Veja o arquivo `LICENSE` para mais informações.

