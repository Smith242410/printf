\" Manpage for _printf

.\" Contact gndungi@gmail.com/wabluekey@gmail.com for typos or error correction.

.TH man 8 "10 April, 2017" "1.0" "_printf man page"

.SH NAME

    int _printf(const char *format, ...)

    Prints a string to the screen, taking into account directives

    that format the string.



.SH SYNOPSIS

    Within a main function, _printf is used with no flags or options.

    directives can be used to format the string, and these include

    %c (character), %s (string), %d (decimal), and %i (integer).



    Necessary to the functioning of _printf are the following functions.

    print_number - returns the string representation of an integer.

    print_string - returns a string using print_char.

    str_len - returns the length of a string.

    count_digits - counts the number of digits in an integer.

    print_char - prints a single character.

.SH DESCRIPTION

    _printf returns the length of the string that was printed to the screen

    and can be used in a similar but limited manner to printf. See man printf.

.SH EXAMPLES

    Some examples include:

    _printf("My name is %s", "Jane");

    _printf("My middle initial is %c", 'B');

    _printf("I will be %d by my next birthday", 89);

    _printf("I have %i dogs", 3);

.SH SEE ALSO

    printf, for a more detailed explanation of what printf can do.

.SH BUGS

    Still being tested.

.SH AUTHORS

   github.com/nappybrainiac, github.com/wabluekey

.SH COPYRIGHT

    Open source
