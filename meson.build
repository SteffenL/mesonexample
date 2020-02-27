project('mesonexample', 'cpp')

cmake = import('cmake')

zlib = cmake.subproject('zlib')
zlib_dep = zlib.dependency('zlibstatic')

libpng = cmake.subproject('libpng', cmake_options : [
    'PNG_SHARED=OFF',
    'PNG_STATIC=ON',
    'PNG_TESTS=OFF'
])
libpng_dep = libpng.dependency('libpng')

app_dependencies = [zlib_dep, libpng_dep]
executable('app', 'src/main.cpp', dependencies : app_dependencies)
