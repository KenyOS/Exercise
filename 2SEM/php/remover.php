<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8"/>
		<title>REMOVER  DISCIPLINA</title>
	</head>
<body>
<?php
//PASSO 0: CAPTURAR O VALOR DA URL
$codigo = $_REQUEST['codigo'];

//PASSO 1: CONECTAR NO MYSQL
$conexao = mysqli_connect('localhost','root', '', 'graduacao') or die ("A conexão não foi executada com sucesso");
//PASSO 2: CRIAR UMA CONSULTA
$consulta = "DELETE FROM disciplinas WHERE codigo='$codigo'";
//PASSO 3: EXECUTAR A CONSULTA
$resultado = mysqli_query($conexao, $consulta);

echo "DISCIPLINA REMOVIDA IRMÃOS";

?>
</body>
</html>