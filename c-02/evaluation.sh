echo "Verificação - Norminette"
norminette -R CheckForbiddenSourceHeader
echo "------------------------------------------------------------------------------------"
echo "Correção - ex00"
cc -Wall -Wextra -Werror ex00/ft_strcpy.c ../evaluation/ex00/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex01"
cc -Wall -Wextra -Werror ex01/ft_strncpy.c ../evaluation/ex01/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex02"
cc -Wall -Wextra -Werror ex02/ft_str_is_alpha.c ../evaluation/ex02/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex03"
cc -Wall -Wextra -Werror ex03/ft_str_is_numeric.c ../evaluation/ex03/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex04"
cc -Wall -Wextra -Werror ex04/ft_str_is_lowercase.c ../evaluation/ex04/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex05"
cc -Wall -Wextra -Werror ex05/ft_str_is_uppercase.c ../evaluation/ex05/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex06"
cc -Wall -Wextra -Werror ex06/ft_str_is_printable.c ../evaluation/ex06/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex07"
cc -Wall -Wextra -Werror ex07/ft_strupcase.c ../evaluation/ex07/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex08"
cc -Wall -Wextra -Werror ex08/ft_strlowcase.c ../evaluation/ex08/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex09"
cc -Wall -Wextra -Werror ex09/ft_strcapitalize.c ../evaluation/ex09/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex10"
cc -Wall -Wextra -Werror ex10/ft_strlcpy.c ../evaluation/ex10/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex11"
cc -Wall -Wextra -Werror ex11/ft_putstr_non_printable.c ../evaluation/ex11/main.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex12"
cc -Wall -Wextra -Werror ex12/ft_print_memory.c ../evaluation/ex12/main.c
./a.out
echo " "




