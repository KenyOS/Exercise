<!DCTYPE html>
<html>
	<head>
		<meta charset="utf-8"/>
		<title> ALTERAR DISCIPLINA</title>
	</head>
<body>
<?php
//PASSO 0: PEGAR O VALOR DO CODIGO
$codigo = $_REQUEST['codigo'];
//PASSO 1: CONECTAR NO MYSQL
$conexao = mysqli_connect('localhost', 'root', '', 'graducao') or die (" A conexão não foi executada com sucesso");
//PASSO 2: CRIAR UMA CONSULTA
$consulta = "SELECT codigo, nome, curso, carga_horaria FROM disciplinas WHERE codigo='$codigo'";
//PASSO 3: EXECUTAR A CONSULTA
$resultado = mysqli_query($conexao, $consulta);
//PASSO 4: EXIBIR O RESULTADO
list($codigo, $nome, $curso, $carga_horaria) = mysqli_fetch_row($resultado);

if(!isset($_REQUEST['shazan'])) {
?>
<form name="okok" action="alterar.php">
	<label for="nome">NOME:</label>
	<input type="text" name="nome" value="<?php echo $nome;?>"><br>
	<label for="curso">CURSO</label>
	<input type="text" name="curso" value="<?php echo $curso;?>"><br>
	<label for="carga">CARGA HORÁRIA</label>
	<input type="text" name="carga" value="<?php echo $carga_horaria;?>"><br>
	<inpu type="hidden" name="cod" value="<?php echo $codigo;?>">
	<input type="submit" name="shazan" value="MÁGICA PÓ">
</form>
<?php
}
//FAZER O UPDATE SE FOR CLICADO NO BOTÃO
if(isset($_REQUEST['shazan'])) {
		//PASSO 0: PEGAR O VALOR DO CODIGO
		$codigo = $_REQUEST['cod'];
		$curso = $_REQUEST['curso'];
		$nome = $_REQUEST['nome'];
		$carga = $_REQUEST['carga'];

		//PASSO 2: CRIAR UMA CONSULTA
		echo $consulta = "UPDATE disciplinas SET nome='$nome', curs='$curso', carga_horaria='$carga' WHERE codigo='$codigo'";
		//PASSO 3: EXECUTAR A CONSULTA
		$resultado = mysqli_query($conexao, $consulta);
		echo "DISCIPLINA ALTERADA FAMÍLIA"

}
?>
</body>
</html>