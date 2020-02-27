project('mesonexample', 'cpp')

cmake = import('cmake')

zlib_project = cmake.subproject('zlib')
zlib_dep = zlib_project.dependency('zlibstatic')

libpng_project = cmake.subproject('libpng', cmake_options : [
    'PNG_SHARED=OFF',
    'PNG_STATIC=ON',
    'PNG_TESTS=OFF'
])
libpng_dep = libpng_project.dependency('libpng')

app_dependencies = [zlib_dep, libpng_dep]
executable('app', 'src/main.cpp', dependencies : app_dependencies)
