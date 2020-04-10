# Plugins e Delegates Em C++  com ponteiros e funções 

Como escrever Plugins e Delegates em C++ . Nova forma de olhar para ponteiros, e funções 

- ## [O que é um Plugin ou Delegate (Delegado) ?](#DEF-PLUGIN-DELEGATE)
- ## [Ponteiros](#PN)
  - ### [Definição de Ponteiros](#DPN)
- ## [Ponteiros para *funções*](#PF)
  - ### [Definição de Funções](#DFN)
  - ### [Ponteiros que apontam para funções](#PAF)
- ## [Primeira Tentativa para **Plugins/Delagates**](#1-Tentativa-Plaguin)
- ## [Ponteiros para *arrays*](#PA)
  - ### [Ponteiros que apontam para arrays](#PAA)
- ## [Funções que retornam Ponteiros para *arrays*](#FRPA)
- ## [Funções que retornam Ponteiros para funções](#FRPF)

# <a name="DEF-PLUGIN-DELEGATE"></a> O que é um Plugin ou Delegate (Delegado) ?
Um **Plugin** é nada mais do que um componente que adiciona funcionalidades específicas há um programa informático existente. Plugins possibilitam personalizações de programas.

Para perceber melhor o que é um **plugin** vamos ver um exemplo prático. Imagina por exemplo o navegador Google Chrome, ele é um programa informático, e permite adicionar personalizações por intermédio de outros programas chamados de extensões. Por exemplo
*ABP* ( Add Block Plus) para bloquear publicidades
*Screen Recorder* para gravar o ecrã do navegador 
*Flash Player* para executar vídeos com formatos modernos
 Estas extensões são chamados de plugins por que adicionam funcionalidades específicas ao programa informático existente que no nosso caso é o Google Chrome.

Um **Delegate** (delegado) é nada mais do que um programa que permite a delegação de uma tarefa específica para o componente dedicado a executar esta tarefa, por meio de abstração de interfaces.

Por exemplo, vimos anteriormente que o Google Chrome tem várias extensões(plugins), para ele conseguir executar uma tarefa requerida por uma extensão ele utiliza delegate para delegar a execução da tarefa  pela extensão específica( que sabe executar a tarefa)

Como exemplo prático, imagine que queremos executar um vídeo no formato **.AVI** , o Chrome não sabe executar este tipo de video, então ele procura pela extensão(plugin) que sabe executar este tipo de vídeo, se a extensão estiver instalada então o vídeo será executado, se não, ele procura pela extensão por defeito e se não encontrar nenhuma ele gera uma mensagem de alerta ou erro.

**Como é que *Plugin* e *Delegado* funcionam juntos ?**

A cooperação entre *plugin* e *delegate* (delegado),  torna-se mais importante quando estamos a lidar com várias extensões(plugins), porque não sabemos de antemão quantos e quais tipos de plugins existirão, daí a necessidade de 
delegar a tarefa para a o componente que sabe executar a tarefa em questão. 


