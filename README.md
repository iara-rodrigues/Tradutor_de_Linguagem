# Tradutor_de_Linguagem

<p> Desenvolvido por Iara Rodrigues Grigorio Oliveira Silva.</p>

<h2> Observações </h2>
<ul>
<li> Se for mudar o arquivo verb.in, por favor, dê enter na última linha devido à lógica usada na resolução do problema.</li>
<li> O programa foi implementado no Windows.</li>
</ul>

<h2> Documentação </h2>
<h3><b> Main </b></h3>
<p>   Nessa função eu fiz vários 'if-else's para encontrar em qual tempo e pessoa o verbo está.</p>
<p>   Eu criei a variável 'flag' pois percebi que daria um erro caso a palavra terminasse com "m", por exemplo, mas não possuisse as outras letras necessárias para fazer com 
que a palavra seja um verbo.</p>
<p>   Caso a palavra não terminasse com nenhuma das letras que um verbo termina, ela já vai direto para o else de um não verbo.</p>
<p>   As comparações eu não fiz usando a biblioteca de String, mas tentei usar várias, como, por exemplo, strcpy, strcmp, entre outras. Não as usei pois estava dando erros e, 
como possui um prazo de entrega, optei por não usá-las. Usei apenas a strlen para achar o tamanho do vetor e, a partir disso, encontrar a última letra.</p>
<p>   Encontrei a última letra subtraindo 2 no tamanho (len), visto que o char vetor[len] é nada, pois o vetor acaba em len-1 que é onde está o '\n'. </p>
<h3><b> Função Conjugacao </b></h3>
<p>   No método main, eu abri o arquivo verb.in duas vezes para, na primeira vez calcular o número de palavras contidas no arquivo e, na segunda vez para usar essa quantidade 
como tamanho da matriz arrPalavras.</p>
