


g++ -fPIC -shared library.cc -o liblib.so

g++ -L. -Wl,-rpath=. new_file.cc -llib
