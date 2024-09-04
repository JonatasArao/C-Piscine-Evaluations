echo "Verificação - Norminette"
norminette -R CheckForbiddenSourceHeader
echo "------------------------------------------------------------------------------------"
echo "Correção - ex00"
cc -Wall -Wextra -Werror ex00/ft_strlen.c ../evaluation/ex00/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex01"
cc -Wall -Wextra -Werror ex01/ft_putstr.c ../evaluation/ex01/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex02"
cc -Wall -Wextra -Werror ex02/ft_putnbr.c ../evaluation/ex02/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex03"
cc -Wall -Wextra -Werror ex03/ft_atoi.c ../evaluation/ex03/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex04"
cc -Wall -Wextra -Werror ex04/ft_putnbr_base.c ../evaluation/ex04/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex05"
cc -Wall -Wextra -Werror ex05/ft_atoi_base.c ../evaluation/ex05/main.c
./a.out
echo " "




