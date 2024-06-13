# README

Esta plantilla sirve para crear proyectos en C++ que utilicen CMake como sistema de construcción.
Incluye las siguientes características:

- Compilación de código C++ usando CMake
- Pruebas unitarias con Google Test

## Cómo compilar

Para compilar el proyecto, ejecuta los siguientes comandos:

```bash
cmake -S . -B build
cmake --build build
```

Para compilar en modo debug, ejecuta los siguientes comandos:

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build
```

La ventaja de compilar en modo debug es que su ejecutable va a incluir los símbolos de depuración, por lo que
al usar herramientas como gdb o valgrind, se van a poder ver los nombres de las funciones y las líneas de código
que generaron el error.

## Cómo ejecutar las pruebas

Para ejecutar las pruebas, ejecuta el siguiente comando:

```bash
./build/unit_tests
```

## Instrucciones para correr coverage

En el directorio raiz del proyecto, ejecutar los siguientes comandos:

```bash
cmake -S . -B build  -DCMAKE_BUILD_TYPE=Debug -DCOVERAGE=ON
cmake --build build
cd build
make
make coverage_html
```

Luego pueden abrir el archivo index.html que se encuentra en la carpeta coverage (build/coverage_html/index.html), para
ver el reporte de coverage.

# Dependencias

Esta plantilla tiene las siguientes dependencias:

- cmake
- gcovr

Para instalarlas en Ubuntu, ejecuta el siguiente comando:

```bash
sudo apt install cmake gcovr
```

Para instalarlas en MacOS, ejecuta el siguiente comando:

```bash
brew install cmake gcovr
```

# clang-format
Esta plantilla incluye un estilo predefinido de clang-format, basado en el estilo de Google. Este se encuentra en el archivo .clang-format. Para formatear el código, ejecutar el siguiente comando:

```bash
./run-clang-format.sh
```

Es importante destacar que dicho comando solamente va a funcionar en sistemas Unix, como Linux o MacOS.

# Infer
Infer es una herramienta de análisis estático de código que permite encontrar errores en el código fuente. Para instalarlo, ejecuta los siguientes comandos:

```bash
VERSION=1.1.0; curl -sSL "https://github.com/facebook/infer/releases/download/v$VERSION/infer-linux64-v$VERSION.tar.xz" | sudo tar -C /opt -xJ && sudo ln -s "/opt/infer-linux64-v$VERSION/bin/infer" /usr/local/bin/infer
```

Para ejecutar Infer, ejecuta el siguiente comando:

```bash
cmake -B build -S . -DCMAKE_BUILD_TYPE=DEBUG
cmake --build build
cd build
infer run -- make
```

# cppcheck
Cppcheck es una herramienta de análisis estático de código que permite encontrar errores en el código fuente. Para instalarlo, ejecuta los siguientes comandos:

```bash
sudo apt install cppcheck
```

Para ejecutar Cppcheck, ejecuta el siguiente comando:

```bash
ppcheck --enable=all --suppress=missingIncludeSystem --suppress=syntaxError --error-exitcode=1 --includes-file=./include/ --language=c++ --std=c++11 -i src/CMakeLists.txt -i tests/CMakeLists.txt src/* test/*
```
