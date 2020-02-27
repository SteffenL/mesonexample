project('mesonexample', 'cpp')

cmake = import('cmake')

zlib_project = cmake.subproject('zlib')
zlib_static_library = zlib_project.dependency('zlibstatic')

#libpng_project = cmake.subproject('libpng', cmake_options : [
#    'PNG_SHARED=OFF',
#    'PNG_STATIC=ON',
#    'PNG_TESTS=OFF'
#])
#libpng_library = libpng_project.dependency('libpng')

subdir('src')
