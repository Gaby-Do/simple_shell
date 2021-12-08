# Simple_shell
This project was made during the end of the first trimester in holberton school. The target of this project is to create a imitation of the shell, however it does not work exactly as the shell (sh) itself.

##### General requirements:
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Your shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded
- Use system calls only when you need to.

##### Mandatory tasks:
- Write a README, AUTHOR and MAN for your shell.
-UNIX command line interpreter.
-Handle command lines with arguments
-Handle the PATH
-Create the exit built-in
-Create the env built-in
-Handle the End Of File condition
-What happens when you type `ls -l *.c` in the shell - blog

#### Flowchart:

Through this flowchart, you can visualize the shell algorithm step by step.

![flowchart](https://lh3.googleusercontent.com/XhgKHi07aOm5U44F01M4bXXjcDb0e5Dn9EEbidDhO9WtT0NdxzPoHLsrm6isXoL8bh7uLD0waono1P9n9JqyZkC5szR1PsuJzpREGmo4YVtMuiClM3gEEt9xTxCrqMfAslTKehHxCqSTxXPHSdHnPFigrfK47ifJC5-aq9dfcntiioUAZRaAGKReTioSjh9ZOhlTDaOFCkrNCo5FgmU9I54GCD-6jbLj-7mSFlhxL70khMutKhywz9UG6ZmBt-w5kG5ZL_3wjw--_zmnvpnLFdboVBKn7CWO1p7K7wGkoWTkcP0rYGtJADtmUHpIUP59PUV2nCOyMx9MyBgVem7NDWvVp9IvSj4cf0WE3t0gtiQDxs1YIFLz-5Dnwq9hSp4rrzSu06XmPJXG_0P5NYvZL3LOwbFK0Exj0xPdKM0ZlzyJmbpkEhBRniqUBc_FRRUhIdyBqmcZDPLZo_jKTnoH1WFtYS0PfqN-8bH_SC9lo9kQk_sbzrNWlq2HAsAk8bQZEA6nxoKwVCu09ldDXLydJPkk8p2up3eb1QSkRD0SNMRYJNe5YO4CmmRZWURzQYN6Kz0Zma4OJkNT-1ySk4dUQE6eE3GPBF4XlxRTnTd-Olz6irFiaiZjoh3gOoV_iTPto8RwveA7a8Frxh3MSxswOG22K1vmgrwIwbQKSqJ-kXyky9oBUcqYRxtogVJmGR5vHDKMKrMlf863fD5alc1Smfo=w579-h866-no?authuser=0)

#### File description:
- AUTHORS: authors of simple_shell project
- README.md: readme
- Aux functions: _prints.c & _putchar.c
- buit_in.c: env and exit built-ins
- concat.c: str functions
- ejecuta.c: function that executes
- getpath1.c: findis PATH and parses it
- hsh: executable 
- man_1_simple_shell: man of simple_shell
- path_fun.c
- shell.c
- shell.h
- str_fun.c
- str_fun1.c
- toks.c
- valida.c

#### Compilation

The shell is compiled this way:
> `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh `

#### Authors:

Raymundo Barrera Flores - <A HREF="https://www.linkedin.com/in/raymundo-barrera-a13022222/"> Linkedin </A>

Gabriela Dominguez - <A HREF="https://www.linkedin.com/in/maria-gabriela-dominguez-bb95b41a6/"> Linkedin </A>

Juan Giménez - <A HREF="https://www.linkedin.com/in/juan-valentin-gimenez-denis-381b01214/"> Linkedin </A>

#### License
No license.

End of readme.