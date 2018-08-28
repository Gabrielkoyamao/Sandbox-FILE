<h3>So postei aqui p pegar dps</h3>

1.	Faça um programa que crie um arquivo TEXTO em disco, com o nome “dados.txt”, e escreva neste arquivo em disco uma sequência de números de 1 até 100, com um número em cada linha. Abra este arquivo em um editor de textos, como por exemplo o Bloco de Notas.

2.	Faça um programa que leia o arquivo TEXTO criado no exercício 1. Exibir na tela os dados lidos do respectivo arquivo, com um número em cada linha.

3. Faça um programa que leia um arquivo texto do disco, lendo linha a linha, e exibindo cada uma das
linhas numeradas na tela. Pode ser lido um arquivo fonte – arquivo.c e mostre na tela com as linhas numeradas. Exemplo: - As primeiras linhas do arquivo iriam ser exibidas na tela da seguinte forma:
Sugestão: pesquisar a função fgets -> lê uma linha inteira de uma vez.

4. Faça um programa que imite um editor de textos. Inicialmente você irá ler os dados digitados pelo
usuário (linhas de texto) e criar um vetor em memória onde serão armazenados os textos fornecidos
pelo usuário (texto de 1 até no máximo 50 linhas). O usuário vai escrever o seu texto, terminando por
uma linha onde ele irá escrever apenas a palavra ‘FIM’, o que determina que ele não deseja mais
digitar linhas de texto. Sendo assim, o texto final pode ter um número variável de linhas, entre 1 e 50.
Salvar o conteúdo armazenado na memória neste vetor, em um arquivo texto em disco. 

5. Faça um programa que leia (do teclado) um cadastro de 10 alunos, indicando o nome, nota1, nota2.
 Calcule a média aritmética simples dos 10 alunos e depois escreva em um arquivo texto os dados de
cada aluno: nome, nota1, nota2 e média. Lembre-se de que as notas e média deverão ser apresentadas como valores que possuem até 2 casas após a vírgula.

6. Faça um programa que leia os dados gerados pelo programa anterior do exercício 5 e mostre na tela as
informações referentes aos alunos, calculando também a média geral da turma.

7. Faça um programa de criptografia de dados, ou seja, um programa capaz de ler um arquivo texto,
codificar este arquivo através de alguma técnica de alteração do código ASCII (exemplo: somar 1 ao
valor ASCII de cada caracter), e escrever em disco o arquivo codificado. Crie um outro programa que
descriptografe um arquivo criado pelo programa de criptografia, realizando a operação inversa: ler o
arquivo do disco, descodificar e escrever o novo arquivo em disco descriptografado. Lembre-se que
para que seja possível criptografar/descriptografar um arquivo a função de codificação deve possuir
uma função inversa. Exemplo de código de criptografia:
tamanho = strlen(linha);
for (i=0; i < tamanho; i++)
linha_cripto[i] = linha[i] + 1; /* Soma 1 ao código de cada caracter da string */
linha_cripto[tamanho]=’\0’; /* Adiciona a marca de fim de string */
Desafios: Você consegue desenvolver uma função de criptografia/descriptografia que seja mais
sofisticada e menos óbvia do que esta?


8. Faça um programa que peça para o usuário entrar um texto que deseja procurar (uma palavra) e que em
seguida leia um arquivo texto do disco e procure por esta palavra no arquivo. Caso seja encontrada a
palavra digitada pelo usuário em alguma das linhas do arquivo texto lido do disco, o programa deverá
exibir na tela o número da linha do arquivo onde encontrou esta ocorrência da palavra, bem como o
conteúdo da linha onde se encontra 
a palavra procurada. Dica: use o comando “strstr” para procurar a palavra.


9. Faça um que abra um arquivo HTML e elimine todas as “tags” do texto, ou seja, o programa deve gerar um novo arquivo em disco que elimine todas as tags Html que são caracterizadas por comandos entre “<” e “>”. Veja abaixo um exemplo de um texto em HTML e do texto que deverá ser gerado pelo programa após eliminar as tags Html.

10. Faça um editor de textos, inspirado no NotePad (Bloco de Notas) ou WordPad/Word, que permita ao usuário inicialmente ler um texto de um arquivo texto armazenado em disco, armazene este texto em um vetor de strings em memória, onde cada linha do texto terá um número indicando a linha correspondente. Uma vez lido o arquivo, o programa deve ler comandos do usuário (laço), que poderá ser um dos seguintes comandos: Listar (opção 1: indicar o intervalo de linhas que deseja exibir na tela, linha inicial até linha final); Editar (opção 2: indicar qual a linha deseja editar, mostrar o seu conteúdo atual, ler um novo conteúdo e substituir o conteúdo da linha antiga pelo novo conteúdo); Inserir (opção 3: indicar depois de qual linha desejo inserir uma nova linha de texto, “abrindo espaço”  após esta linha e inserindo um novo texto); Apagar (opção 4: indicar qual linha deseja apagar, exibir seu conteúdo, confirmar a remoção e remover esta linha do texto); Abandonar (opção 5: sair do programa, sem salvar o texto editado, onde é pedida uma confirmação do usuário sobre a execução desta opção); Sair (opção 6: sair do programa, onde o texto será salvo em um arquivo em disco sobrescrevendo o arquivo original, sendo pedida uma confirmação do usuário sobre a execução desta opção). O programa no final deve portanto ter a capacidade de ler um arquivo de texto do disco, editar (listar, incluir, excluir, modificar linhas de texto) e salvar em disco o texto novo que foi editado, executando as operações usuais de um editor de textos simples.

11.  Fazer um programa para simular uma agenda de telefones. Para cada pessoa deve-se ter os seguintes dados:
• Nome
• E-mail
• Endereço (contendo campos para Rua, numero, complemento, bairro, cep,
cidade, estado, país)
• Telefone (contendo campo para DDD e número)
• Data de aniversário (contendo campo para dia, mês, ano)
• Observações : Uma linha (string) para alguma observações especial.
a)	Definir a estrutura acima.
b)	Declarar a variável agenda (vetor) com capacidade de agendar até 10 nomes.
c)	Gravar os dados desse vetor em um arquivo chamado agenda.txt.
d)	Definir um função para buscar por primeiro nome(busca_nome) no arquivo agenda.txt: Imprime os dados da pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas)

12. Grave a saída do programa a seguir em um arquivo pilha.txt. OBS: Estude o funcionamento da pilha com e sem ponteiro.
