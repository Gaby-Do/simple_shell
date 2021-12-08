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

![flowchart](https://lh3.googleusercontent.com/V9TeMpNS0eGZui0udGELdA44bNl4pJU9_cWY6TLQhWIUJQBYTH7SF_sj9PKsElvyxIPRwu5hfWeB1E_TqT51uHxXSwY3kqqRvOjXwgoKIxXKdd0EnkYLdXRWGpniF6FJ97ZclZJbpaAp4XCgMFK_t1IRCior975aYxELTj3Yj_-EZCVbVL_ezJyF0IELZKP8gXdl0F5s93WgQivLLm5jQwQndYMpOYDz9OmwkL_J9JswKfEsU5j4k6d_tMAMWArgDLbkvEBvR6YbqWQKjsyA5yOIXoXU5JMuonG7USjHNUdEHpGYYur_qCFXu452cnUvtzUgOyT186tu6LLeC8pDbcxhpbmr4KP1UxG5Z8kiCLMrVs7uJ8iewkpZ8fUM4KxvwF79vC5d5EHi7JEkz9FfwXHbziH0492rwyqnQ8EsaLZjeYqJ3ghdZd_FDzldh8zzAb7qI-VewOrL3eYa3I7lOOBfF3zduhv2eZkLBGfgSFVcz6WyqKncGus-qUxg65xPLrAlI_Ri7clurzd6-OBtkPo_61jFOwDJDrGYB27S6B-rHR7e7J2qHiEls0tXcLRLoTeoAMA89EZXEromT63d-iUM-_raFiNqSiH8YhuNN62N8LF6qyRjy_PrwC1FKQm9xVHbGSlQDWk-Z8j48J-_jhsAm9MfE3418Nr1zNKRRLIz5pwxACYHcC5RFrn6fv1hGl1FDWOz3D3-fXwd07XZPVk=w579-h866-no?authuser=0)

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