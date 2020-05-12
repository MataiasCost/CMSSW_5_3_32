# CMSSW_5_3_32
CMSSW_5_3_32

Pré-requisitos:
  Ter acesso ao lxplus;
  E poder rodar em condor (é importante que o diretório que você colocou a pasta tenha suporte ao condor!).

Para rodar os arquivos presentes no Analyzer, basta seguir os seuintes passos:

$ cmsenv
$ scram b -j7
$ bash prime.sh

Agora o programa vai submeter 35 mil jobs (aqui inclusos amostras de MC e sinal) que demoram por volta de 10~25h (depende da fila do condor). Depois de finalizado o processamento do condor, basta escrever o seguinte codigo:

$ bash second.sh

Esse codigo é responsável por juntar todos as 35 mil trees geradas em trees separadas de cada amostra (demora cerca de 2 minutos) na pasta chamada de amostras. Por ultimo, mas não menos importante escreva no terminal o seguinte:

$ bash terceiro.sh

Esse codigo é responsável por limpar todos os arquivos gerados, e manter somente o que está dentro da pasta amostra.






Informações dos arquivos:
  Analyzer.cc é o responsável por fazer os cortes de qualidade nos muons, elétrons e jatos. Também adquire informação dos eventos e objetos e armazena em trees. Esse arquivo está na pasta Analyzer/src/ 
  analyzer_cfg.py é onde eu declaro informações de calibragem importantes (global_tag, Json entre outros), além disso nele que é escolhido os arquivos que serão processados pelo Analyzer.cc. Esse aquivo está na pasta Analyzer/
  Condor_* são pastas criadas para fazer o condor de todas as amostras, não é necessário alterar elas.
  
Informações extras:
Caso queria rodar em files únicos (para ver se o codigo não apresenta algum erro) basta escrever os seguintes comandos no terminal:
  
  $ cmsenv
  $ cmsRun analyzer_cfg.py
  
O código dará um output no proprio terminal com informações de quantos eventos passaram.  
