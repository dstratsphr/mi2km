/*! \file arguments.h
    \brief Header file for `arguments.cpp`.

    Declares a couple of macros and the `get_arguments` function.
*/

/*! \brief Truth made case-insensitive.
*/
#define TRUE true
/*! \brief Falsehood made case-insensitive.
*/
#define FALSE false

/*! \brief Global argument list.
*/
extern vector <string> args ;

/*! \brief Process the command line arguments. Set options and store `args`.
*/
int get_arguments(int argc, char *argv[]) ;
