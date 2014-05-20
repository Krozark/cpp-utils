cpp-utils
========

add some usefull missing functions in the stl.



add string manipulation,maths, system and logs functions and json parser.


utils::string
=============

String manipulation

* split
* join
* replace


utils::maths
============

Maths functions

* sign
* min(...)
* max(...)
* abs


utils::log
==========

Print
-----

Print message on console with color on unix.

* todo(...)
* info(...)
* warning(...)
* error(...)
* critical(...), critical(int c,...) //call exit if c != 0
* log(type, ...) 

utils::log::format
------------------

You can used them on a ostream object with orerator <<.

* bold
* dim
* underline
* blink
* reverse
* hidden
* strikeout
* reset[type]

utils::log::colors
------------------

Change the texte color.
As format, you can use them with operator << on ostream objects;

* black
* red
* green
* yellow
* blue
* magenta
* cyan
* light_gray
* dark_gray
* light_red
* light_green
* light_yellow
* light_blue
* light_magenta
* light_cyan
* white
* reset


utils::log::bg
--------------

As Color, but change the background color.
The same colors name are defines.


utils::json
===========

A json parser.
Need flex and bison.
Can be disable in cmake, and is build as a different lib.

To parse a file (see examples/json-test.cpp)

```c++
#include <utils/json/Driver.hpp>

int main(int argc,char* argv[])
{
    utils::json::Value* v = utils::json::Driver::parse_file(argv[1]);
    std::cout<<*v<<std::endl;
    return 0;
}
```

utils::json::Value
------------------

Represent a single value.

* Type getType()const;
* long double& as_float();
* long long int& as_int();
* bool& as_bool();
* std::string& as_string();
* Object& as_object();
* Array& as_array();
* cast operators
* operator<<(std::ostream& stream, const Value& self);


utils::json::Object
-------------------

Representation of a object.

* Value& operator[](const std::string&)
* const Value& operator[](const std::string&)const 
* std::unordered_map<std::string, Value>::const_iterator begin() const;
* std::unordered_map<std::string, Value>::const_iterator end() const;
* std::unordered_map<std::string, Value>::iterator begin();
* std::unordered_map<std::string, Value>::iterator end();
* size_t size() const;
* operator<<(std::ostream& stream, const Object& self);


utils::json::Array
------------------

Represent a json array. Internalty, it's a list.

* std::list<Values> values
* operator<<(std::ostream& stream, const Array& self);









