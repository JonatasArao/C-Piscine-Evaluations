echo "Verificação - Norminette"
norminette -R CheckForbiddenSourceHeader
echo "------------------------------------------------------------------------------------"
echo "Correção - ex00"
cc -Wall -Wextra -Werror ex00/ft_iterative_factorial.c ../evaluation/ex00/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex01"
cc -Wall -Wextra -Werror ex01/ft_recursive_factorial.c ../evaluation/ex01/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex02"
cc -Wall -Wextra -Werror ex02/ft_iterative_power.c ../evaluation/ex02/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex03"
cc -Wall -Wextra -Werror ex03/ft_recursive_power.c ../evaluation/ex03/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex04"
cc -Wall -Wextra -Werror ex04/ft_fibonacci.c ../evaluation/ex04/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex05"
cc -Wall -Wextra -Werror ex05/ft_sqrt.c ../evaluation/ex05/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex06"
cc -Wall -Wextra -Werror ex06/ft_is_prime.c ../evaluation/ex06/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex07"
cc -Wall -Wextra -Werror ex07/ft_find_next_prime.c ../evaluation/ex07/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex08"
cc -Wall -Wextra -Werror ex08/ft_ten_queens_puzzle.c ../evaluation/ex08/main.c
./a.out
echo " "




