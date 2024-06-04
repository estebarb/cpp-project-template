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

## Cómo ejecutar las pruebas

Para ejecutar las pruebas, ejecuta el siguiente comando:

```bash
./build/tests/test
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

Luego pueden abrir el archivo index.html que se encuentra en la carpeta coverage (build/coverage_html/index.html).

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
