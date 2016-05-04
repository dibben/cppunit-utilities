# Utilities and extensions for CppUnit

## Introduction

This repository contains some utilities for use with CppUnit.


CppUnit is a unit test framework based on the original JUnit. The original cppunit library
can be found [here](https://sourceforge.net/projects/cppunit/ "Sourceforge").
A newer freedesktop.org  fork can be found [here](https://www.freedesktop.org/wiki/Software/cppunit/ "freedesktop.org")

## Features

### Support QtCreator message parsing

There are two outputter classes derived from ```CPPUNIT_NS::Outputter```

* GccOutputter - prints test results in the same format as GCC error messages
* MSVCOutputter - prints test results in the same format as MSVC error messages

These were created for use with the QtCreator IDE. When tests are run automatically after a build
the IDE parses the output and can display a list of test failures if the format of the output is
the same as that of the current compiler. For this to work, the test main function should contain
something like:

```
// Print test in a compiler compatible format.
#ifndef _WIN32
    GccOutputter outputter( &result, std::cout );
#else
    MSVCOutputter outputter( &result, std::cout );
#endif
outputter.write();
```

The ```CompilerOutputter`` that is part of CppUnit did not produce the correct output for QtCreator.


### Qt Support

The ```QtStreamOperators.h``` contains some helper functions when using Qt. This enables the use of ```QString```
and other Qt objects in ```ASSERT``` macros.

## Usage

The files can be compiled into a library (a qmake build file is included) or just included directly with the test project.

## More Information

More information on using the CppUnit with Qt creator is available [here](http://www.codegardening.com/2016/05/using-cppunit-with-qtcreator.html "Using CppUnit with QtCreator")


