mkdir build && cd build
conan install ..

# cmake .. -DCMAKE_EXPORT_COMPILE_COMMANDS=1 # generates compile_commands.json
cmake -GNinja ..

# ln -s compile_commands.json ../compile_commands.json # link compile_commands.json to home dir
ln -s conan_ycm_extra_conf.py ../.ycm_extra_conf.py
ln -s conan_ycm_flags.json ../.ycm_flags.json
