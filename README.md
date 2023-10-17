# Algoritmos-e-Programa-o-estruturada-UCB

# teste
- ## Comandos switch-case
	- <mark style="background: #BBFABBA6;">Compara igualdades</mark>
	- Ex: Pedir para o usuario escolher um numero de 1 a 4 no <mark style="background: #FFB8EBA6;">menu</mark>
		-  Se for 1 -> agua, 
		     Se for 2 -> arroz, 
		     Se for 3 -> feijão, 
		     Se for 4 -> sair so menu,
		     Se for outro numero -> obção invalida.
	- Como se fosse uma sequencia de *if*
- <mark style="background: #BBFABBA6;">Sintax</mark>:
```C
Switch (<Var>){
	case <v1>:
			<Bloco_de_comando_1>
		break;
		...
	case <vN>:
			<Bloco_de_comando_N>
		break;
	default:
			<Bloco_de_comando_padrão>
		break;
}
```
	- <var> -> E a variavel que vai ser Comparada
	- <v1> -> E o primeiro valor que esta sendo comparado com a variavel, se for verdadeiro vai rodar o bloco
	- <Bloco_de_comando_1> -> Local a onde vai ficar o codgo que vai ser rodado
	- brack; -> sinaliza o fim do da execução do switch, se chegar nesse comando ele para o Switch
	- case <vN> -> Outras comparações
	- default -> bloco de execução padrão, caso não for nem um dos case ele sera execultado.