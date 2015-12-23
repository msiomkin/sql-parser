C++ SQL Parser for Hyrise
=========================

This is a SQL Parser for C++. It parses the given SQL query into C++ objects.
It is developed for integration in hyrise (https://github.com/hyrise/hyrise), but can be used in other environments as well.

In March 2015 we've also written a short paper outlining discussing some development details and the integration into our database Hyrise. You can find the paper [here](http://torpedro.com/paper/HyriseSQL-03-2015.pdf).

### Usage

To use the SQL parser in your own projects you simply have to follow these few steps. The only requirement for is GCC 4.8+. Older versions of GCC probably also work, but are untested.

 1. Download the latest release
 2. Compile the library `make` to create `libsqlparser.so`
 3. Run the tests `make test` to make sure everything worked
 4. Include the `SQLParser.h` from `src/` and link the library in your project

### Development

**Prerequisites:**
* [bison](https://www.gnu.org/software/bison/) (tested with v3.0.2)
* [flex](http://flex.sourceforge.net/) (tested with v2.5.5)

### Contributers

The following people contributed to HYRISE sql-parser in various forms.

* Pedro Flemming ([@torpedro](https://github.com/torpedro))
* David Schwalb ([@schwald](https://github.com/schwald))

#### How to contribute

We strongly encourage you to contribute to this project! If you want to contribute to this project there are several options. If you've noticed a bug or would like an improvement let us know by creating a [new issue](https://github.com/hyrise/sql-parser/issues). If you want to develop a new feature yourself or just improve the quality of the system, feel free to fork the reposistory and implement your changes. Open a pull request as soon as your done and we will look over it. If we think it's good then your pull request will be merged into this repository.

### Documenation

* [Working Syntax Examples](docs/syntax.md)
* [Known Issues](docs/issues.md)
* [Developer Documentation](docs/documentation.md)
* [Integration in Hyrise](docs/integration.md)

### License

HYRISE sql-parser is licensed as open source after the OpenSource "Licence of the Hasso-Plattner Institute" declared in the LICENSE file of this project.
