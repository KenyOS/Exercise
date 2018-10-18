<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8"/>
		<title>LISTAR  DISCIPLINAS</title>
	</head>
<body>
<?php
//PASSO 1: CONECTAR NO MYSQL
$conexao = mysqli_connect('localhost','root', '', 'graduacao') or die ("A conexão não foi executada com sucesso");
//PASSO 2: CRIAR UMA CONSULTA
$consulta = "SELECT codigo, nome, curso, carga_horaria FROM disciplinas ORDER BY nome";
//PASSO 3: EXECUTAR A CONSULTA
$resultado = mysqli_query($conexao, $consulta);
//PASSO 4: EXIBIR O RESULTADO
while(list($codigo, $nome, $curso, $carga_horaria) = mysqli_fetch_row($resultado)) {
		 
	echo "$codigo, $nome, $curso, $carga_horaria <a href=\"remover.php?codigo=$codigo\">REMOVER</a> - <a href=\"alterar.php?codigo=$codigo\">ALTERAR</a><br> ";
		 
}

?>
</body>
</html>