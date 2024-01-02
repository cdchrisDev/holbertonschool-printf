/**
 * get_percent - get function
 * @spcfier: the spc
 * @ap: variadic argument
 * Return: the function 
 */
int get_percent(char spcfier, va_list ap)
{
        int i = 0;
        char str;

        if (spcfier == 'c') /* char */
                i += printChr(va_arg(ap, int));
        else if (spcfier == 's') /* string */
                i += printStr(va_arg(ap, char *));
        else if (spcfier == 'd' || spcfier == 'i')
        {       /* integer */
                char *s = &str;

                i += printInt(va_arg(ap, int), s, 10);
        }
        else if (spcfier == 'x' || spcfier == 'X')
        {       /* HEX */
                char *s = &str;

                i += printDig(va_arg(ap, unsigned int), 16);
        }
        else if (spcfier == 'o' || spcfier == 'O')
        {
                /* octal */
                char *s = &str;

                i += printDig(va_arg(ap, unsigned int), 8);
        }
        else
                i += write(1, &spcfier, 1);
        return (i);
}
