echo "Verificação - Norminette"
norminette -R CheckForbiddenSourceHeader
echo "------------------------------------------------------------------------------------"
echo "Correção - ex00"
cc -Wall -Wextra -Werror ex00/ft_putchar.c ../evaluation/ex00/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex01"
cc -Wall -Wextra -Werror ex01/ft_print_alphabet.c ../evaluation/ex01/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex02"
cc -Wall -Wextra -Werror ex02/ft_print_reverse_alphabet.c ../evaluation/ex02/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex03"
cc -Wall -Wextra -Werror ex03/ft_print_numbers.c ../evaluation/ex03/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex04"
cc -Wall -Wextra -Werror ex04/ft_is_negative.c ../evaluation/ex04/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex05"
cc -Wall -Wextra -Werror ex05/ft_print_comb.c ../evaluation/ex05/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex06"
cc -Wall -Wextra -Werror ex06/ft_print_comb2.c ../evaluation/ex06/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex07"
cc -Wall -Wextra -Werror ex07/ft_putnbr.c ../evaluation/ex07/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex08"
cc -Wall -Wextra -Werror ex08/ft_print_combn.c ../evaluation/ex08/main.c
./a.out
