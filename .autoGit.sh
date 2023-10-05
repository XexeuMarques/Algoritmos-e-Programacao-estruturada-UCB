DIA=$(date +%d/%m/%Y)

git status
echo " -----------------------------------------------
Esse e o status atual do obsidian no git "
read -p "Pressione enter para continuar ... "
clear
git add .
git status
echo " -----------------------------------------------
Esse e o status atualisado (git add) "
read -p "Pressione enter para fazer o commit ... "
clear
read -p "Diigite a menssagem do commit: " COMMIT
git commit -m "$COMMIT -> $DIA"
echo " ----------------------------------------------- 
Commitado com a menssagem: $COMMIT -> $DIA "
read -p "Pressione enter para enviar ao GitHub ... "
clear
git push
