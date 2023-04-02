<br/>
<p align="center">
  <h3 align="center">_PRINTF Function.</h3>

  <p align="center">
    Replicate of many of the functons of the original printf, only that we think that are more important, with us modifications.
    <br/>
    <br/>
    <a href="https://github.com/JereDev19/holbertonschool-printf"><strong>Explore the docs »</strong></a>
    <br/>
    <br/>
  </p>
</p>

<br>
</br>

<h2 align="center">About The Project</h2>

<p align="center">This is a custom implementation of the printf function in C, developed as a project for Holberton School. The function supports the following format specifiers: %s, %d, %i, %c and %%, and works the same way as the original printf function.</p>

<br>
</br>

<br>
</br>

##  Flowchart

[Search "Flowchart" in Flowchart repository!](https://github.com/JereDev19/holbertonschool-printf/tree/main/FlowPrintf)

<br>
</br>

## Usage

The _printf function works very similar as the original printf function.

* To call the function use this: _printf("format string", arguments);

The first argument is a string that contains format specifiers, which are replaced by the corresponding argument values. The function returns the number of characters printed (excluding the terminating null byte).

<br>
</br>

# Example:

    char *str = "This is a holberton project";
    int num = 42;

    _printf("String: %s\n", str);
    _printf("Decimal: %d\n", num);
    _printf("Character: %c\n", 'H');
    _printf("Percent sign: %%\n");


# Output:

    String: This is a holberton project
    Decimal: 42
    Character: H
    Percent sign: %

<br>
</br>

<div align="center">

## Format Specifiers

| Format Specifiers | Description |
| --- | --- |
| %d | Prints a decimal (base 10) integer. |
| %i | Same as *%d*. |
| %s | Print a string. |
| %c | Print a single character. |
| %% | Simply print a %. |

</div>

<br>
</br>

## Authors

* **Jeremias Erba** - *Holberton Student* - [Jeremias Erba](https://github.com/JereDev19/) - *Software development and team leadership.*
* **Lautaro Rodriguez** - *Holberton Student* - [Lautaro Rodriguez](https://github.com/LautareteX/) - *Software Developer.*
