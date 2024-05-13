# DESAFIO Dio - Desenvolvendo um Projeto com o Paradigma de Programação Orientado à Aspectos



Este é um projeto desenvolvido em C++ e Java, com o objetivo de implementar uma solução envolvendo o Paradigma de Programação Orientado a Aspectos em um sistema bancário.

O projeto envolve o desenvolvimento de um sistema de gerenciamento de pedidos usando o paradigma AOP. O sistema deve ser capaz de gerenciar pedidos, clientes e produtos. O sistema deve ser modular, reutilizável e fácil de manter.

O sistema deve ser desenvolvido usando uma linguagem de programação que suporte AOP e um framework AOP. O sistema deve ser documentado e testado completamente.

O paradigma de programação orientado a aspectos (AOP) é um paradigma de programação que permite adicionar funcionalidades adicionais a um programa sem modificar o código-fonte original. Isso é feito por meio do uso de aspectos, que são módulos de código que definem como e quando as funcionalidades adicionais devem ser aplicadas.

AOP é particularmente útil para adicionar funcionalidades transversais a um programa, como logging, segurança e gerenciamento de transações. Essas funcionalidades são normalmente difíceis de implementar de forma modular e reutilizável usando paradigmas de programação tradicionais.



## **Requisitos**

Para desenvolver um projeto com o paradigma AOP, você precisará dos seguintes requisitos:

- Uma linguagem de programação que suporte AOP
- Um framework AOP
- Uma compreensão dos conceitos de AOP

### **Etapas**

As etapas para desenvolver um projeto com o paradigma AOP são as seguintes:

1. **Identifique as funcionalidades transversais que deseja adicionar ao seu programa.**
2. **Crie aspectos para definir como e quando as funcionalidades transversais devem ser aplicadas.**
3. **Aplique os aspectos ao seu programa.**
4. **Teste o seu programa para garantir que as funcionalidades transversais estão funcionando corretamente.**



## Linguagens Utilizadas

- C++
- Java

## Características do Projeto

* O projeto utiliza as linguagens C++ e Java para implementar o Paradigma Orientado a Objetos no programa principal e o Paradigma Orientado a Aspectos na verificação de saldo.

* O código é otimizado para garantir um desempenho eficiente e rápido.

* O projeto segue as melhores práticas de programação e design de software.

  

## Problema e Solução

O problema abordado envolve um sistema bancário onde o cliente pode fazer saques em diferentes contas (corrente, salário, poupança, investimento), gerando uma mensagem de saldo insuficiente caso necessário. A verificação de saldo é implementada utilizando o Paradigma Orientado a Aspectos, aplicando a função transversalmente em todas as contas antes de liberar o dinheiro.



## **Conclusão**

O paradigma AOP é uma ferramenta poderosa que pode ser usada para adicionar funcionalidades adicionais a um programa sem modificar o código-fonte original. Isso torna o AOP particularmente útil para adicionar funcionalidades transversais a um programa, como logging, segurança e gerenciamento de transações.



## **Aprendizado**

Ao desenvolver um projeto com o paradigma AOP, você aprenderá sobre os seguintes conceitos:

- Conceitos de AOP

- Como usar uma linguagem de programação que suporte AOP

- Como usar um framework AOP

- Como identificar e implementar funcionalidades transversais

  

## **Aplicabilidade prática**

O AOP pode ser aplicado a uma ampla variedade de problemas de programação, incluindo:

- Adicionar logging a um programa
- Adicionar segurança a um programa
- Gerenciar transações em um programa
- Implementar políticas de negócios em um programa



O AOP pode ser usado para tratar preocupações como:

- **Logging**: Registrar informações sobre transações, erros ou eventos importantes.
- **Segurança**: Aplicar autorização e autenticação de maneira consistente em todo o sistema.
- **Transações**: Gerenciar transações de forma transparente, garantindo consistência e atomicidade.
- **Auditoria**: Rastrear alterações em dados sensíveis.
- **Cache**: Implementar cache de dados para melhorar o desempenho.

Para implementar AOP, você pode usar ferramentas como o **AspectJ** (para Java) ou **CppAOP** (para C++). Essas ferramentas permitem definir aspectos e aplicá-los a partes específicas do código. Por exemplo,  criar um aspecto de log para registrar informações de transações em todas as classes relacionadas a operações bancárias.