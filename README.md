# Plugins e Delegates Em C++  com ponteiros e funções 

Como escrever Plugins e Delegates em C++ . Nova forma de olhar para ponteiros, e funções 

- ## [O que é um Plugin ou Delegate (Delegado) ?](#DEF-PLUGIN-DELEGATE)
- ## [Ponteiros *normais* e Ponteiros para *funções*](#PN-PF)
  - ### [Ponteiros *normais*](#PN)
  - ### [Ponteiros para *funções*](#PF)
- ## [Primeira Tentativa para escrever **Plugins/Delagados**](#1-Tentativa-Plaguin)
- ## [Ponteiros para *arrays*](#PA)
- ## [Funções que retornam Ponteiros para *arrays*](#FRPA)
- ## [Funções que retornam Ponteiros para funções](#FRPF)

# <a name="DEF-PLUGIN-DELEGATE"></a> O que é um Plugin ou Delegate (Delegado) ?
Um **Plugin** é nada mais do que um componente que adiciona funcionalidades específicas há um programa informático existente. Plugins possibilitam personalizações de programas.

Para perceber melhor o que é um **plugin** vamos ver um exemplo prático. Imagina por exemplo o navegador Google Chrome, ele é um programa informático, e permite adicionar personalizações por intermédio de outros programas chamados de extensões. Por exemplo
- *ABP* ( Add Block Plus) para bloquear publicidades
- *Screen Recorder* para gravar o ecrã do navegador 
- *Flash Player* para executar vídeos com formatos modernos
 
 Estas extensões são chamados de plugins por que adicionam funcionalidades específicas ao programa informático existente que no nosso caso é o Google Chrome.

Um **Delegate** (delegado) é nada mais do que um programa que permite a delegação de uma tarefa específica para o componente dedicado a executar esta tarefa, por meio de abstração de interfaces.

Por exemplo, vimos anteriormente que o Google Chrome tem várias extensões(plugins), para ele conseguir executar uma tarefa requerida por uma extensão ele utiliza delegate para delegar a execução da tarefa  pela extensão específica( que sabe executar a tarefa)

Como exemplo prático, imagine que queremos executar um vídeo no formato **.AVI** , o Chrome não sabe executar este tipo de video, então ele procura pela extensão(plugin) que sabe executar este tipo de vídeo, se a extensão estiver instalada então o vídeo será executado, se não, ele procura pela extensão por defeito e se não encontrar nenhuma ele gera uma mensagem de alerta ou erro.

**Como é que *Plugin* e *Delegado* funcionam juntos ?**

A cooperação entre *plugin* e *delegate* (delegado),  torna-se mais importante quando estamos a lidar com várias extensões(plugins), porque não sabemos de antemão quantos e quais tipos de plugins existirão, daí a necessidade de 
delegar a tarefa para a o componente que sabe executar a tarefa em questão. 

**Como escrever *plugins* e *delegados* em C++**

Este projeto trata-se de dar resposta à questão acima por intermédio de teórias e exemplos práticos. 

**Plugins** e **Delgados** escrevem-se com utilização massiva de ponteiros e funções, e um pouco de classes/estruturas. Mas não se preocupa, ao longo deste projeto  construiremos progressivamente  plugin e delegados passo por passo, todos conhecimentos necessários de ponteiros e funções serão dados de maneira que você consiga absorver a teoria, os exemplos práticos e desenvolver seus próprios plugins e delegados. Quando necessário darei-te referências onde você poderá procurar por conceitos para aprofundar seus conhecimentos de maneira que ao fim deste pequeno projeto você saiba desenvolver seus próprios **plugins** e **delegados**.

Preparado para esta jornada ?  Vamos zimbora mo amigo :)

# <a name="PN-PF"></a> Ponteiros *normais* e Ponteiros para *funções*
Ponteiros, funções, e funções para ponteiro são o princípio da construção de Plugins e Delegados.

Se já percebes muito bem ponteiros e ponteiros para funções,  então podes pular esta seção e passar diretamente aos exemplos ou melhor,  na seção [Primeira Tentativa Para escrever Plugins/Delegados](https://github.com/AdilsonCapaia/PluginsEmCMaisMais#1-Tentativa-Plaguin)

## <a name="PN"></a> Ponteiros *normais* 
Ponteiros nos permitem apontar para o endereço de uma variável e trabalhar com o ponteiro como se fosse a variável ou objeto que estamos a apontar. Se queres ter mais detalhes sobre ponteiro, da uma olhada neste artigo que eu mesmo escrevi [1.1 Breve Introdução de Ponteiros](https://github.com/AdilsonCapaia/IncoerenciasJustificaveisEmCMaisMAis#BIP)

## <a name="PF"></a> Ponteiros para *funções*
Ponteiros para *funções* nos permitem apontar para o endereço de uma função e trabalhar com o ponteiro como se fosse a nossa função em questão.

Para escrever plugins e delegados é preciso passar funções como argumentos de outras funções, isto nos permite passar um programa ao outro para personalizar nossos programas existentes. Mas em C++ não é possível passar uma função como argumento de uma outra. A única forma de fazer isto é  por ponteiro que apontam para *funções*.

Se queres aprofundar mais sobre ponteiros que apontam para funções, aconselho-te a dar uma olhada neste artigo escrito por mim [1.5 Ponteiros que apontam para funções](https://github.com/AdilsonCapaia/IncoerenciasJustificaveisEmCMaisMAis#PAF)

