echo "Correção - ex00"
cat ex00/z
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex01"
tar -xvf ex01/testShell00.tar -C ex01/
cd ex01
ls -l
cd ..
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex02"
tar -xvf ex02/exo2.tar -C ex02/
cd ex02
ls -l
cd ..
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex03"
cat ex03/id_rsa_pub
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex04"
bash ex04/midLS
cd ex02
bash ../ex04/midLS
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex05"
cd ..
bash ex05/git_commit.sh | cat -e
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex06"
bash ex06/git_ignore.sh |cat -e
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex07"
cat -e ex07/b
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex08"
mkdir ex08/pasta
mkdir ex08/pasta/outrapasta
touch ex08/arquivo
touch ex08/#arquivo#
touch ex08/arquivo~
touch ex08/pasta/arquivo
touch ex08/pasta/#arquivo#
touch ex08/pasta/arquivo~
touch ex08/pasta/outrapasta/arquivo
touch ex08/pasta/outrapasta/#arquivo#
touch ex08/pasta/outrapasta/arquivo~
bash ex08/clean
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex09"
echo "                                          42" > ex09/42
file -m ex09/ft_magic ex09/42
echo " "
echo "------------------------------------------------------------------------------------"

