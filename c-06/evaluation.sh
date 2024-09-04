echo "Verificação - Norminette"
norminette -R CheckForbiddenSourceHeader
echo "------------------------------------------------------------------------------------"
echo "Correção - ex00"
cc -Wall -Wextra -Werror ex00/ft_print_program_name.c
./a.out
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex01"
cc -Wall -Wextra -Werror ex01/ft_print_params.c
./a.out test1 test2 test3
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex02"
cc -Wall -Wextra -Werror ex02/ft_rev_params.c
./a.out test1 test2 test3
echo " "
echo "------------------------------------------------------------------------------------"
echo "Correção - ex03"
cc -Wall -Wextra -Werror ex03/ft_sort_params.c
./a.out test2 test3 test1
echo " "
./a.out Brasil Uruguai Argentina Colombia Equador Paraguai
echo " "
./a.out BRASIL brasil
echo " "




